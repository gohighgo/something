# something
int f1(unsigned long long int num, int arr[], int size)
{
int t;
do
{
t=num%10;
arr[t]++;
num/10;
}
while(num/10!=0);
}
