#include <iostream>

#include "utils/utils.h"

using  namespace std;

int main(int argc, char *argv[]) {

	int *p = (int*)asset_malloc_space(sizeof(int));
	*p = 100;

	cout << *p <<"   "<< p << endl;
	system("pause");
	return 0;
}