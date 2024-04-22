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
int main__y;
int main__z;
int main__eredmeny;
unsigned int call___VERIFIER_nondet_uint_ret0;
        
        
        
        // main logic
        goto main_init;
        
                            main_init:
                    call___VERIFIER_nondet_uint_ret0 = __VERIFIER_nondet_unsigned int(); 
if(!((call___VERIFIER_nondet_uint_ret0 >= 0) && (call___VERIFIER_nondet_uint_ret0 <= 4294967295))) abort();
main__x = ( (call___VERIFIER_nondet_uint_ret0 % 4294967296 + 4294967296) % 4294967296 );
main__y = ((( ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) + -2) % 4294967296 + 4294967296) % 4294967296 ) >= 2147483648) ? (( ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) + -2) % 4294967296 + 4294967296) % 4294967296 ) - 4294967296) : ( ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) + -2) % 4294967296 + 4294967296) % 4294967296 ));
if(!((main__z >= -2147483648) && (main__z <= 2147483647))) abort(); goto __loc_25;
main_final:
goto main_final;
                    __loc_25:
                                    switch(__VERIFIER_nondet__Bool()) {
                case 0: 
if(!(((((( (main__y % 2 + 2) % 2 ) == 0) ? ( (main__y % 2 + 2) % 2 ) : ((main__y >= 0) ? ( (main__y % 2 + 2) % 2 ) : (( (main__y % 2 + 2) % 2 ) - 2))) == 0) ? 1 : 0) != 0)) abort();
main__z = (2 * main__y);
goto __loc_54;

case 1: 
if(!(((((( (main__y % 2 + 2) % 2 ) == 0) ? ( (main__y % 2 + 2) % 2 ) : ((main__y >= 0) ? ( (main__y % 2 + 2) % 2 ) : (( (main__y % 2 + 2) % 2 ) - 2))) == 0) ? 1 : 0) == 0)) abort();
main__z = (main__y + 1);
goto __loc_54;

                default: abort();
                }
                    __loc_54:
                                    switch(__VERIFIER_nondet__Bool()) {
                case 0: 
if(!((((main__z + (- main__y)) == 0) ? 1 : 0) != 0)) abort();
goto main_error;

case 1: 
if(!((((main__z + (- main__y)) == 0) ? 1 : 0) == 0)) abort();
main__eredmeny = ((( (((( (main__x % 4294967296 + 4294967296) % 4294967296 ) >= 0) ? (( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) : ((( (( (main__x % 4294967296 + 4294967296) % 4294967296 ) % ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 ) + ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) % ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 ) ) != 0) ? ((( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 ) >= 0) ? ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) + 1) : ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) - 1)) : (( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )))) % 4294967296 + 4294967296) % 4294967296 ) >= 2147483648) ? (( (((( (main__x % 4294967296 + 4294967296) % 4294967296 ) >= 0) ? (( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) : ((( (( (main__x % 4294967296 + 4294967296) % 4294967296 ) % ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 ) + ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) % ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 ) ) != 0) ? ((( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 ) >= 0) ? ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) + 1) : ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) - 1)) : (( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )))) % 4294967296 + 4294967296) % 4294967296 ) - 4294967296) : ( (((( (main__x % 4294967296 + 4294967296) % 4294967296 ) >= 0) ? (( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) : ((( (( (main__x % 4294967296 + 4294967296) % 4294967296 ) % ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 ) + ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) % ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 ) ) != 0) ? ((( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 ) >= 0) ? ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) + 1) : ((( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )) - 1)) : (( (main__x % 4294967296 + 4294967296) % 4294967296 ) / ( ((main__z + (- main__y)) % 4294967296 + 4294967296) % 4294967296 )))) % 4294967296 + 4294967296) % 4294967296 ));
goto __loc_79;

                default: abort();
                }
                    __loc_79:
                                    switch(__VERIFIER_nondet__Bool()) {
                case 0: 
if(!(((((( (main__eredmeny % 2 + 2) % 2 ) == 0) ? ( (main__eredmeny % 2 + 2) % 2 ) : ((main__eredmeny >= 0) ? ( (main__eredmeny % 2 + 2) % 2 ) : (( (main__eredmeny % 2 + 2) % 2 ) - 2))) == 0) ? 1 : 0) != 0)) abort();
main_ret = 0;
goto main_final;

case 1: 
if(!(((((( (main__eredmeny % 2 + 2) % 2 ) == 0) ? ( (main__eredmeny % 2 + 2) % 2 ) : ((main__eredmeny >= 0) ? ( (main__eredmeny % 2 + 2) % 2 ) : (( (main__eredmeny % 2 + 2) % 2 ) - 2))) == 0) ? 1 : 0) == 0)) abort();
main_ret = 0;
goto main_final;

                default: abort();
                }
main_error:
reach_error();
        
        // return expression
        return main_ret;
    }
    
    
