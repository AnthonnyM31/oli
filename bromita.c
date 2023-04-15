#include <stdio.h>

int main() {
  char opcion;
  float subtotal = 0, descuento = 0, total = 0;
  int cantidad;
  char nombre[50], cedula[11];
  // variables para almacenar la cantidad de cada producto
  int llantas = 0, pastillas = 0, embrague = 0, faro = 0, radiador = 0;
 
  do {
    printf("\n\n\tMENU PRINCIPAL\n");
    printf("\n\n\tESCRIBA SIEMPRE CON MAYUSCULAS\n");
    printf("\n\tA) Facturar producto");
    printf("\n\tB) Imprimir factura");
    printf("\n\tC) Salir");

    printf("\n\n\tIngrese opcion: ");
    scanf(" %c", &opcion);
//olaa
    switch(opcion) {
      case 'A':
        printf("\n\n\tFACTURAR PRODUCTO\n");
        printf("\n\t1) Llantas (Precio: $150)");
        printf("\n\t2) Kit Pastillas de freno (Precio: $55)");
        printf("\n\t3) Kit de embrague (Precio: $180)");
        printf("\n\t4) Faro (Precio: $70)");
        printf("\n\t5) Radiador (Precio: $120)");

        printf("\n\n\tIngrese opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
          case 1:
            printf("\n\tIngrese cantidad: ");
            scanf("%d", &cantidad);
            llantas += cantidad;
            subtotal += cantidad * 150;
            break;
          case 2:
            printf("\n\tIngrese cantidad: ");
            scanf("%d", &cantidad);
            pastillas += cantidad;
            subtotal += cantidad * 55;
            break;
          case 3:
            printf("\n\tIngrese cantidad: ");
            scanf("%d", &cantidad);
            embrague += cantidad;
            subtotal += cantidad * 180;
            break;
          case 4:
            printf("\n\tIngrese cantidad: ");
            scanf("%d", &cantidad);
            faro += cantidad;
            subtotal += cantidad * 70;
            break;
          case 5:
            printf("\n\tIngrese cantidad: ");
            scanf("%d", &cantidad);
            radiador += cantidad;
            subtotal += cantidad * 120;
            break;
          default:
            printf("\n\tOpcion invalida.");
            break;
        }
        // Preguntar si desea facturar otro producto
        printf("\n\n\tDesea facturar otro producto? (S/N): ");
        scanf(" %c", &opcion);
        break;
      case 'B':
        // Imprimir factura
        printf("\n\n\tIMPRIMIR FACTURA\n");
        printf("\n\tNombre: ");
        scanf(" %[^\n]", nombre);
        printf("\tCedula: ");
        scanf(" %[^\n]", cedula);

        printf("\n\tProducto\t\tCantidad\t\tValor");
        printf("\n\tLlantas\t\t\t%d\t\t\t$%.2f", llantas, llantas * 150.0);
        printf("\n\tKit Pastillas de freno\t%d\t\t\t$%.2f", pastillas, pastillas * 55.0);
        printf("\n\tKit de embrague\t\t%d\t\t\t$%.2f", embrague, embrague * 180.0);
        printf("\n\tFaro\t\t\t%d\t\t\t$%.2f", faro, faro * 70.0);
       
           printf("\n\tRadiador\t\t%d\t\t\t$%.2f", radiador, radiador * 120.0);

        // Calcular descuento
        if (subtotal <= 500) {
          descuento = 0;
        } else if (subtotal <= 1000) {
          descuento = subtotal * 0.04;
        } else if (subtotal <= 5000) {
          descuento = subtotal * 0.07;
        } else {
          descuento = subtotal * 0.09;
        }
        // Calcular total
        total = subtotal - descuento;

        printf("\n\n\tSubtotal\t\t\t\t$%.2f", subtotal);
        printf("\n\tDescuento\t\t\t\t$%.2f", descuento);
        printf("\n\tTotal\t\t\t\t\t$%.2f", total);

        // Preguntar si desea salir o volver al menu principal
        printf("\n\n\tDesea volver al menu principal? (S/N): ");
        scanf(" %c", &opcion);
        if (opcion == 'S' || opcion == 's') {
          opcion = ' ';
        }
        break;
      case 'C':
        printf("\n\tSaliendo del programa...\n");
        break;
      default:
        printf("\n\tOpcion invalida.");
        break;
    }
  } while(opcion != 'C');

  return 0;
}