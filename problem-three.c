#include<stdio.h>
int main(){
  int N;
  scanf("%d", &N);
  int V[N];
  for(int i=0; i<N; i++){
    scanf("%d", &V[i]);
    
  }
  int even_sum=0;
  int odd_sum=0;
  for(int i=0; i<N; i++){
    if(V[i]%2==0){
        even_sum += V[i];

    }
    else if (V[i]%2==1){
        odd_sum +=V[i];
    }
  }

  printf("%d ", even_sum);
  printf("%d ", odd_sum);


  return 0;
}
