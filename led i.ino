void setup()
{ 
  int i = 0 ;                        // Inicializamos la variable i como un entero
  for ( i = 7 ;  i < 13 ; i++)
      pinMode( i , OUTPUT) ;
}
void loop()
  {
    for ( int i = 7 ;  i < 13 ; i++)              // Definimos la variable i sobre la marcha
      {
          digitalWrite( i , HIGH) ;
          delay (50) ;
          digitalWrite( i , LOW);
          delay (50) ;
      }

    for (  int i = 13 ;  i >7 ; i--)                  // Definimos la variable i sobre la marcha
      {
          digitalWrite( i , HIGH) ;
          delay (50) ;
          digitalWrite( i , LOW);
          delay (50) ;
      }

