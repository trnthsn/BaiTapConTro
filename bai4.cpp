double *square = new double;
double* getSquare (double number)
{
    double tempSquare = number * number;
    *square = tempSquare;
    return square;
}