
Leyendo fichero ´src/main.babad´.

principal
{
    ini_var_local
    entero ve,a,b,c,def ;
    flotante vf ,h,j,k;
    caracter vc ;
    booleano vl ;
    entro pe[0], pe2[0] ;
    flotante pf[0], pf2[0] ;
    caracter pc[0], pc2[0] ;
    flotante pl[0][0] ;
    fin_var_local

    entero funcionA (entero a1, flotante a2, caracter a3)
    {
        ini_var_local
        entero x1, x2 ;
        fin_var_local
        caracter funcionB (caracter b1, booleano b2)
        {
            ini_var_local
            flotante xf x2 ;
            fin_var_local
            flotante funcionC (booleano c1, entero c2)
            {
                ini_var_local
                flotante x1 ;
                entero pl1;
                fin_var_local
                pl1 = c2 - 1;
                x1= 1.3 ;
                si (c2>10)
                c2= c2-1 ;
                si_no
                x1= 3.1 ;
                devolver x1 ;
            }

            x2 = x2*xf ;
        }
        flotante funcionD (flotante d1)
        {
            ini_var_local
            caracter dato ;
            entero valor ;
            fin_var_local
            caracter funcionE (caracter e1, caracter e2)
            {
                leer "introduzca dos caracteres: ", e1, e2 ;
                si (e1=='a'){
                    devolver e1 ;
                }
                si_no si (e1=='b')
                    devolver e2 ;
                si_no
                    devolver ' ';
            }
            leer "introduzca un valor entero: ", valor ;
            si (d1>0.0)
            {
                ini_var_local
                entero dato ;
                fin_var_local
                dato= 2 ;
                dato= valor*20/dato ;
            }
            si_no {
                valor= valor * 100 ;
                d1= d1/1000.0 ;
            }

            pf[0] = 1.3;

            devolver d1 ;
        }

    }

    devolver d1 ;
Error(79): Id not found d1.
Error(79): res not declared into function.


}
