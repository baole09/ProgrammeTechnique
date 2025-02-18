#include <iostream>
#include <cmath>
using namespace std;
// Exercise 1:

// void deleteKthElement(int* Arr,int &n,int k)
// {
//     if(k < 0 || k >= n)
//     {
//         cout<<"Invalid location !"<<endl;
//         return;
//     }
//     for(int i = k; i < n - 1; i++)
//         *(Arr + i) = *(Arr + (i + 1));
//     n--;
// }

// void insertElement(int* Arr, int &n, int k, int x)
// {
//     // if(k < 0 || k > n){
//     //     cout<<"Invalid location !!!"<<endl;
//     //     return;
//     // }
//     // int *tempArr = new int[n + 1];
//     // for(int i = 0; i < n; i++)
//     //     *(tempArr + i) = *(Arr + i);
//     // delete[] Arr;
//     // Arr = tempArr;
//     // for(int i = n; i > k; i--)
//     //     *(Arr + i) = *(Arr + (i - 1));

//     // *(Arr + k) = x;
//     // n++;
//     for(int i = 0; i < n; i++)
//     {
//         if(i == k){
//             for(int j = n; j > k; j--){
//                 *(Arr + j) = *(Arr + (j - 1));
//             }
//             *(Arr + i) = x;
//             n++;

//         }
//         cout<<*(Arr + i)<<" ";
//     }
// }

// bool isPrime(int num)
// {
//     if(num < 2)   return false;
//     for(int i = 2;i <= sqrt(num); i++)
//         if(num % i == 0) return false;
//     return true;
// }

// void deletePrime(int* Arr, int &n)
// {
//     for(int i = 0; i < n; ++i)
//     {
//         if(!isPrime(*(Arr + i)))
//             cout<<*(Arr + i)<<" ";
//     }
// }
// int main()
// {
//     int n, k, x;
//     cout<<"Enter n: ";
//     cin>>n;
//     int* Arr = new int[n];

//     for(int i = 0;i < n; i++)
//         cin>>*(Arr + i);

//     cout<<"Enter k: ";
//     cin>>k;

//     cout<<"Enter x: ";
//     cin>>x;

//     //deleteKthElement(Arr,n,k);
//     //insertElement(Arr,n,k,x);
//     //deletePrime(Arr,n);
//     // for(int i = 0; i < n; i++)
//     //     cout<<*(Arr + i)<<" ";
//     cout<<endl;
//     delete[] Arr;
//     return 0;
// }

// Exercise 2:

// struct Student{
//     string fullname, id;
//     double basicScore, specializedScore1, specializedScore2;
// };

// void getList(Student *sArr,int &n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         cout<<"Enter details for student "<< i + 1 <<endl;
//         cout<<"Fullname: ";
//         cin.ignore();
//         getline(cin, (sArr + i)->fullname);
//         cout<<"Student code: ";
//         getline(cin, (sArr + i)->id);
//         cout<<"Basic subject score: ";
//         cin>> (sArr + i)->basicScore;
//         cout<<"Specialized subject score 1: ";
//         cin>> (sArr + i)->specializedScore1;
//         cout<<"Specialized subject score 2: ";
//         cin>> (sArr + i)->specializedScore2;
//     }
// }

// void showList(Student *sArr,int n)
// {
//     cout<<"===========Student Information===========" << endl ;
//     for(int i = 0; i < n; i++)
//     {
//         cout<<"           Student "<< i + 1 << ":" <<endl;
//         cout<<"Fullname : " << (sArr + i)->fullname << endl;
//         cout<<"Student code: " << (sArr + i)->id << endl;
//         // cout<<"Basic subject score: " << (sArr + i)->basicScore << endl;
//         // cout<<"Specialized subject score 1: " << (sArr + i)->specializedScore1 << endl;
//         // cout<<"Specialized subject score 2: " << (sArr + i)->specializedScore2 << endl;
//         double sum = (sArr + i)->basicScore + (sArr + i)->specializedScore1 + (sArr + i)->specializedScore2;
//         cout<<"Sum of 3 subject: "<< sum <<endl;
//     }
//     cout<<"========================================="<<endl;
// }

// double Sum(Student *sArr,int i)
// {
//     return (sArr + i)->basicScore + (sArr + i)->specializedScore1 + (sArr + i)->specializedScore2;
// }

// void searchLessNumber(Student *sArr, int n, int k)
// {
//     cout<<"Enter k: ";
//     cin>>k;
//     for(int i = 0; i < n; i++)
//     {
//         if((sArr + i)->basicScore < k || (sArr + i)->specializedScore1 < k || (sArr + i)->specializedScore2 < k)
//         {
//             cout << (sArr + i)->fullname<<endl;
//         }
//     }
// }

// void searchSumMax(Student *sArr,int n)
// {
//     double maxSum = Sum(sArr,0);
//     int maxIndex = 0;
//     for(int i  = 0; i < n; i++)
//     {
//         if(Sum(sArr,i) > maxSum)
//         {
//             maxSum = Sum(sArr,i);
//             maxIndex = i;
//         }
//     }
//     cout<<"Student with highest sum: "<<(sArr + maxIndex)->fullname<<endl;
// }

// double sumSpecializedScores(const Student* s)
// {
//     return s->specializedScore1 + s->specializedScore2;
// }

// void sortListBySpecializedScores(Student* sArr, int n)
// {
//     for(int i = 0; i < n - 1; i++)
//     {
//         for(int j = i + 1; j < n; j++)
//         {
//             if(sumSpecializedScores(sArr + i) > sumSpecializedScores(sArr + j))
//             {
//                 Student temp = *(sArr + i);
//                 *(sArr + i) = *(sArr + j);
//                 *(sArr + j) = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int n, k;
//     cout<<"Enter n: ";
//     cin>>n;

//     Student *sArr = new Student[n];
//     getList(sArr,n);
//     showList(sArr,n);
//     //searchLessNumber(sArr,n,k);
//     //searchSumMax(sArr,n);
//     sortListBySpecializedScores(sArr,n);
//     showList(sArr,n);

//     delete []sArr;

//     return 0;
// }

// Exercise 3:

// struct Monomial
// {
//     int coefficient;
//     int exponent;
// };

// void getPolynomial(Monomial *&mn, int &n)
// {
//     cout<<"Enter n: ";
//     cin>>n;
//     mn = new Monomial[n];

//     cout<<"        Enter polynomial    "<<endl;
//     for(int i = 0; i < n; i++)
//     {
//         cout<<"Enter coefficient " << i + 1 << ":";
//         cin >> (mn + i)->coefficient;
//         cout<<"Enter exponent " << i + 1 << ":";
//         cin >> (mn + i)->exponent;
//     }
//     cout<<endl;

// }

// void showPolynomial(Monomial *mn, int n)
// {
//     cout<<"Show polynomial: ";
//     for(int i = 0; i < n; i++)
//     {
//         if (i > 0 && (mn + i)->coefficient >= 0)
//             cout << " + ";
//         cout << (mn + i)->coefficient << "x^" << (mn + i)->exponent;
//     }
//     cout<<endl;
// }

// void valuePolynomial(Monomial *mn, int n, int x)
// {
//     x = 2;
//     int poly = 0;
//     for(int i = 0; i < n; i++)
//     {
//         poly += (mn + i)->coefficient * pow(x,(mn + i)->exponent);
//     }
//     cout<<"Value of polynomial at x= "<< x <<" is: "<< poly <<endl;
// }
// int main()
// {
//     int n, x;
//     Monomial *mn;
//     getPolynomial(mn,n);
//     showPolynomial(mn,n);
//     valuePolynomial(mn,n,x);
//     delete []mn;
//     return 0;
// }

//Exercise 4:
struct Node
{
    int info;
    Node *next;
};

typedef struct Node *node;

struct list
{
    node head, tail;
};
list l, l1, l2;
node getNode(int x)
{
    node p = new Node;
    if (p == NULL)
        exit(1);
    p->info = x;
    p->next = NULL;
    return p;
}
void insertHead(list &l, node p)
{
    if (l.head == NULL)
    {
        l.head = p;
        l.tail = p;
    }
    else
    {
        p->next = l.head;
        l.head = p;
    }
}
void listInsertHead(list &l)
{
    int x, n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        insertHead(l, getNode(x));
    }
}

void listProcess(list l)
{
    node p = l.head;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->next;
    }
    cout << endl;
}
int sumList(list l)
{
    int sum = 0;
    for (node p = l.head; p != NULL; p = p->next)
        sum += p->info;
    return sum;
}
bool isPrime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return false;
    return true;    
}

void countPrimeList(list l)
{
    int count = 0;
    for(node p = l.head; p != NULL; p = p->next)
        if(isPrime(p->info))    count++;
    cout << count;    
}

void countEvenOrOdd(list l)
{
    int countEven = 0;
    int countOdd = 0;
    for(node p = l.head; p != NULL; p = p->next)
    {
        if(p->info % 2 == 0) countEven++;
        else countOdd++;
    }
    cout << "Even number: " << countEven << endl;
    cout << "Odd number: " << countOdd << endl;  
}

void findMax(list l)
{
    int max = l.head->info;
    for(node p = l.head; p != NULL; p = p->next)
    {
        if(max < p->info)
            max = p->info;
    }
    cout << max;
}

void deleteElementFirstList(list &l)
{
    if(l.head == NULL)   return;
    else l.head = l.head->next;
}

void deletePrime(list &l)
{
    while(l.head != NULL && isPrime(l.head->info)) 
        l.head = l.head->next;
    node p = l.head;
    while (p != NULL && p->next != NULL) {
        if (isPrime(p->next->info))
            p->next = p->next->next;
        else 
            p = p->next;
    }
    if (l.head == NULL)
        l.tail = NULL;
    else
        l.tail = p;
}

int sumOfDigits(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void insertNode(list &l)
{
    node p = l.head;
    while(p != NULL)
    {
        int sum = sumOfDigits(p->info);
        node q = getNode(sum);
        q->next = p->next;
        p->next = q;
        p = q->next;
    }
}

void sortAscending(list &l)
{
    for(node p = l.head; p != NULL; p = p->next)
    {
        for(node q = p->next; q != NULL; q = q->next)
        {
            if(p->info > q->info)
            {
                int temp = p->info;
                p->info = q->info;
                q->info = temp;
            }
        }
    }
}

void splitList(list &l, list &l1, list &l2)
{
    node p = l.head;
    while(p != NULL)
    {
        if(p->info % 2 == 0)
            insertHead(l2, getNode(p->info));
        else
            insertHead(l1, getNode(p->info));
        p = p->next;
    }
}
int main()
{
    listInsertHead(l);
    //deleteElementFirstList(l);
    //deletePrime(l);
    //insertNode(l);
    //sortAscending(l);
    //listProcess(l);
    //cout << sumList(l);
    //countPrimeList(l);
    //countEvenOrOdd(l);
    //findMax(l);
    splitList(l,l1,l2);
    listProcess(l1);
    listProcess(l2);
    return 0;
}

