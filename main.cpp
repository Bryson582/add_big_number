#include <iostream>
#include <cstdio>
#include <cstring>
#define max 1000
using namespace std;
int main()
{
    int a[max],b[max],c[max],x,i,lena,lenb,lenc;
    char a1[max],b1[max];
//   将整型数组全部清空
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
//  从键盘输入两个字符数组
    gets(a1);
    gets(b1);
//   求字符数组的长度
    lena = strlen(a1);
    lenb = strlen(b1);
//   字符数组转换为整型数组
    for (i=1;i<=lena;i++)
        a[i] = a1[lena-i] - '0';
    for (i=1;i<=lenb;i++)
        b[i] = b1[lenb-i] - '0';
    x=0;
    lenc=1;
    while (lenc<=lena||lenc<=lenb)
    {
        c[lenc] = a[lenc] + b[lenc] + x;
        x = c[lenc]/10;
        c[lenc] = c[lenc]%10;
        lenc++;
    }
    c[lenc] = x;
    while (c[lenc]==0) lenc=lenc-1;
    for (i = lenc; i>=1 ; i--)
        cout<<c[i];
}
