void imprimirNodo(struct nodo n){
	printf("\n\n\t\t\t\t#######################\n\n\tNombre del articulo: %s", *(nombre+n.ID));
	printf("\n\tDescripcion del articulo: %s", *(descripcion+n.ID));
	printf("\n\tPrecio unitario: %.2f", *(precio+n.ID));
	printf("\n\tCantidad de articulos: %d", n.cantidad);
}

