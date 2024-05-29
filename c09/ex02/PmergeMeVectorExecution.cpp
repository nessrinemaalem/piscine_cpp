/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeVectorExecution.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:23:46 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/12 17:51:53 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMeVector::Execute(int ac)
{
	std::cout << "Before: ";
	for (unsigned long i = 0;  i < _firstChain.size(); i++)
		std::cout << _firstChain[i] << " ";
	std::cout << std::endl;
	_timeStart = getCurrentTimeMicros();
	SortinsideTwins();
	SortbetweenTwins();
	SplitinTwooChains();
	MergeSortChains();
	std::cout << "After:  ";
	for (unsigned long i = 0;  i < _mainChain.size(); i++)
		std::cout << _mainChain[i] << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : ";
	_timeEnd = getCurrentTimeMicros();
	std::cout << _timeEnd - _timeStart << " us" << std::endl;
}

void PmergeMeVector::SortinsideTwins()
{
	for (unsigned long n = 0; n + 1 < _firstChain.size() ; n += 2)
	{
		int tmp = 0;
		if (_firstChain[n] > _firstChain[n + 1])
		{
			tmp = _firstChain[n];
			_firstChain[n] = _firstChain[n + 1];
			_firstChain[n + 1] = tmp;
		}
	}
}

void PmergeMeVector::SortbetweenTwins()
{
	int i;

	if (_firstChain.size() % 2 == 0)
		i = _firstChain.size() - 1;
	else
		i = _firstChain.size() - 2;
	while (i > 0)
	{
		int n = 1;
		while (n < i)
		{
			int tmp;
			if (_firstChain[n] > _firstChain[n + 2])
			{
				tmp = _firstChain[n - 1];
				_firstChain[n - 1] = _firstChain[n + 1];
				_firstChain[n + 1] = tmp;
				tmp = _firstChain[n];
				_firstChain[n] = _firstChain[n + 2];
				_firstChain[n + 2] = tmp;
				
			}
			n += 2;
		}
		i -= 2;
	}
}

void PmergeMeVector::SplitinTwooChains()
{
	for (unsigned long i = 0; i < _firstChain.size(); i++)
	{
		int n = _firstChain[i];
		if (i % 2 == 1)
			_mainChain.push_back(n);
		else
			_secondChain.push_back(n);
	}
}

void	PmergeMeVector::MergeSortChains()
{
	std::vector<int>::iterator 	it = _mainChain.begin();
	int							previousKey = 1; // premier chiffre de la suite de de jocobstahl
	int							currentKey = 3; // // deuxieme chiffre de la suite de de jocobstahl
	int							nextKey;

	nextKey = (previousKey * 2) + currentKey;
	if ((size_t)nextKey > _secondChain.size())
		nextKey = _secondChain.size();
	_inserted = 0;
	_mainChain.insert(it, _secondChain[0]); // on insert s0 qui est forcement < à m0
	_inserted++;
	while (_inserted < _secondChain.size())
	{
		InsertinMainChain(_secondChain[currentKey - 1], currentKey);
		int k = previousKey + 1;
		while (k < currentKey)
		{
			InsertinMainChain(_secondChain[k - 1], currentKey);
			k++;
		}
		int tmp = nextKey;
		nextKey = (previousKey * 2) + currentKey;
		if ((size_t)nextKey > _secondChain.size())
			nextKey = _secondChain.size();
		previousKey = currentKey;
		currentKey = tmp;
	}
}

int PmergeMeVector::binarySearchIterative(int target, int left, int right)
{
    while (left <= right)
	{
        int mid = left + (right - left) / 2;
        if (_mainChain[mid] == target) {
            // L'élément a été trouvé, retourner la position actuelle
            return mid;
        } else if (_mainChain[mid] < target) {
            left = mid + 1; // Rechercher dans la moitié supérieure
        } else {
            right = mid - 1; // Rechercher dans la moitié inférieure
        }
    }
    // L'élément n'a pas été trouvé, retourner la position d'insertion
    return left;
}

void	PmergeMeVector::InsertinMainChain(int toInsert, int currentKey)
{
	int posToInsert;

	if (currentKey + _inserted > _mainChain.size())
		posToInsert = binarySearchIterative(toInsert, 0, _mainChain.size());
	else
		posToInsert = binarySearchIterative(toInsert, 0, currentKey + _inserted);
	std::vector<int>::iterator it = _mainChain.begin();
	for (int i = 0; i != posToInsert; i++)
		it++;
	_mainChain.insert(it, toInsert);
	_inserted++;
}

long long PmergeMeVector::getCurrentTimeMicros()
{
    timeval currentTime;
    gettimeofday(&currentTime, NULL);
    return currentTime.tv_sec * 1000000LL + currentTime.tv_usec;
}