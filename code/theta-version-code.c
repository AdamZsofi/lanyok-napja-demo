extern int __VERIFIER_nondet_int(void);
void reach_error() {}

int main()
{
    unsigned int num = __VERIFIER_nondet_int();
    if (num>=1 && num<10) {
        int x = num;
        int y = num - 4;

        if (y == 0) {
            reach_error();
        }

        int eredmeny;
        if (y <= 0) {
            eredmeny = x/y;
        } else {
            eredmeny = x/-y;
        }

        return 0;
    }
}
