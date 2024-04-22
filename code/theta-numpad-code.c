extern unsigned int __VERIFIER_nondet_uint(void);
void reach_error() {}

int main()
{
    unsigned int x = __VERIFIER_nondet_uint(); // a gondolt szam

    int y = x - 2;
    int z;
    if (y%2 == 0) { // paros
        z = y*2;
    } else { // paratlan
        z = y+1;
    }

    if (z-y==0) {
        reach_error();
    }
    int eredmeny = x / (z-y); // itt ez mindig jó?

    if (eredmeny % 2 == 0) { // paros eredmeny
        return 0;
    } else { // paratlan eredmeny
        return 0;
    }
}
