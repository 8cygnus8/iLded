     void loop() // Prog_4_2
          {
               for ( int i = 6 ; i < 14 ; i++) // Definimos la variable i sobre la marcha
                     {
                          digitalWrite( i , HIGH) ;
                          delay (500) ;
                          digitalWrite( i , LOW);
                          delay (500) ;
                     }
               for ( int i = 12 ; i >6 ; i--) // Definimos la variable i sobre la marcha
                     {
                         digitalWrite( i , HIGH) ;
                         delay (500) ;
                         digitalWrite( i , LOW);
                         delay (500) ;
                      }
         }
