#include <stdio.h>

void exersice1(){
    int n;
    int arr[100];

    printf("Vuvedi n: ");
    scanf("%d", &n);

    printf("vuvedi %d chisla vuv vuzhodqsht red: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max_len = 1;
    int max_start = 0;

    int current_len = 1;
    int current_start = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1]){
            current_len++;
        }
        else{
            if(current_len > max_len){
                max_len = current_len;
                max_start = current_start;
            }
            current_len = 1;
            current_start = i;
        }
    }
    if(current_len > max_len){
            max_len = current_len;
            max_start = current_start;
    }    
    printf("Nachalen indeks: %d\n", max_start);
    printf("Max duljina: %d", max_len);
}
void exersice2(){
    int n;
    int arr[100];

    printf("Vuvedi n: ");
    scanf("%d", &n);

    printf("vuvedi %d chisla: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int is_true = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1]){
            is_true = 0;
            break;
        }
    }
    if(is_true == 1){
        printf("redicata e izpulnena");
    }
    else{
        printf("redicata e prekusnata");
    }
}
void exersice3(){
    int n;
    int arr[100];

    printf("Vuvedi n: ");
    scanf("%d", &n);

    printf("vuvedi %d chisla: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int arr_2[100];
    for(int i = n - 1; i > -1; i--){
        arr_2[n - i - 1] = arr[i];
    }
    for(int i = 0; i < n; i++){

    printf("%d ", arr_2[i]);
    }
}
void exersice4(){
    int n;
    int k;
    int arr[100];

    printf("Vuvedi n: ");
    scanf("%d", &n);

    printf("vuvedi %d chisla: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("vuvedi k: ");
        scanf("%d", &k);
    k = k % n;
    int temp_arr[100];
    for(int i = 0; i < n; i++){
        int new_position = (i + k) % n;
        temp_arr[new_position] = arr[i];
    }

    for(int i = 0; i < n; i++){
        arr[i] = temp_arr[i];
}
for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
}

}
void exersice5(){
    int n;
    int k;
    int arr[100];

    printf("Vuvedi n: ");
    scanf("%d", &n);

    printf("vuvedi %d chisla: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("vuvedi k: ");
        scanf("%d", &k);
    int arr_2[100];
    for(int i = n - 1; i > -1; i--){
        arr_2[n - i - 1] = arr[i];
    }
    for(int i = 0; i < n; i++){
        if (arr_2[i] < arr_2[i + 1]){
            int temp = arr_2[i];
            arr_2[i] = arr_2[i + 1];
            arr_2[i + 1] = temp;
        }
    }
    printf("k po golemina element: %d", arr_2[k - 1]);
}

void exersice6(){
    int n;
    int arr[100];

    printf("Vuvedi n: ");
    scanf("%d", &n);

    printf("vuvedi %d chisla vuv vuzhodqsht red: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int inc_max_len = 1, inc_max_start = 0;
    int inc_current_len = 1, inc_current_start = 0;
    int dec_max_len = 1, dec_max_start = 0;
    int dec_current_len = 1, dec_current_start = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            inc_current_len++;
        } else {
            if (inc_current_len > inc_max_len) {
                inc_max_len = inc_current_len;
                inc_max_start = inc_current_start;
            }
            inc_current_len = 1;
            inc_current_start = i;
        }
        if (arr[i] <= arr[i - 1]) {
            dec_current_len++;
        } else {
            if (dec_current_len > dec_max_len) {
                dec_max_len = dec_current_len;
                dec_max_start = dec_current_start;
            }
            dec_current_len = 1;
            dec_current_start = i;
        }
    }
    if (inc_current_len > inc_max_len) {
        inc_max_len = inc_current_len;
        inc_max_start = inc_current_start;
    }
    if (dec_current_len > dec_max_len) {
        dec_max_len = dec_current_len;
        dec_max_start = dec_current_start;
    }
    if(inc_max_len > dec_max_len){
        printf("max len: %d", inc_max_len);
    }else{
       printf("max len: %d", dec_max_len); 
    }

 }
void exersice7(){
    int n,target_sum;
    int arr[100];

    printf("Vuvedi n: ");
    scanf("%d", &n);

    printf("vuvedi %d chisla vuv vuzhodqsht red: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Vuvedi tursenata suma: ");
    scanf("%d", &target_sum);
    int found = 0;
    for (int i = 0; i < n; i++) {
        int current_sum = 0;
        for (int j = i; j < n; j++) {
            current_sum += arr[j];
        if (current_sum == target_sum) {
            for (int k = i; k <= j; k++) {
                    printf("%d ", arr[k]);
                }
                printf("\n");
                
                found = 1; 
                break;      
        }
        }
    if (found) {
        break; 
    }
}
if (!found) {
        printf("\nNqma posledovatelnost ot sysedni 4isla s takava suma.\n");
    }
}
void exersice8(){
    int arr[20];
    int current_size = 10;
    int new_num, insert_index;
    printf("vuvedi purvite 10 chisla:\n");
    for (int i = 0; i < current_size; i++) {
        scanf("%d", &arr[i]);
    }
    while (1) {
        scanf("%d", &new_num);
        
        
        if (new_num == 0) {
            break;
        }

        scanf("%d", &insert_index);

        
        for (int i = current_size; i > insert_index; i--) {
            arr[i] = arr[i - 1];
        }

        
        arr[insert_index] = new_num;
        current_size++;
    }

    
    for (int i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
void exersice9(){
    int n;
    int arr[100];

    printf("Vuvedi n: ");
    scanf("%d", &n);

    printf("Vuvedi %d chisla: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max_len = 1;
    int max_start = 0;

    int current_len = 1;
    int current_start = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1]){
            current_len++;
        }
        else{
            if(current_len > max_len){
                max_len = current_len;
                max_start = current_start;
            }
            current_len = 1;
            current_start = i;
        }
    }
    
    if(current_len > max_len){
        max_len = current_len;
        max_start = current_start;
    }    
    
    printf("Izhod: ");
    for(int i = 0; i < max_len; i++){
        printf("%d ", arr[max_start]);
    }
    printf("\n");
}
int main(){
    exersice9();
    return 0;
}