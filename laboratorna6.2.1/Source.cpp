#include <iostream>
#include <climits>

using namespace std;
void diapazon(int* a, const int n){
    for (int i = 0; i < n; i++){
        a[i] = -40 + rand() % (60);
        cout << a[i] << " ";
    }
}
void vuznachutu(int* a,const int n,int &min,int &max,int &indexmax,int &indexmin) {
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            indexmax = i;
        
        }
        if (a[i] < min)
        {
            min = a[i];
            indexmin = i;
        }
    }
    cout << endl;
    cout << "min, index: " << min<<" , " << indexmin << endl;
    cout << "max, index: " << max << " , " << indexmax << endl;

}
void znaytu(int indexmin, int indexmax, const int n) {
    int S = indexmin + indexmax;
    cout << "suma: " << S << endl;
    double sered = S * 1.0 / n;
    cout << "Seredne: " << sered << endl;
}
int main(){
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];
    int min = 0;
    int max = 0;
    int indexmin = 0;
    int indexmax = 0;
    diapazon(a, n);
    vuznachutu(a, n, min, max, indexmax, indexmin);
    znaytu(indexmin, indexmax, n);
    return 0;
}