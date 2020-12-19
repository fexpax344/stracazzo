class Equazioni{
    public:
    float x1,x2,det;
    void determinante(float a, float b, float c){
        det= b*b - (4*a*c);
    }
    void soluzioni(float a, float b, float c){ 
        if(det<0)
            printf("L'equazione e' impossibile\n");
        else if(det==0) {
            x1=(-b)/(2*a);
            printf("Ci sono due soluzioni reali coincidenti: &f\n",x1);
           }
        else{
            x1=(-b-sqrt(det))/(2*a);
            x2=(-b+sqrt(det))/(2*a);
            printf("ci sono due soluzioni reali distinte: %f, %f\n", x1, x2);
        }
    }
};