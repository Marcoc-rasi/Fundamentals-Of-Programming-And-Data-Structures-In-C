void imprimirLista(){
	int i;
	printf("\n\n\tNuestros productos:");
	for(i=0;i<15;i++){
		printf("\n\n\tNombre: %s", *(nombre+i));
		printf("\n\tDescripcion: %s", *(descripcion+i));
		printf("\n\tPrecio: %.2f", *(precio+i));
		printf("\n\tID: %i", i+1);
	}
}
