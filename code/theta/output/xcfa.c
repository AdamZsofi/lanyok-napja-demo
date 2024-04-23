    extern void abort();
    extern int __VERIFIER_nondet_int();
    extern _Bool __VERIFIER_nondet__Bool();
    extern void reach_error();
    
    
    
    int reach_error();

int main();
    
        int reach_error() {
        // return parameter
        int reach_error_ret;
        
        // variables
        
        
        
        
        // main logic
        goto reach_error_init;
        
        reach_error_init:
 goto reach_error_final;
reach_error_final:
goto reach_error_final;
        
        // return expression
        return reach_error_ret;
    }

    int main() {
        // return parameter
        int main_ret;
        
        // variables
        unsigned int main__x;
int main__if0__z;
int main__if0__y;
int call___VERIFIER_nondet_int_ret0;
        
        
        
        // main logic
        goto main_init;
        
                            main_init:
                    call___VERIFIER_nondet_int_ret0 = __VERIFIER_nondet_int(); 
if(!((call___VERIFIER_nondet_int_ret0 >= -2147483648) && (call___VERIFIER_nondet_int_ret0 <= 2147483647))) abort();
main__x = ( (call___VERIFIER_nondet_int_ret0 % 4294967296 + 4294967296) % 4294967296 ); goto __loc_16;
main_final:
goto main_final;
                    __loc_16:
                                    switch(__VERIFIER_nondet__Bool()) {
                case 0: 
if(!((((0 != ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) >= 0) ? 1 : 0)) && (0 != ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) < 10) ? 1 : 0))) ? 1 : 0) == 0)) abort();
goto main_final;

case 1: 
if(!((((0 != ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) >= 0) ? 1 : 0)) && (0 != ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) < 10) ? 1 : 0))) ? 1 : 0) != 0)) abort();
if(!((main__if0__z >= -2147483648) && (main__if0__z <= 2147483647))) abort();
main__if0__y = ((( ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) + 4) % 4294967296 + 4294967296) % 4294967296 ) >= 2147483648) ? (( ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) + 4) % 4294967296 + 4294967296) % 4294967296 ) - 4294967296) : ( ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) + 4) % 4294967296 + 4294967296) % 4294967296 ));
goto __loc_34;

                default: abort();
                }
                    __loc_34:
                                    switch(__VERIFIER_nondet__Bool()) {
                case 0: 
if(!(((((( (main__if0__y % 2 + 2) % 2 ) == 0) ? ( (main__if0__y % 2 + 2) % 2 ) : ((main__if0__y >= 0) ? ( (main__if0__y % 2 + 2) % 2 ) : (( (main__if0__y % 2 + 2) % 2 ) - 2))) == 0) ? 1 : 0) != 0)) abort();
main__if0__z = ((( ((2 * ( (main__x % 4294967296 + 4294967296) % 4294967296 )) % 4294967296 + 4294967296) % 4294967296 ) >= 2147483648) ? (( ((2 * ( (main__x % 4294967296 + 4294967296) % 4294967296 )) % 4294967296 + 4294967296) % 4294967296 ) - 4294967296) : ( ((2 * ( (main__x % 4294967296 + 4294967296) % 4294967296 )) % 4294967296 + 4294967296) % 4294967296 ));
goto __loc_73;

case 1: 
if(!(((((( (main__if0__y % 2 + 2) % 2 ) == 0) ? ( (main__if0__y % 2 + 2) % 2 ) : ((main__if0__y >= 0) ? ( (main__if0__y % 2 + 2) % 2 ) : (( (main__if0__y % 2 + 2) % 2 ) - 2))) == 0) ? 1 : 0) == 0)) abort();
main__if0__z = (main__if0__y + 2);
goto __loc_73;

                default: abort();
                }
                    __loc_73:
                                    switch(__VERIFIER_nondet__Bool()) {
                case 0: 
if(!((((main__if0__z + (- main__if0__y)) == 0) ? 1 : 0) != 0)) abort();
goto main_error;

case 1: 
if(!((((main__if0__z + (- main__if0__y)) == 0) ? 1 : 0) == 0)) abort();
main_ret = 0;
goto main_final;

                default: abort();
                }
main_error:
reach_error();
        
        // return expression
        return main_ret;
    }
    
    
