/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeListExecution.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:34:08 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/12 20:02:29 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMeList::Execute(int ac)
{
	std::cout << "Before: ";
	for(std::list<int>::iterator it = _firstChain.begin(); it != _firstChain.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	_timeStart = getCurrentTimeMicros();
	SortinsideTwins();
	std::cout << "after sort inside twins\n";
	for(std::list<int>::iterator it = _firstChain.begin(); it != _firstChain.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	SortbetweenTwins();
	std::cout << "after sort between twins\n";
	for(std::list<int>::iterator it = _firstChain.begin(); it != _firstChain.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	// exit(1);
	SplitinTwooChains();
	MergeSortChains();
	std::cout << "After:  ";
	for(std::list<int>::iterator it = _mainChain.begin(); it != _mainChain.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::list : ";
	_timeEnd = getCurrentTimeMicros();
	std::cout << _timeEnd - _timeStart << " us" << std::endl;
}

void	PmergeMeList::SortinsideTwins()
{
	std::list<int>::iterator	it = _firstChain.begin();
	std::list<int>::iterator	ite = _firstChain.begin();
	size_t i = 1;

	ite++;
	while (i <_firstChain.size())
	{
		int tmp = 0;
		if (*it > *ite)
		{
			tmp = *it;
			*it = *ite;
			*ite = tmp;
		}
		it++;
		it++;
		ite++; // on se deplace de deux en deux pour comparer les elements des pairs
		ite++;
		i += 2;
	}
}

// void PmergeMeList::SortbetweenTwins()
// {
// 	std::list<int>::iterator	it = _firstChain.begin();
// 	std::list<int>::iterator	jt = _firstChain.begin();

// 	int i;

// 	if (_firstChain.size() % 2 == 0)
// 		i = _firstChain.size() - 1;
// 	else
// 		i = _firstChain.size() - 2;
// 	it++;
// 	jt++;
// 	jt++;
// 	jt++;
// 	while (i > 0)
// 	{
// 		int n = 1; // taille ou position?
// 		it = _firstChain.begin();
// 		jt = _firstChain.begin();
// 		it++;
// 		jt++;
// 		jt++;
// 		jt++;
// 		while (n < i)
// 		{
// 			int tmp;
// 			if (*it > *jt)
// 			{ // tu switches les paires
// 				tmp = *it;
// 				*it = *jt;
// 				*jt = tmp;
// 				it--;
// 				jt--;
// 				tmp = *it;
// 				*it = *jt;
// 				*jt = tmp;
// 			}
// 			n += 2;
// 			it++;
// 			it++;
// 			it++;
// 			jt++;
// 			jt++;
// 			jt++;
// 		}
// 		i -= 2;
// 	}
// }

void PmergeMeList::SortbetweenTwins()
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
			if (GetValueAt(_firstChain, n) > GetValueAt(_firstChain, n + 2))
			{
				tmp = GetValueAt(_firstChain, n - 1);
				InsertAt(_firstChain, n - 1, GetValueAt(_firstChain, n + 1));
				InsertAt(_firstChain, n + 1, tmp);
				tmp = GetValueAt(_firstChain, n);
				InsertAt(_firstChain, n, GetValueAt(_firstChain, n + 2));
				InsertAt(_firstChain, n + 2, tmp);
			}
			n += 2;
		}
		i -= 2;
	}
}

void PmergeMeList::SplitinTwooChains()
{
	for (unsigned long i = 0; i < _firstChain.size(); i++)
	{
		int n = GetValueAt(_firstChain, i);
		if (i % 2 == 1)
			_mainChain.push_back(n);
		else
			_secondChain.push_back(n);
	}
}


void	PmergeMeList::MergeSortChains()
{
	std::list<int>::iterator 	it = _mainChain.begin();
	std::list<int>::iterator 	jt = _secondChain.begin();
	int							previousKey = 1; // premier chiffre de la suite de de jocobstahl
	int							currentKey = 3; // // deuxieme chiffre de la suite de de jocobstahl
	int							nextKey;

	nextKey = (previousKey * 2) + currentKey;
	if ((size_t)nextKey > _secondChain.size())
		nextKey = _secondChain.size();
	_inserted = 0;
	_mainChain.insert(it, *jt); // on insert s0 qui est forcement < à m0
	_inserted++;
	while (_inserted < _secondChain.size())
	{
		InsertinMainChain(GetValueAt(_secondChain, currentKey - 1), currentKey);
		int k = previousKey + 1;
		while (k < currentKey)
		{
			InsertinMainChain(GetValueAt(_secondChain, k - 1), currentKey);
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

int PmergeMeList::binarySearchIterative(int target, int left, int right)
{
    while (left <= right)
	{
        int mid = left + (right - left) / 2;
        if (GetValueAt(_mainChain, mid) == target) {
            // L'élément a été trouvé, retourner la position actuelle
            return mid;
        } else if (GetValueAt(_mainChain, mid) < target) {
            left = mid + 1; // Rechercher dans la moitié supérieure
        } else {
            right = mid - 1; // Rechercher dans la moitié inférieure
        }
    }
    // L'élément n'a pas été trouvé, retourner la position d'insertion
    return left;
}

void	PmergeMeList::InsertinMainChain(int toInsert, int currentKey)
{
	int posToInsert;

	if (currentKey + _inserted > _mainChain.size())
		posToInsert = binarySearchIterative(toInsert, 0, _mainChain.size());
	else
		posToInsert = binarySearchIterative(toInsert, 0, currentKey + _inserted);
	std::list<int>::iterator it = _mainChain.begin();
	for (int i = 0; i != posToInsert; i++)
		it++;
	_mainChain.insert(it, toInsert);
	_inserted++;
}

void	PmergeMeList::InsertAt(std::list<int>& chain, int pos, int value)
{
	std::list<int>::iterator it = chain.begin();

	// std::cout << "insert " << value << " at " << pos << std::endl;
	for (int i = 0; i < pos; i++)
		it++;
	*it = value;
}

int	PmergeMeList::GetValueAt(std::list<int> chain, int pos)
{
	std::list<int>::iterator it = chain.begin();

	for (int i = 0; i < pos; i++)
		it++;
	return (*it);
}

long long	PmergeMeList::getCurrentTimeMicros()
{
    timeval currentTime;
    gettimeofday(&currentTime, NULL);
    return currentTime.tv_sec * 1000000LL + currentTime.tv_usec;
}