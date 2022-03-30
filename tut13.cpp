//   #include<stdio.h>
// int main(){

//    int a;

//    scanf("%d",&a);

//    int count = 0;
//    int sum = 0;

//    while(count<3)
//    {
//       sum = sum + a%10;
//       a  = a/10;
//       count++;
//    }

//    printf("%d", sum);
 
//     return 0;
// }  










/* #include<stdio.h>
#include<limits.h>
int main(){

   int a,b,c;

   scanf("%d %d %d", &a,&b,&c);

   if(a<b)
   {
       if(a<c)
       {
           printf("%d", a);
       }
       else
       {
           printf("%d", c);
       }
   }
       else
       {
           if(b<c)
       {
           printf("%d", b);
       }
       else
       {
           printf("%d", c);
       }
            
   }

    return 0;
} */










/* #include<stdio.h>
int main(){
 
  int a,b,c;

   scanf("%d %d %d", &a,&b,&c);
  
  switch (a)
  {
  case 1 :
      printf("%d", b+c);
      break;

  case 2 :
      printf("%d", b-c);
      break;

  case 3 :
      printf("%d", b*c);
      break;

 case 4 :
      printf("%d", b/c);
      break;

  default:
  
  printf("invalid operation");
      break;
  }

    return 0;
} */








/* 
#include<stdio.h>
int main(){

   int days;
   scanf("%d", &days);

   int fine = 0;
  
   if(1<=days && days<=5)
   {
       fine = 10*days;   
       printf("%d", fine);
   }

   else if(6<=days && days<=10)
   {
       fine =  (20*(days-5)) + 50;
       printf("%d", fine);
   }

   else if (11<=days && days<=30)
   {
     fine = (5*10) + (5*20) +( (days-10)*50);  
     printf("%d", fine); 
   }

   else
   {
       printf("your membership has been cancelled");
   }
   
    return 0;
}
 */








/* 
#include<stdio.h>
int main(){

int health;
int age;
int location;

scanf("%d %d %d", &health, &age, &location);

if((age<25) || (age>65))
{
    printf("you cannot be insured");

}

else if((health ==1) && (25<=age && age<=35) && location==0)
{
    printf("4000");
}

else if((health ==0) && (25<=age && age<=35) && location==0)
{
    printf("6000");
}

else if((health ==1) && (25<=age && age<=35) && location==1)
{
    printf("5000");
}

else if((health ==0) && (25<=age && age<=35) && location==1)
{
    printf("7000");
}

else
{
    printf("5500");
}

    return 0;
}
  */




/* 
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int m;
    cin>>m;

    int array[m];


    for(int i=0; i<m; i++)
    {
        cin>>array[i];
    }

    int a[n+m];
    int temp;

    for(int i=0; i<n; i++)
    {
           temp = arr[i];
            a[i] = temp;  
    }
    for(int i=n; i<n+m; i++)
    {
       temp =  array[i-n];
        a[i] = temp;
    }


    int counter = 1;

    while(counter<n+m)
    {
    for(int i=0; i<(n+m-1); i++){

        if(a[i]>a[i+1])
        {
            temp = a[i+1];
            a[i+1] = a[i];
            a[i] = temp;
        }
    }
    counter++;
    }

    for(int i=0; i<n+m; i++){
        cout<<a[i]<<" ";
    }

    return 0;
} */



/* 

#include<iostream>
using namespace std;

int check(int arr[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==k)
        {
            cout<<"yes";
            return 0;
        }
    }
    cout<<"no";
    return 0;

}

int main(){
    
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

   cout<<check(arr, n, k);

    return 0;
} */






/* #include<iostream>
using namespace std;

void print(int l, int r)
{
    for(int i=l; i<=r; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    return;
}

int main(){
    
    int l;
    cin>>l;

    int r;
    cin>>r;

    print(l,r);

    return 0;
} */






/* 
#include<iostream>
#include<string>
using namespace std;

int main(){
    
   string str, str1;
    cin>>str>>str1;

    int n = str.length();
int i;
    for(i=0; i<n; i++)
    {
        if(str[i]!=str1[n-i-1])
        {
           cout<<"false";
           break;
        }
      
    }
if(i==n){
    cout<<"true";
}
    

    return 0;
} 
 */





/* 
#include<stdio.h>
int main(){

    int m;
    scanf("%d",&m);

    int n;
    scanf("%d",&n);

    for(int i=m; i<=n; i++)
    {
        if(i%m==0){
            printf("%d ",i);
        }
    }
    
    return 0;
} */







/* #include<stdio.h>
int main(){

    int a,b;
    scanf("%d %d",&a,&b);

   

    for(int i=b; 1<2; i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("%d",i);
            break;
        }
    }
    
    return 0;
} */



/* 
 #include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++){
             printf(" ");
        }
        for(int j=1; j<=(2*i-1); j++){
            printf("1");
        }
          printf("\n");
    }
    
    for(int i=n; i>1; i--)
    {
        for(int j=1; j<=(n-i+1); j++){
            printf(" ");
        }
        for(int j=1; j<=(2*i-3); j++){
             printf("1");
        }
        printf("\n");
    }
    
    return 0;
} */



/* 

#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    if(n==1){
        printf("no");
    }
  
int i;
   for(i=2; i<n; i++)
   {
       if(n%i==0)
       {
           printf("no");
           break;
       }
   }

   if(i==n)
   {
       printf("yes");
   }

    
    return 0;
} */





/* 
#include<iostream>
using namespace std;

int main(){
    
    string str = "IIT-DH 24 programmers group";

    int n = str.length();

    for(int i=n-1; i>=0; i--)
    {
        cout<<str[i];
    }
    return 0;
}   
 */



/* 
#include<iostream>
using namespace std;

int main(){
    
  string str;
  cin>>str;

  int count = 0;
  int counter = 0;

  for(int i=0; i<str.length(); i++)
  {
      if(str[i]=='0')
      {
          count++;
      }
      else
      {
          counter++;
      }
  }

  cout<<count<<" "<<counter;



    return 0;
} */

// ASSIGNMENT5_QUESTION1.c
/* 
#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);

    if(n==0)
    {
        count++;
    }
    
  int count = 0;
  int counter = 0;


    while(n>=1)
    {
        if(n%10==0)
        {
            count++;
        }
        else
        {
            counter++;
        }

        n = n/10;
    }


    
    printf("%d %d",count,counter);
    return 0;
} */




/* 
#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
} */





/* 
#include<stdio.h>

int main(){
    
    int a,d,n;
    scanf("%d %d %d",&a,&d,&n);


    for(int i=0; i<n; i++)
    {
        int ans = a+i*d;
        printf("%d ",ans);
    
    }
    return 0;
} */



/* 
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i%2==1 && (i+j)%4==0)
            {
                cout<<"*";
            }
            else if(i%2==0 && (i+j)%2==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
} */





/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }

    float mean = sum*1.0/n;
    cout<<mean;
} */





 /* 
#include<stdio.h>
#include<string.h>
int main()
 {
     char s[1000];
     int c = 0;


gets(s);

while (s[c] != '\0')
    c++;
printf("%d", c);
return 0;
}
 */



/* 
#include<stdio.h>
#include<string.h>

int main(){

char str1[100];
scanf("%s",str1);
int n1 = strlen(str1);

char str2[100];
scanf("%s",str2);
int n2 = strlen(str2);

int n;

if(n1>n2)
{
    n = n1;
}
else
{
    n=n2;
}


int i=0;

while(i<n)
{
    int k = str1[i];
    int l = str2[i];

    if(k>l)
    {
        printf("1");
        break;
    }
    else if(l>k)
    {
       printf("-1");   
       break; 
    }
    i++; 
}

if(i==n)
{
    printf("0");
}
    
    return 0;
} */



/* 
#include<iostream>
using namespace std;

int main(){
    
    string str = "2,3,4";

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] != ',')
        {
            cout<<str[i];
        }
        else
        {
            cout<<endl;
        }
    }
    return 0;
} */


/* 
// Q. sorting of array using recursion

#include<iostream>
using namespace std;

void sort(int arr[], int n)
{
    if(n==1)
    {
        return;
    }

    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
   

    sort(arr, n-1);
}

void print(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){

    int arr[] = {4,3,9,8,1,2,7,12};

    sort(arr,8);
    print(arr,8);
    
    return 0;
} */



/* 
#include<iostream>
#include<string>
using namespace std;

int main(){

    int space = 0;
    int smallLetters = 0;
    int capitalLetters = 0;
    int punctuationMarks = 0;


    string str;
    getline(cin, str);

    for(int i=0; i<str.length(); i++)
    {
        if(0<='z'-str[i] && 'z'-str[i]<=25)
        {
           smallLetters++;
        }

        else if(0<='Z'-str[i] && 'Z'-str[i]<=25)
        {
            capitalLetters++;
        }
        else if(str[i]==' ')
        {
             space++;
        }
        else
        {
            punctuationMarks++;
        }     
    }

    int numberOFwords = space+1;
    int characters = space+smallLetters+capitalLetters+punctuationMarks;


    cout<<numberOFwords<<" ";
    cout<<characters<<" ";
    cout<<smallLetters<<" ";
    cout<<capitalLetters<<" ";
    cout<<punctuationMarks;
    
    
    return 0;
} */
/* 
#include <stdio.h>
#include <string.h>

int main()
{
    char string[500];
    int words=1, characters, small=0, capitals=0, punctuations=0;

    fgets(string, 499, stdin);
    characters = strlen(string);

    FILE* f;

    f = fopen("C:\\Users\\ISHIKA SHARMA\\Documents\\sample.txt", "w");
    fprintf(f, "%s", string);
    fclose(f);

    f = fopen("C:\\Users\\ISHIKA SHARMA\\Documents\\sample.txt", "r");
    for(int i=0; i<characters; i++)
    {
        fseek(f, i, SEEK_SET);
        char c = (char)fgetc(f);
        if(c>=97 && c<=122)
            small++;
        if(c == 32)
            words++;
        if(c>=65 && c<=90)
            capitals++;
        if((c>=33 && c<=47) || (c>=58 && c<=64))
            punctuations++;
    }
    fclose(f);

    printf("%d ", words);
    printf("%d ", characters - 1);
    printf("%d ", small);
    printf("%d ", capitals);
    printf("%d ", punctuations);
    return 0;
} */





/* 
#include<stdio.h>
#include<string.h>

int main(){

    int space = 0;
    int smallLetters = 0;
    int capitalLetters = 0;
    int punctuationMarks = 0;


    char str[500];
    fgets(str,499,stdin);

    for(int i=0; i<strlen(str); i++)
    {
        if(0<='z'-str[i] && 'z'-str[i]<=25)
        {
           smallLetters++;
        }

        else if(0<='Z'-str[i] && 'Z'-str[i]<=25)
        {
            capitalLetters++;
        }
        else if(str[i]==' ')
        {
             space++;
        }
        else
        {
            punctuationMarks++;
        }     
    }

    int numberOFwords = space+1;
    int characters = space+smallLetters+capitalLetters+punctuationMarks-1;
    punctuationMarks = punctuationMarks-1;


    printf("%d ",numberOFwords);
    printf("%d ",characters);
    printf("%d ",smallLetters);
    printf("%d ",capitalLetters);
    printf("%d ",punctuationMarks);
    
    
    return 0;
}  */


/* 
#include<stdio.h>	
int main()
{
		int m[3][3]={{4,4,4},{4,4,4},{4,4,4}},a,b,sum1,sum2,sum3,sum4;
		for(int i=0;i<9;i++)
	    {
	    	scanf("%d %d",&a,&b);
	    	m[a][b]=i%2==0?1:0;
        for(int j=0;i>3&&j<3;j++)
        {
        	sum1=m[0][j]+m[1][j]+m[2][j],sum2=m[j][0]+m[j][1]+m[j][2],sum3=m[0][0]+m[1][1]+m[2][2],sum4=m[2][0]+m[1][1]+m[0][2];
        	if(sum1==3||sum2==3||sum3==3||sum4==3)
        	{printf("X"); return 0;}
        	if(sum1==0||sum2==0||sum3==0||sum4==0)
        	{printf("O"); return 0;}
		}}
		printf("DRAW");
} */






// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtHead(node* &head, int val){
//     node* n = new node(val);
//     n->next = head;
//     head= n;
// }

// void display(node* &head){
//     node* temp = head;

//     while(temp!=NULL){
//         cout<<temp->data<<" -> ";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){

//     node* head = NULL;

//     insertAtHead(head, 2);
//     insertAtHead(head, 1);
//     display(head);
    
//     return 0;
// }










// #include<iostream>
// using namespace std;
// int main() {
//    int year;
//    cin>>year;
//    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//    cout<<year<<" is a leap year";
//    else
//    cout<<year<<" is not a leap year";
//    return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// #include<climits>
// #include<math.h>
// using namespace std;

// double average(double arr[], int n){
// double sum = 0;
// for(int i=0;i<n; i++){

// sum = sum+arr[i];
// }
// double a = sum/n;
// return a;

// }

// double stdev( double arr[],int n){

//     double sum = 0;

// double a = average(arr, n);

// for(int i = 0;i<n;i++){

// sum = sum + pow((arr[i]-a),2);

// }
// double k = sum/n;
// return sqrt(k);

// }

// int main(){
//     int n=8;
    
// double strength[]= {23.5,25.78, 24.1, 22.32, 27.3, 24.56, 21.22, 26.93};
    

// cout<<average(strength ,n)<<endl;
// cout<<stdev(strength ,n)<<endl;

    
//     return 0;
// }







// #include <stdio.h>
// #include <stdlib.h>
 
// int main()
// {
 
//     for(int i = 0; i<9; i++){
//     int temp = rand()%100;
//         printf(" %d ", temp);
//     }
//     return 0;
// }

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin>>n;

	int *arr = new int(n);

	for (int i= 0; i< n; i++) {
         int temp = rand()%100;
		arr[i] = temp;
	}

    int &max = *max_element(arr,arr+n );
    cout<<"The maximum element is "<<max<<endl;

    // Deallocating the array
    delete[] arr;

	return 0;
}



// #include <iostream>
// using namespace std;
 

// int main()
// {
//     // Dimensions of the 2D array
//     int m = 2, n = 3;
//     int c;
 
//     // Declare a memory block of
//     // size m*n
//     int* arr = new int[m * n];
 
//     // Traverse the 2D array
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
            
//             cin>>c;
//             // Assign values to
//             // the memory block
//             *(arr + i * n + j) = c;
//         }
//     }
 
//     // Traverse the 2D array
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
 
//             // Print values of the
//             // memory block
//             cout << *(arr + i * n + j)<< " ";
//         }
//         cout << endl;
//     }

 
//     return 0;
// }