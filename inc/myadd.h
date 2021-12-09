#pragma once

#ifndef MYADD_H
#define MYADD_H
namespace add
{
	int file_read(std::string s, int** x, int strok, int stolb);
	int sum_zifr(int a);
	void clear_array(int** x, int strok, int stolb);
	int max(int** x, int strok, int stolb);
	int min(int** x, int strok, int stolb);
	void sort_array_and_write(int** x, int strok, int stolb, int* y, std::string s);
}

#endif
