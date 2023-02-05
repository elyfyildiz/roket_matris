#include<stdio.h>
void elemanlari_goster( int [][7] );
void saga_dondur( int [][7] );
void sola_dondur(int [][7] );
int main( void )
{
	int matris[7][7] = {
		{5, 0, 10, 20, 30, 15, 25},
		{5, 15, 45, 85, 50, 60, 70},
		{3, 50, 75, 80, 100, 120, 100},
		{2, 90, 80, 100, 150, 140, 145},
		{1, 120, 255, 200, 195, 225, 225},
		{0, 150, 255, 200, 255, 255, 255},
		{0, 200, 255, 200, 200, 200, 200}};
	printf("Orijinal Resim\n");
	elemanlari_goster( matris );
	printf("\n90 Derece Saga Dondurulmus Resim\n");
	saga_dondur( matris );
	printf("\n90 Derece Sola Dondurulmus Resim\n");
	sola_dondur( matris );
}
void elemanlari_goster( int dizi[][7] )
{
	int i, j;
	for( i = 0; i < 7; i++ ) {
		for( j = 0; j < 7; j++ )
			printf( "%d ", dizi[i][j] );
		printf( "\n" );
	}
}
void saga_dondur( int elemanlari_goster[][7] )
{
	int i, j;
	for( i = 0; i < 7; i++ ) {
		for( j = 0; j < 7 ; j++ )
			printf( "%d ", elemanlari_goster[6-j][i] );
		printf( "\n" );
	}
}
void sola_dondur ( int saga_dondur[][7] )
{
	int i, j;
	for( i = 0; i < 7; i++ ) {
		for( j = 0; j < 7 ; j++ )
			printf( "%d ", saga_dondur[i][j] );
		printf( "\n" );
	}
}