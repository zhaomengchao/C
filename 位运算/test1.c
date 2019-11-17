//另类相加
//不使用加法运算符来完成两个数的加法
class UnusualAdd {
public:
    int addAB(int A, int B) {
        while(A)
        {
            int tmp = B;
            B = A ^ B;
            A = A & tmp;
            A <<= 1;
        }
        return B;
    }
};