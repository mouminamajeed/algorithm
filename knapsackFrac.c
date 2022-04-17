#include<stdio.h>
//n=7,capacity=15

void knapsack (int n, float weight[],float profit[],float capacity){
	float x[20],tp=0;//tp=total profit
	int i,j,u;
	u=capacity;
	
	for(i=0;i<n;i++)
	x[i]=0.0;//all values intially 0
	
	for(i=0;i<n;i++){
		if(weight[i]>u)
		break;//goto line21
		else{
			x[i]=1.0;//compt obj
			tp=tp+profit[i];//tp intially 6+10
			u=u-weight[i];//15-1=14,then next iter 14-2=12
			
		}
	}
	if(i<n)
	x[i]=u/weight[i];//u remaning capacity i.e2/3
	tp=tp+(x[i]*profit[i]);
	
	printf("\n result is: ");
    for(i=0;i<n;i++)
   printf("%f\t",x[i]);
   
   printf("\n max prof is: %f",tp);

}
	int main(){
		float weight[20],profit[20],capacity;
		int num,i,j;
		float ratio[20],temp;
		
		printf("\n enter num of obj:-");
		scanf("%d" ,&num);//7
		
		printf("\n enter weights and profit of each obj :-");
		for(i=0;i<num;i++){
			scanf("%f %f" ,&weight[i], &profit[i]);
			
		}
		printf("\n enter capacity of knapsack: ");
		scanf("%f",&capacity);//15
		
		for(i=0;i<num;i++){
			ratio[i]=profit[i]/weight[i];
			
		}
		
		for(i=0;i<num;i++){
			for(j=i+1;j<num;j++){
				if(ratio[i]<ratio[j]){
					temp=ratio[j];//swap ratio
					ratio[j]=ratio[i];
					ratio[i]=temp;
					
					temp=weight[j];//weight
					weight[j]=weight[i];
					weight[i]=temp;
					
					temp=profit[j];//profit
					profit[j]=profit[i];
					profit[i]=temp;
				}
			}
			
		}
		knapsack(num,weight,profit,capacity);//calling fun in main num=7,capacity=15
		return(0);
	
}
