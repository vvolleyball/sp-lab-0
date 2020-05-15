#include "pch.h"

#define SHORT_MIN 0x8000 // -32 768
#define SHORT_MAX 0x7FFF // 32 767
#define WORD_MAX 0xFFFF // 65 535
#define INT_MIN 0x80000000 // −2 147 483 648
#define INT_MAX 0x7FFFFFFF // 2 147 483 647
#define UINT_MAX 0xFFFFFFFF // 4 294 967 295 как и DWORD
#define UCHAR_MAX 0xFF // 255
#define CHAR_MIN 0xFF80 // -128
#define CHAR_MAX 0x7F // 127
#define TCHAR_MAX 0xFFFFFFFF // 4 294 967 295
#define WCHAR_MAX 0xFFFF // 65 535

int main()
{
	setlocale(LC_ALL,"Rus");
	printf("                     Типы данных в Win32 API                           \n");
	printf("+---------------------------------------------------------------------+\n");
	printf("|    Тип   |    Размер    |                 Диапазон                  |\n");
	printf("+---------------------------------------------------------------------+\n");
	printf("| SHORT    |	  %db      |       от %d до %d	              |\n", sizeof(short), (short)SHORT_MIN, SHORT_MAX);
	printf("| WORD     |	  %db      |       от 0 до %d	                      |\n", sizeof(unsigned short), WORD_MAX);
	printf("| INT      |	  %db      |       от %d до %d	      |\n", sizeof(int), INT_MIN, INT_MAX);
	printf("| UINT     |	  %db      |       от 0 до %u                  |\n", sizeof(unsigned int), UINT_MAX);
	printf("| DWORD    |	  %db      |       от 0 до %u                  |\n", sizeof(unsigned int), UINT_MAX);
	printf("| BYTE	   |	  %db      |       от 0 до %u                         |\n", sizeof(unsigned char), UCHAR_MAX);
	printf("| BOOL     |	  %db      |       от TRUE до FALSE                    |\n", sizeof(bool));
	printf("| BOOLEAN  |	  %db      |       от TRUE до FALSE                    |\n", sizeof(char32_t));
	printf("| CHAR	   |	  %db      |       от %d до %d	              |\n", sizeof(char), (char)CHAR_MIN, CHAR_MAX);
	printf("| TCHAR    |	  %db      |       от 0 до %u                  |\n", sizeof(char32_t), TCHAR_MAX);
	printf("| WCHAR    |	  %db      |       от 0 до %d                       |\n", sizeof(wchar_t), WCHAR_MAX);
	printf("+---------------------------------------------------------------------+\n");
	printf("| HANDLE   |	  %db      |                                           |\n", sizeof(handle_t));
	printf("| HMENU	   |	  %db      |                                           |\n", sizeof(HMENU));
	printf("+---------------------------------------------------------------------+\n");
	printf("| LPSTR    |	  %db      |                                           |\n", sizeof(LPSTR));
	printf("| LPCSTR   |	  %db      |                                           |\n", sizeof(LPCSTR));
	printf("| LPWSTR   |	  %db      |                                           |\n", sizeof(LPWSTR));
	printf("| LPCWSTR  |	  %db      |                                           |\n", sizeof(LPCWSTR));
	printf("| LPTSTR   |	  %db      |                                           |\n", sizeof(LPTSTR));
	printf("| LPCTSTR  |	  %db      |                                           |\n", sizeof(LPCTSTR));
	printf("+---------------------------------------------------------------------+");
}