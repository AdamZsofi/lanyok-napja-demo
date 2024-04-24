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
        unsigned int main__num;
int main__if0__x;
int main__if0__y;
int main__if0__eredmeny;
int call___VERIFIER_nondet_int_ret0;
        
        
        
        // main logic
        goto main_init;
        
                            main_init:
                    call___VERIFIER_nondet_int_ret0 = __VERIFIER_nondet_int(); 
if(!((call___VERIFIER_nondet_int_ret0 >= -2147483648) && (call___VERIFIER_nondet_int_ret0 <= 2147483647))) abort();
main__num = ( (call___VERIFIER_nondet_int_ret0 % 4294967296 + 4294967296) % 4294967296 ); goto __loc_16;
main_final:
goto main_final;
                    __loc_16:
                                    switch(__VERIFIER_nondet__Bool()) {
                case 0: 
if(!((((0 != ((( (main__num % 4294967296 + 4294967296) % 4294967296 ) >= 1) ? 1 : 0)) && (0 != ((( (main__num % 4294967296 + 4294967296) % 4294967296 ) < 10) ? 1 : 0))) ? 1 : 0) == 0)) abort();
goto main_final;

case 1: 
if(!((((0 != ((( (main__num % 4294967296 + 4294967296) % 4294967296 ) >= 1) ? 1 : 0)) && (0 != ((( (main__num % 4294967296 + 4294967296) % 4294967296 ) < 10) ? 1 : 0))) ? 1 : 0) != 0)) abort();
main__if0__x = ((main__num >= 2147483648) ? (main__num - 4294967296) : main__num);
main__if0__y = ((( ((( (main__num % 4294967296 + 4294967296) % 4294967296 ) + -4) % 4294967296 + 4294967296) % 4294967296 ) >= 2147483648) ? (( ((( (main__num % 4294967296 + 4294967296) % 4294967296 ) + -4) % 4294967296 + 4294967296) % 4294967296 ) - 4294967296) : ( ((( (main__num % 4294967296 + 4294967296) % 4294967296 ) + -4) % 4294967296 + 4294967296) % 4294967296 ));
goto __loc_37;

                default: abort();
                }
                    __loc_37:
                                    switch(__VERIFIER_nondet__Bool()) {
                case 0: 
if(!(((main__if0__y == 0) ? 1 : 0) != 0)) abort();
goto main_error;

case 1: 
if(!(((main__if0__y == 0) ? 1 : 0) == 0)) abort();
if(!((main__if0__eredmeny >= -2147483648) && (main__if0__eredmeny <= 2147483647))) abort();
goto __loc_55;

                default: abort();
                }
                    __loc_55:
                                    switch(__VERIFIER_nondet__Bool()) {
                case 0: 
if(!(((main__if0__y <= 0) ? 1 : 0) != 0)) abort();
main__if0__eredmeny = ((main__if0__x >= 0) ? (main__if0__x / main__if0__y) : ((( (main__if0__x % main__if0__y + main__if0__y) % main__if0__y ) != 0) ? ((main__if0__y >= 0) ? ((main__if0__x / main__if0__y) + 1) : ((main__if0__x / main__if0__y) - 1)) : (main__if0__x / main__if0__y)));
main_ret = 0;
goto main_final;

case 1: 
if(!(((main__if0__y <= 0) ? 1 : 0) == 0)) abort();
main__if0__eredmeny = ((main__if0__x >= 0) ? (main__if0__x / (- main__if0__y)) : ((( (main__if0__x % (- main__if0__y) + (- main__if0__y)) % (- main__if0__y) ) != 0) ? (((- main__if0__y) >= 0) ? ((main__if0__x / (- main__if0__y)) + 1) : ((main__if0__x / (- main__if0__y)) - 1)) : (main__if0__x / (- main__if0__y))));
main_ret = 0;
goto main_final;

                default: abort();
                }
main_error:
reach_error();
        
        // return expression
        return main_ret;
    }
    
    
