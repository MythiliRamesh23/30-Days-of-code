 int main(){

int N; 

scanf("%d",&N);

if( N%2 == 1 || (N > 5 && N < 21))

    printf("Weird");

else

    printf("Not Weird");

return 0;
}
