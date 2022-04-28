#include <stdio.h>
#include <wchar.h>

int main()
{

    wchar_t name[39];

    wprintf(L"Enter some string - ");
    wscanf(L"%ls", name);

    wchar_t temp[39];

    wcscpy(temp, name);

    wprintf(L"\nThe value of name - %ls\n", name);
    wprintf(L"\nThe value of temp (copied from name) - %ls\n", temp);

    return 0;
}