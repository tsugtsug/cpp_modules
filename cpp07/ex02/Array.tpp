/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:47:52 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/14 16:19:40 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() : _elements(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array& other) : _elements(new T[other._size]), _size(other._size)
{
	for (unsigned int i = 0; i < _size; i++)
		_elements[i] = other._elements[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] _elements;
		_size = other._size;
		_elements = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_elements[i] = other._elements[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _elements;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw outOfBoundsException();
	return _elements[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

#endif
