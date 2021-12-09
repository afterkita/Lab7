
#include <fstream>
#include <cctype>
#include <iostream>
#include <cstring>
#include "myadd.h"

namespace add
{
    int file_read(std::string s, int** x, int strok, int stolb)
    {
        std::ifstream in(s);
        for (int i = 0;i < strok;i++)
        {
            for (int j = 0;j < stolb;j++)
            {
                if (in.eof() == true)
                {
                    std::cout << "waning!";
                    return 1;
                }
                else
                {
                    in >> x[i][j];
                }
            }

        }
        return 0;
    }
    int sum_zifr(int a)
    {
        int t = 0;
        while (a != 0)
        {
            t += a % 10;
            a = a / 10;
        }
        return t;
    }
    void clear_array(int** x, int strok, int stolb)
    {
        for (int ik = 0; ik < strok;ik++)
        {
            delete[] x[ik];
        }
        delete[] x;
    }
    int max(int** x, int strok, int stolb)
    {
        int max = 0;
        for (int i = 0;i < strok;i++)
        {
            for (int j = 0;j < stolb;j++)
            {
                if (x[i][j] > max)
                {
                    max = x[i][j];
                }
            }

        }
        return max;
    }
    int min(int** x, int strok, int stolb)
    {
        int min = x[0][0];
        for (int i = 0;i < strok;i++)
        {
            for (int j = 0;j < stolb;j++)
            {
                if (x[i][j] < min)
                {
                    min = x[i][j];
                }
            }

        }
        return min;
    }
    void sort_array_and_write(int** x, int strok, int stolb, int* y, std::string s)
    {
        int sum = 0, maxs = 0;

        for (int i = 0;i < strok;i++)
        {
            for (int j = 0;j < stolb;j++)
            {
                sum += x[i][j];
            }
            y[i] = sum;
            sum = 0;
        }
        for (int i = 0;i < strok;i++)
        {
            for (int j = 1;j < strok;j++)
            {
                if (y[j - 1] < y[j])
                {
                    std::swap(x[j - 1], x[j]);
                    std::swap(y[j - 1], y[j]);
                }
            }

        }

        for (int i = 0; i < strok;i++)
        {
            std::cout << y[i] << std::endl;
        }


        std::ofstream out(s);


        for (int i = 0;i < strok;i++)
        {
            for (int j = 0;j < stolb;j++)
            {
                out << x[i][j] << " ";
            }
            out << std::endl;

        }


    }
}



