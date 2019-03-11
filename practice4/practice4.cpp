#include <iostream>
using namespace std;

int** Create(int n, int m);
void Input(int** M, int n, int m);
void Print(int** M, int n, int m);

int main()
{
    setlocale(LC_ALL,"Rus");
    int n, m;
    cout << "Количество строк матрицы: ";
    cin >> n;
    cout << "Количество столбцов матрицы: ";
    cin >> m;
    int** A = Create(n, m);
    Input(A, n, m);
    Print(A, n, m);
    return 0;
}

    int** Create(int n, int m)
{
    int** M = new int*[n];
    for (int i = 0; i<n; i++)
{
    M[i] = new int[m];

    
}
    return M;
}

void Input(int** M, int n, int m)
{
    for (int i = 0; i<n; i++)
{
    for (int j = 0; j<m; j++)
{
    M[i][j] = rand() % 40 + 10;
}

}
}
    void Print(int** M, int n, int m)
{

    for (int i = 0; i<n; i++)

{

    for (int j = 0; j<m; j++)

{
    
    cout << M[i][j] << " ";

    
}
    cout << endl;
}
}   
