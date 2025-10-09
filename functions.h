char is_char_in_array(char c, char array[], int array_size) {
    for (int i = 0; i < array_size; i++) {
        if (c == array[i]) {
            return array[i];
        }
    }
    return 'f';
}

int abs(int a){
    return (a < 0) ? -a : a;
}

int pgcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (a == 0 && b != 0) return b;
    if (b == 0 && a != 0) return a;
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return (a == 0) ? 1 : a;
}

int ppcm(int a, int b) {
    return abs(a * b) / pgcd(a, b);
}

float sum(float a, float b){
    return a + b;
}
float sub(float a, float b){
    return a - b;
}
float mpy(float a, float b){
    return a * b;
}
float division(float a, float b){
    return a / b;
}
int mod(int a, int b){
    return a % b;
}
int fact(int a){
    if (a < 0) return 0;
    if (a == 0 || a == 1) return 1;
    return a * fact(a - 1);
}
