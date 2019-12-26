#include<stdio.h>

int penjumlahan (int a, int b)
{
	int jumlah;
	jumlah= a+b ;
	return jumlah;
}
	
int pengurangan (int a, int b)
{
	int kurang;
	kurang= a-b ;
	return kurang;
}
	
int pembagian (int a, int b)
{
	int bagi;
	bagi= a/b ;
	return bagi;
}

int perkalian (int a, int b)
{
	int kali;
	kali= a*b ;
	return kali;
}

long int pangkat (int a,int b)
{
	if (b==1)
	return a;
	if (b==0)
	return 1;
	else 
	return a*pangkat(a,b-1);
	
}


	
int main()
{
	printf("\n\t======================================");
	printf("\n\t=   FINAL PROJECT SISTEM DIGITAL A   =");
	printf("\n\t=       KALKULATOR BCD DECODER       =");
	printf("\n\t======================================");
	printf("\n\t=  DWI WAHYU EFFENDI [18081010017]   =");
	printf("\n\t======================================");
	printf("\n\tTEKAN TERSERAH UNTUK MEMULAI PROGRAM!!");
	getch();
	system("cls");
	
	int a, b, c, d, e, f, h, i, j, jumlah, kurang, kali, bagi;
	long int hasil;
	char kar[10][8] = {"abcdef","bc","abdeg","abcdg","bcfg","acdfg","cdefg","abc","abcdefg","abcfg"};
	
	printf("\n\t======================================");
	printf("\n\t=   FINAL PROJECT SISTEM DIGITAL A   =");
	printf("\n\t=       KALKULATOR BCD DECODER       =");
	printf("\n\t======================================");
	printf("\n\tMASUKKAN BILANGAN PERTAMA = ");
	scanf("%d", &a);
	
	printf("\tMASUKKAN BILANGAN KEDUA = ");
	scanf("%d", &b);
	
	printf("\n\tPILIH OPERASI MATEMATIKA YANG DI INGINKAN\n\t1.PENJUMLAHAN\n\t2.PENGURANGAN\n\t3.PERKALIAN\n\t4.PEMBAGIAN\n\t5.PERPANGKATAN");
	
	printf("\n\tMASUKKAN PILIHAN (1-5) = ");
	scanf("%d", &c);
	
	switch (c)
	{
	case 1 : 
		jumlah = penjumlahan(a,b);
		c=jumlah;
		printf("\n\tHASIL PENJUMLAHAN %d + %d = %d",a,b,jumlah);
		break;
	case 2 : 
		kurang = pengurangan (a,b);
		c=kurang;
		printf("\n\tHASIL PENGURANGAN %d - %d = %d",a,b,kurang);
		break;
	case 3 : 
		kali = perkalian (a,b);
		c=kali;
		printf("\n\tHASIL PERKALIAN %d * %d = %d",a,b,kali);
		break;
	case 4 : 
		bagi = pembagian (a,b);
		c=bagi;
		printf("\n\tHASIL PEMBAGIAN %d / %d = %d",a,b,bagi);
		break;
	case 5 : 
		hasil = pangkat(a,b);
		c=hasil;
		printf("\n\tHASIL PERPANGKATAN %d dan %d = %d",a,b,hasil);
		break;
	default : printf("\n Data Error");
		break;
	}
	
	printf("\n");
	printf("\n\tHASIL CONVERT BILANGAN PERTAMA\t= ");
	
	if(a>=0 && a<=9)
	{h = 1;}
	else if(a>=10 && a<=99)
	{h = 10;}
	else if(a>=100 && a<999)
	{h = 100;}
	else if(a>=1000 && a<=9999)
	{h = 1000;}
	else if(a>=10000 && a<=99999)
	{h = 10000;}
	else if(a>=100000 && a<=999999)
	{h = 100000;}
	else if(a>=1000000 && a<=9999999)
	{h = 1000000;}
	else if(a>=10000000 && a<=999999999999)
	{h = 1000000000;}
	
	for(d=h;d>0;d/=10){
		e=a/d;
		f=e*d;
		a=a-f;

		switch (e)
		{
		case 0: printf("[abcdef]"); break;
		case 1: printf("[bc]"); break;
		case 2: printf("[abdeg]"); break;
		case 3: printf("[abcdg]"); break;
		case 4: printf("[bcfg]"); break;
		case 5: printf("[acdfg]"); break;
		case 6: printf("[cdefg]"); break;
		case 7: printf("[abc]"); break;
		case 8: printf("[abcdefg]"); break;
		case 9: printf("[abcdfg]"); break;
		default : printf("[error]"); break;
		}
	}
	printf("\n");
	printf("\n\tHASIL CONVERT BILANGAN KEDUA\t= ");
		
	if(b>=0 && b<=9)
	{i = 1;}
	else if(b>=10 && b<=99)
	{i = 10;}
	else if(b>=100 && b<999)
	{i = 100;}
	else if(b>=1000 && b<=9999)
	{i = 1000;}
	else if(b>=10000 && b<=99999)
	{i = 10000;}
	else if(b>=100000 && b<=999999)
	{i = 100000;}
	else if(b>=1000000 && b<=9999999)
	{i = 1000000;}
	else if(b>=10000000 && b<=999999999999)
	{i = 1000000000;}
		
		for(d=i;d>0;d/=10){
		e=b/d;
		f=e*d;
		b=b-f;

		switch (e)
		{
		case 0: printf("[abcdef]"); break;
		case 1: printf("[bc]"); break;
		case 2: printf("[abdeg]"); break;
		case 3: printf("[abcdg]"); break;
		case 4: printf("[bcfg]"); break;
		case 5: printf("[acdfg]"); break;
		case 6: printf("[cdefg]"); break;
		case 7: printf("[abc]"); break;
		case 8: printf("[abcdefg]"); break;
		case 9: printf("[abcdfg]"); break;
		default : printf("[error]"); break;
		}
	}
	printf("\n");
	printf("\n\tHASIL OPERASI MATEMATIKA\t= ");
	
	if(c>=0 && c<=9)
	{j = 1;}
	else if(c>=10 && c<=99)
	{j = 10;}
	else if(c>=100 && c<999)
	{j = 100;}
	else if(c>=1000 && c<=9999)
	{j = 1000;}
	else if(c>=10000 && c<=99999)
	{j = 10000;}
	else if(c>=100000 && c<=999999)
	{j = 100000;}
	else if(c>=1000000 && c<=9999999)
	{j = 1000000;}
	else if(c>=10000000 && c<=999999999999999999)
	{j = 1000000000;}
		
		for(d=j;d>0;d/=10){
		e=c/d;
		f=e*d;
		c=c-f;

		switch (e)
		{
		case 0: printf("[abcdef]"); break;
		case 1: printf("[bc]"); break;
		case 2: printf("[abdeg]"); break;
		case 3: printf("[abcdg]"); break;
		case 4: printf("[bcfg]"); break;
		case 5: printf("[acdfg]"); break;
		case 6: printf("[cdefg]"); break;
		case 7: printf("[abc]"); break;
		case 8: printf("[abcdefg]"); break;
		case 9: printf("[abcdfg]"); break;
		default : printf("[error]"); break;
		}
	}
return 0;
}
