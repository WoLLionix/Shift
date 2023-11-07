#include <iostream>
#include <vector>

std::vector<int>& solution(std::vector<int>& A, int K)
{
    int newIndex;
    int N = A.size();
    std::vector<int> B(N);
    
    K = K % N;

    for (int i = 0; i < N; i++)
    {
        newIndex = (i + K) % N;
        B[newIndex] = A[i];
    }

    A = B;

    return A;
}

int main()
{
    std::vector<int> A;
    srand(time(0));

    int n;
    std::cout << "Enter the size of the vector:\n";
    std::cin >> n;
    std::cout << "\n";

    std::cout << "Initial vector:\n";
    for (int i = 0; i < n; i++)
    {
        A.push_back(rand() % 201 - 100);
        std::cout << A[i] << ' ';
    }

    std::cout << std::endl << std::endl;

    int k;
    std::cout << "Enter the number of shifts:\n";
    std::cin >> k;

    std::vector<int> Answer;

    Answer = solution(A, k);

    std::cout << "New vector:\n";
    for (int i = 0; i < n; i++)
        std::cout << Answer[i] << ' ';
}
