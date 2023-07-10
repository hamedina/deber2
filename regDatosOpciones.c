#include <stdio.h>
#include "estructuras.c"



int main(void) {
int opcion =0;
int cantidadPersonas;

  
  
  
  
  
  
  
  
  Profesor *profesor;
     Estudiante *estudiante;
  
  do
    {
  printf("\n\n*****MENU PRINCIPAL*****\n");
  printf("1.REGISTAR PROFESOR\n");
  printf("2.REGISTRAR ESTUDIANTE\n");
  printf("3.MOSTRAR DATOS PROFESOR\n");
  printf("4.MOSTRAR DATOS ESTUDIANTE\n");
  printf("5.ELIMINAR MATERIA\n");
  printf("6.CAMBIAR NIVEL\n");
  printf("7. TERMINAR-SALIR DE PROGRAMA." );
  printf( "\n-----------Introduzca opcion (1-7):----------- \n");

  scanf("%i", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1:  {
              profesor = crearProfesor();
             registrarProfesor(profesor);
               
  }break;
          case 2:  {
            estudiante =crearEstudiante();                        
            registrarEstudiante(estudiante);
            
            
  }break;
          case 3:  {
           mostrarProfesor(profesor);
  }break;
          case 4:  {
            mostrarEstudiante(estudiante);
            
  }break;
          case 5:  {
          
  }break;
          case 6:  {
            ;
  }break;
          case 7:  {
            ;
  }break;
          case 8:  {
            ;
  }break;
         
 /* Fin del anidamiento */
    } 
    
    }while ( opcion !=7 );
  return 0;
}

