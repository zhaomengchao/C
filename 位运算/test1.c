//�������
//��ʹ�üӷ������������������ļӷ�
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