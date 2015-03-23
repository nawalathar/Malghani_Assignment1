#include "FastestWay.h"
#include <stdlib.h>
#include <time.h>

int main()
{	
	srand(time(NULL));
	int e1=2,e2=1,x1=8,x2=9;
	//int rand(void);
	int a1[8];
	int a2[8];
	int t1[7];
	int t2[7];

	for(int i = 0; i<8;i++){
		/*for (int k = 0; k < 7; k++)
{
    cout << a1[k];
}
	for (int v = 0; v < 7; v++)
{
    cout << a2[v];
}*/
	a1[i]= rand()%10;
	cout << "Time at each station of Line 1=" << a1[i] <<endl;
	a2[i]= rand()%10;
	cout << "Time at each Station of Line 2=" <<a2[i]<<endl;
	//int k;
	//int v;
	
	}
	for(int j = 0; j<6;j++){
	t1[j]= rand()%10;
	cout << "Transfer Time from each Station of Line 1="<< t1[j]<<endl;
	t2[j]= rand()%10;
	cout << "Transfer Time from each Station of Line 2=" << t2[j]<<endl;
	}
	//int a1[8]={1,2,3,4,5,6,7,1};
	//int a2[8]={7,6,5,4,3,2,1,1};
	//int t1[7]={9,8,7,6,5,4,1};
	//int t2[7]={8,6,4,2,1,3,1};
	int f1[100],f2[100],L1[100],L2[100],L;
	FastestWayAlgo(e1,e2,a1,a2,x1,x2,f1,f2,L1,L2,L,t1,t2,7);
	
	int x = fasttime(L1,L2,L,6,f1);
	cout << "Test Value " << x << endl;

	//int expected = 28;


	//if(x == expected) {

	//cout << "Test Passed: " << x << "/" << expected << endl;
	
	//} else {
	
	//cout << "Test Failed: " << x << "/" << expected << endl;
	//}
	//return 0;
}
