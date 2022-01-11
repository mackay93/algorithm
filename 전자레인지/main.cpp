//
//  main.cpp
//  전자레인지
//
//  Created by 안대수 on 2021/10/02.
//

/*
 3개의 시간조절용 버튼 A B C가 달린 전자레인지가 있다. 각 버튼마다 일정한 시간이 지정되어 있어 해당 버튼을 한번 누를 때마다 그 시간이 동작시간에 더해진다. 버튼 A, B, C에 지정된 시간은 각각 5분, 1분, 10초이다.

 냉동음식마다 전자레인지로 요리해야할 시간 T가 초단위로 표시되어 있다. 우리는 A, B, C 3개의 버튼을 적절히 눌러서 그 시간의 합이 정확히 T초가 되도록 해야 한다. 단 버튼 A, B, C를 누른 횟수의 합은 항상 최소가 되어야 한다. 이것을 최소버튼 조작이라고 한다.

 만일 요리시간이 100초라고 하면(T=100) B를 1번, C는 4번 누르면 된다. 이와 다르게 C를 10번 눌러도 100초가 되지만 이 경우 10번은 최소 횟수가 아니기 때문이 답이 될 수 없다. 이 경우 B 1번, C 4번, 총 5번이 최소버튼 조작이다. 그리고 T=234와 같이 3개의 버튼으로 시간을 정확히 맞출 수 없는 경우도 있다.

 여러분은 주어진 요리시간 T초를 맞추기 위한 최소버튼 조작 방법을 구하는 프로그램을 작성해야 한다.
 */
#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num, five_count = 0, one_count = 0, ten_count = 0, five = 300, one = 60, ten = 10;
    cin >> num;
    if(num % 10 != 0)
    {
        cout << "-1";
    }
    else
    {
        while(num != 0)
        {
            if(num/five >= 1)
            {
                five_count++;
                num = num - five;
                continue;
            }
            else if(num/one >= 1)
            {
                one_count++;
                num = num - one;
                continue;
            }
            else if(num/ten >= 1)
            {
                ten_count++;
                num = num-ten;
                continue;
            }
        }
        cout << five_count << " " << one_count << " " << ten_count;
    }
    return 0;
}
