#include <iostream>
#include <vector>
#include <thread> 
using namespace std;
void addVectors(const vector<int>& a, const vector<int>& b, vector<int>& result, int start, int end) {
    for (int i = start; i < end; ++i) {
        result[i] = a[i] + b[i];
    }
}
int main() {
    int size;
    cout << "Enter the size of the vectors: ";
    cin >> size;
    vector<int> a(size);
    vector<int> b(size);
    vector<int> result(size);
    cout << "Enter the elements of vector a: ";
    for (int i = 0; i < size; ++i) {
        cin >> a[i];
    }
    cout << "Enter the elements of vector b: ";
    for (int i = 0; i < size; ++i) {
        cin >> b[i];
    }
    const int numThreads = 4;
    vector<thread> threads;
    int chunkSize = size / numThreads;
    for (int i = 0; i < numThreads; ++i) {
        int start = i * chunkSize;
        int end = (i == numThreads - 1) ? size : (i + 1) * chunkSize;
        threads.emplace_back(addVectors, ref(a), ref(b), ref(result), start, end);
    }
    for (auto& thread : threads) {
        thread.join();
    }
    for (int i = 0; i < size; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
