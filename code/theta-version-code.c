extern int __VERIFIER_nondet_int(void);
void reach_error() {}

int main()
{
    unsigned int x = __VERIFIER_nondet_int();
    if (x>=0 && x<10) {
        int z;
        int y = x + 4;

        if (y%2 == 0) {
            z = 2*x;
        } else {
            z = y+2;
        }

        int eredmeny = 2*x / (z-y);
        if (z-y == 0) {
            reach_error();
        }

        return 0;
    }
}
