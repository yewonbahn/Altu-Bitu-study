//
// Created by 반예원 on 2021/09/08.
//

//
// Created by banya on 2021-09-05.
//


#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;
vector<string> arr;

void bubbleSort(int n) {
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        //0 ~ n-1까지 정렬 -> 0 ~ n-2까지 정렬 -> ... -> 0 ~ 1까지 정렬
        for (int j = 1; j < n - i; j++) {
            if (arr[j - 1] > arr[j]) {
                swap(arr[j - 1], arr[j]);
            }
            cnt++;
        }
    }
}

int main() {
    int n;
    int cnt2;

    int cnt3 = 0;
    //입력
    cin >> n;
    arr.assign(n, "");

    for (int i = 0; i < n; i++)
        cin >> arr[i]  ;

    bubbleSort(n);
    for (int i = 0 ; i < n+1; i++){
        cnt2 = 0;
        for (int j=0;j<i;j++){

            int n = atoi(arr[j].c_str());

            cnt2 = cnt2 + n;

        }
        cout << cnt2;
        cnt3 = cnt3+cnt2;
    }


    cout << cnt3 << "\n" ;

}