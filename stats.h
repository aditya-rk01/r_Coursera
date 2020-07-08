/******************************************************************************
 * Copyright (C) 2020 by Aditya R
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Aditya R is not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief A header file to use all the statistical functions
 *
 * It has functions like mean,median,maximun,minimum,etc.
 *
 * @author Aditya R
 * @date 6/7/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_array(unsigned char arr[],int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("%c",arr[i]);
	}
}

unsigned char find_mean(unsigned char number[],int n)
{
	int i;
	unsigned char sum=0;
	for(i=0;i<n;++i)
	{
		sum+=number[i];
	}
	return sum;
}

/**
 * @brief Mean Function
 *
 * Used to find mean
 *
 * @param <unsigned char array> <the array whose data is to be processed>
 * @param <int> <the length of the data array>
 *
 * @return <returns mean>
 */

unsigned char find_median(unsigned char number[],int n)
{
	int i,j,a;
	for (i = 0; i < n; ++i) 
	{
		for (j = i + 1; j < n; ++j)
		{
			if (number[i] > number[j]) 
			{
			    a =  number[i];

			    number[i] = number[j];

			    number[j] = a;
			}
		}
	}
	if(n%2==0)
	{
		return ((number[n/2]+number[(n/2)+1])/2);
	}
	else
	{
		return number[(n/2)+1];
	}
}

/**
 * @brief Median Function
 *
 * <Used to find median>
 *
 * @param <unsigned char array> <the array whose data is to be processed>
 * @param <int> <the length of the data array>
 *
 * @return <returns median>
 */

unsigned char find_minimum(unsigned char number[],int n)
{
	int i,j,a;
	for (i = 0; i < n; ++i) 
	{
		for (j = i + 1; j < n; ++j)
		{
			if (number[i] > number[j]) 
			{
			    a =  number[i];

			    number[i] = number[j];

			    number[j] = a;
			}
		}
	}
	return number[0];
}

/**
 * @brief Minimum Function
 *
 * <Used to find minimum>
 *
 * @param <unsigned char array> <the array whose data is to be processed>
 * @param <int> <the length of the data array>
 *
 * @return <returns minimum>
 */

unsigned char find_maximum(unsigned char number[],int n)
{
	int i,j,a;
	for (i = 0; i < n; ++i) 
	{
		for (j = i + 1; j < n; ++j)
		{
			if (number[i] > number[j]) 
			{
			    a =  number[i];

			    number[i] = number[j];

			    number[j] = a;
			}
		}
	}
	return number[n-1];
}

/**
 * @brief Maximum Function
 *
 * <Used to find maximum>
 *
 * @param <unsigned char array> <the array whose data is to be processed>
 * @param <int> <the length of the data array>
 *
 * @return <returns maximum>
 */

void print_statistics(unsigned char arr[],int n)
{
	unsigned char a,b,c,d;
	a=find_mean(arr,n);
	b=find_median(arr,n);
	c=find_minimum(arr,n);
	d=find_maximum(arr,n);
	printf("Mean: %c Median: %c Minimum %c Maximum %c",a,b,c,d);
}

void sort_array(unsigned char number[],int n)
{
	int i,j,a;
	for (i = 0; i < n; ++i) 
	{
		for (j = i + 1; j < n; ++j)
		{
			if (number[i] > number[j]) 
			{
			    a =  number[i];

			    number[i] = number[j];

			    number[j] = a;
			}
		}
	}
	for (i=0;i<n;++i)
	{
		printf("%c",number[i]);
	}
}


#endif /* __STATS_H__ */
