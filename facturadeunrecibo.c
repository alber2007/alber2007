#include <stdio.h>

int main() {
    char nombre[50];
    char direccion[100];
    int cedula;
    
    int cantidad, i;
    char producto[50];
    float precio, subtotal = 0, total = 0;

    printf("===== SISTEMA DE FACTURACION =====\n");

    // Datos del cliente
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Ingrese su direccion: ");
    fgets(direccion, sizeof(direccion), stdin);

    printf("Ingrese su cedula: ");
    scanf("%d", &cedula);

    // Cantidad de productos
    printf("Cuantos productos desea ingresar: ");
    scanf("%d", &cantidad);

    // Factura
    printf("\n===== FACTURA =====\n");
    printf("Cliente: %s", nombre);
    printf("Direccion: %s", direccion);
    printf("Cedula: %d\n\n", cedula);

    printf("%-20s %-10s %-10s\n", "Producto", "Precio", "Subtotal");

    for (i = 0; i < cantidad; i++) {
        printf("\nProducto %d\n", i + 1);

        printf("Nombre del producto: ");
        scanf("%s", producto);

        printf("Precio: ");
        scanf("%f", &precio);

        subtotal = precio;
        total += subtotal;

        printf("%-20s %-10.2f %-10.2f\n", producto, precio, subtotal);
    }

    // Total final
    printf("\n=============================\n");
    printf("TOTAL A PAGAR: %.2f\n", total);
    printf("=============================\n");

    return 0;
}