/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:33:07 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/12 20:02:01 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
# define PMERGEME
# define EXIT_FAILURE -1
# define EXIT_SUCCESS 1

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <sys/time.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <limits>
#include <numbers>
#include <cstring>

class	PmergeMeVector
{
	private:
	long long			_timeStart;
	long long			_timeEnd;
	std::vector<int>	_firstChain;
	std::vector<int>	_mainChain;
	std::vector<int>	_secondChain;
	unsigned long		_inserted;
	public:
	//execution
	void	Execute(int ac);
	void	SortinsideTwins();
	void	SortbetweenTwins();
	void	SplitinTwooChains();
	void	MergeSortChains();
	void	InsertinMainChain(int toInsert, int currentKey);
	int		binarySearchIterative(int target, int left, int right);
	long long getCurrentTimeMicros();
	// parsing
	bool	CheckErrors(char **av);
	bool	IsSorted(char **av);
	void	InitContainer(char **av);
	PmergeMeVector();
	PmergeMeVector &operator=(PmergeMeVector& src);
	PmergeMeVector(PmergeMeVector& src);
	~ PmergeMeVector();
};

class	PmergeMeList
{
	private:
	long long		_timeStart;
	long long		_timeEnd;
	std::list<int>	_firstChain;
	std::list<int>	_mainChain;
	std::list<int>	_secondChain;
	unsigned long	_inserted;
	public:
	//execution
	void	Execute(int ac);
	void	SortinsideTwins();
	void	SortbetweenTwins();
	void	SplitinTwooChains();
	void	MergeSortChains();
	void	InsertinMainChain(int toInsert, int currentKey);
	int		binarySearchIterative(int target, int left, int right);
	void	InsertAt(std::list<int>& chain, int pos, int value);
	int		GetValueAt(std::list<int> chain, int pos);
	long long	getCurrentTimeMicros();
	// parsing
	bool	CheckErrors(char **av);
	bool	IsSorted(char **av);
	void	InitContainer(char **av);
	PmergeMeList();
	PmergeMeList &operator=(PmergeMeList& src);
	PmergeMeList(PmergeMeList& src);
	~ PmergeMeList();
};

#endif
