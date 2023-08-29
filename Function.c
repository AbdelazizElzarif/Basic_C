#include<stdio.h>
#include<stdlib.h>
int sum_between_two_numpers(int num1,int num2)
{
	int i;
	int sum=0;
	int temp;
	if(num1>num2)
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	for(i=num1+1;i<num2;i++)
	{
		sum+=i;
	}
	return sum;
	
}
void max_min_users_input(int numper_of_numpers,int *max_between_numpers,int*min_between_numpers)
{
	int i;
	int num;
	for(i=0;i<numper_of_numpers;i++)
	{
		scanf("%d",&num);
		if(i==0)
		{
			*max_between_numpers=num;
			*min_between_numpers=num;
		}
		if(num>*max_between_numpers)
		{
			*max_between_numpers=num;
		}
		if(num<*min_between_numpers)
		{
			*min_between_numpers=num;
		}
	}
}
int sum_numpers(int numper_of_numpers)
{
	int num;
	int sum=0;
	int i;
	for(i=0;i<numper_of_numpers;i++)
	{
		scanf("%d",&num);
		sum+=num;
	}
	return sum;
}
int multiple_without(int num1,int num2)
{
	int i;
	int flag=0;
	int mul=0;
	if(num1<0)
	{
		num1=~num1+1;
		flag++;
	}
	if(num2<0)
	{
		num2=~num2+1;
		flag++;
	}
	
	
	for(i=0;i<num1;i++)
	{
		mul+=num2;
	}
	if(flag==1)
	{
		mul=~mul+1;
	}
	return mul;
}
int reminder_without(int num1,int num2)
{
	int count=0;
	while(num1>=num2)
	{
		num1=num1-num2;
		count++;
	}
	printf("divide=%d\n",count);
	return num1;
		
}
float power(int num1,int exponent)
{
	int i;
	float r=1;
	int flag=0;
	if(exponent<0)
	{
		exponent=~exponent+1;
		flag=1;
	}
	for(i=0;i<exponent;i++)
	{
		r=r*num1;
	}
	if(flag==1)
	{
		r=1/r;
	}
	return r;
}
int factorial(int num)
{
	int r=1;
	int i;
	for(i=1;i<=num;i++)
	{
		r=r*i;
	}
	return r;
}
int prime(int num)
{
	int flag=1;
	int i;
	if(num==1||num==0)
	{
		flag=0;
	}
	for(i=2;i<=num/2&&flag==1;i++)
	{
		if(num%i==0)
		{
			flag=0;
		}
	}
	return flag;
}
int perfect_square(int num)
{
	int i;
	int r=0;
	for(i=1;i*i<=num;i++)
	{
		if(i*i==num)
		{
			r=1;
		}
	}
	return r;
}
int base_of_two(int num)
{
	int r=0;
	if(0x80000000%num==0)
	{
		r=1;
	}
	return r;
	
}
int sum_digits(int num)
{
	int sum=0;
	while(num)
	{
		sum+=num%10;
		num/=10;
	}
	return sum;
}
int sum_even_numpers(void)
{
	int flag=0;
	int num;
	int sum=0;
	
	while(flag<=1)
	{
	scanf("%d",&num);
	if(num&1)
	{
		flag++;
	}
	else
	{
		sum+=num;
	}
	}
	return sum;
	
	
}
int numper_of_holes(int num)
{
	int percent;
	int numper_of_holes=0;
	while(num)
	{
		percent=num%10;
		if(percent==8)
		{
			numper_of_holes=numper_of_holes+2;
		}
		else if(percent==0||percent==4||percent==6||percent==9)
		{
			numper_of_holes++;
		}
		else
		{
			
		}
		num=num/10;
	
	}
	return numper_of_holes;
	
}
int max_three_numpers(int num1,int num2,int num3)
{
	int max;
	max=num1;
	if(num2>max)
	{
		max=num2;
	}
	if(num3>max)
	{
		max=num3;
	}
	return max;
}
int max_without_greater(int num1,int num2)
{
	int max;
	int dev;
	dev=num1-num2;
	if(dev&1<<31)
	{
		max=num2;
	}
	else
	{
		max=num1;
	}
	return max;
	
}
int even_odd(int num)
{
	int r=0;
	if(num&1)
	{
		r=1;
	}
	else
	{
		
	}
	return r;
}
char grade(int num)
{
	char g='0';
	if(num>100)
	{
		g='0';
	}
    else if(num>=80)
	{
		g='A';
	}
	else if(num>=70)
	{
		g='B';
	}
	else if(num>=60)
	{
		g='C';
	}
	else if(num>=50)
	{
		g='D';
	}
	else if(num>=0)
	{
		g='F';
	}
	else
	{
		g='0';
	}
	
	return (g);
}
int to_5(int num)
{
	num+=2;
	num/=5;
	num*=5;
	return num;
}
void swap(int *p_num1,int *p_num2)
{
	int temp;
	temp=*p_num1;
	*p_num1=*p_num2;
	*p_num2=temp;
}
void print_between_two_numpers(int num1,int num2)
{
	if(num1>num2)
	{
		int temp=num1;
		num1=num2;
		num2=temp;
	}
	int i;
	for(i=num1+1;i<num2;i++)
	{
		printf("%d\n  ",i);
	}
}
void small_capital(char c)
{
	if(c>='a'&&c<='z')
	{
		printf("small\n");
	}
	else if(c>='A'&&c<='Z')
	{
		printf("capital\n");
	}
	else
	{
		printf("not char from a to z\n");
	}
}
int calculator(int num1,char opp,int num2)
{
	int r=0;
	switch(opp)
	{
		case '+':
		r=num1+num2;
		break;
		case '-':
		r=num1-num2;
		break;
		case '*':
		r=num1*num2;
		break;
		case '/':
		r=num1/num2;
		break;
		default:
		r=0;
		break;
		
	}
	return r;
	
}
void print_even_numper_between_two_numper(int num1,int num2)
{
	int i;
	int temp;
	if(num1>num2)
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	for(i=num1+1;i<num2;i++)
	{
		if((i&1)==0)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	
}
void print_prime_numpers_between_ewo_numpers(int num1,int num2)
{
	int i;
	int temp;
	if(num1>num2)
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	for(i=num1+1;i<num2;i++)
	{
		if(prime(i))
		{
			printf("%d ",i);
		}
	}
	printf("\n");
}
int strong_numper(int num)
{
	int r;
	int temp_num=num;
	int sum=0;
	while(num)
	{
	
	int percent;
	percent=num%10;
	sum+=factorial(percent);
	num=num/10;
	}
	if(temp_num==sum)
	{
		r=1;
	}
	else
	{
		r=0;
	}
	return r;
	
}
int positive_negative_int(int num)
{
	int r;
	if(num&80000000)
	{
		r=0;
	}
	else
	{
		r=1;
	}
	return r;
}
/* *****clear bit ****** */
void clear_bit(char *num,int numper_of_bit)
{
	*num=*num&(~(1<<numper_of_bit));
}
/* *****numper of oone ****** */
int numper_of_one(int num)
{
	int count=0;
	while(num)
	{
		count+=num&1;
		num>>=1;
	}
	return count;
}
/* *****decimal to binary ****** */
void decimal_to_binary(int num)
{
	int bit;
	int i;
	for(i=31;i>=0;i--)
	{
		bit=(num>>i)&1;
		printf("%d",bit);
	}
	printf("\n");
}
void decimal_to_binary_without_zero_left(int num)
{
	int bit;
	int i;
	int flag=0;
	for(i=31;i>=0;i--)
	{
		bit=(num>>i)&1;
		if(bit==1)
		{
			printf("%d",bit);
			flag=1;
		}
		else
		{
			if(flag==1)
			{
				printf("%d",bit);
			}
		}
			
	}
	printf("\n");
}
float area_circular(float r)
{
	float area;
	area=3.14*r*r;
	return area;
}
/* ******reverse digit in decimal numper **** */
int reverse_digit_decimal(int num)
{
	int r_num=0;
	while(num)
	{
		r_num=r_num*10+num%10;
		num=num/10;
	}
	return r_num;
	
}
/* ******reverse bit **** */
int reverse_bit(int num)
{
	int f_bit=0;
	int l_bit=7;
	while(f_bit<=l_bit)
	{
	if(((num>>f_bit)&1)!=((num>>l_bit)&1))
	{
		num=num^(1<<f_bit);
		num=num^(1<<l_bit);
	}
	f_bit++;
	l_bit--;
	}
	return num;
}
/* ********set bit ***** */
int set_bit(int *num,int nofbit)
{
	*num=*num|(1<<nofbit);
	return *num;
}
int toggle_bit(int *num,int nofbit)
{
	*num=*num^(1<<nofbit);
	return *num;
}
int read_bit(int num,int nofbit)
{
	int bit;
	bit=(num>>nofbit)&1;
	return bit;

}
/* ******numper of ones between zeros ******* */
int numper_of_ones_between_zero(int num)
{
	int flag=0;
	int count=0;
	int max=0;
	while(num)
	{
		if(num&1)
		{
			flag=1;
			if(count>max)
			{
				max=count;
			}
			count=0;
		}
		else
		{
			if(flag==1)
			{
				count++;
			}
		}
		num=num>>1;
	}
	return max;
}
int max_xor(int num1,int num2)
{
	int i,j;
	int temp;
	int max_xor=0;
	int xor=0;
	if(num1>num2)
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	for(i=num1;i<=num2;i++)
	{
		for(j=i;j<=num2;j++)
		{
			xor=(i^j);
			if(xor>max_xor)
			{
				max_xor=xor;
			}
		}
	}
	return max_xor;
}
void g_prime(int num)
{
	int flag=0;
	for(int i=2;flag!=num;i++)
	{
		if(prime(i)==1)
		{
			printf("%d\n",i);
			flag++;
		}
	}
	
}
/* array_last_occurance_index * ** */
int array_last_occurance_index(int *arr,int size,int num)
{
	int i;
	int flag=0;
	int last_index=-1;
	for(i=size-1;i>=0&&flag==0;i--)
	{
		if(arr[i]==num)
		{
			last_index=i;
			flag=1;
		}
	}
	return last_index;
	
}
/* array_max_min_indexs * ** */
int *array_max_min_indexs(int *arr,int size)
{
	/* index 0(max_num)
	   index 1(max_index)
	   index 2(min_num)
	   index 3(min_index)
	*/ 
	static int array[4];
	        array[0]=arr[0];
			array[1]=0;
			array[2]=arr[0];
			array[3]=0;
	int i;
	for(i=1;i<size;i++)
	{
		if(array[0]<arr[i])
		{
			array[0]=arr[i];
			array[1]=i;
		}
		if(array[2]>arr[i])
		{
			array[2]=arr[i];
			array[3]=i;
		}
	}
	return array;
	
}
/* *****power of three * ******/
int power_three(int num)
{
	int i;
	int s=0;
	for(i=1;i*i*i<=num;i++)
	{
		if(i*i*i==num)
		{
			s=1;
		}
	}
	return s;
	
}	
/* *****base of three * ******/
int power_three(int num)
{
	int s=0;
	int x=3;
	while(x<=num)
	{
		if(x==num)
		{
			s=1;
		}
		x*=3;
	}
	return s;
	
}	
/* *****array_between_two_numpers_in_heap * ******/
int *array_between_two_numpers_in_heap(int num1,int num2,int *size)
{
	int temp;
	int def;
	int i;
	int m;
	int *array=(int *)0;
	if(num1>num2)
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	def=num2-num1;
	array=(int *)malloc(sizeof(int )*def);
	if(array!=(int *)0)
	{
		for(i=num1+1,m=0;i<num2;i++,m++)
		{
			array[m]=i;
		}
	}
	*size=def-1;
	return array;
	
}
int array_most_repeated_numper(int *arr,int size)
{
	int i,j;
	int count;
	int max=0;
	for(i=0;i<size-1;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count>max)
		{
			max=arr[i];
		}
	}
	return max;
}
void array_print(const int *const arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
void array_reverse(int *arr,int size)
{
	int f=0;
	int l=size-1;
	int temp;
	for( ;f<=l;f++,l--)
	{
		temp=arr[f];
		arr[f]=arr[l];
		arr[l]=temp;
	}
	
}
int array_swap(int *arr1,int size1,int *arr2,int size2)
{
	int i;
	int temp;
	for(i=0;i<size1&&i<size2;i++)
	{
		swap(&arr1[i],&arr2[i]);
	}
	return i;
	
}
int array_longest_consecutive(int *arr,int size,int num)
{
	int count=0;
	int max=0;
	int i;
	for(i=0;i<size;i++)
	{
		if(num==arr[i])
		{
			count++;
			if(count>max)
			{
				max=count;
			}
		}
		else
		{
			count=0;
		}
	}
	return max;
	
	
}
int array_return_numper_longest_occurance(int *arr,int size,int *num)
{
	int count=1;
	int i;
	int max=0;
	for(i=0;i<size-1;i++)
	{
		
		if(arr[i]==arr[i+1])
		{
			count++;
			if(count>max)
			{
				max=count;
				*num=arr[i];
			}
		}
		else
		{
			count=1;
		}
	}
	return max;
	
}
int array_merging_two_array(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
	int i;
	int j;
	for(i=0,j=0;i<size1||i<size2;i++)
	{
		if(i<size1)
		{
			arr3[j]=arr1[i];
			j++;
		}
		if(i<size2)
		{
			arr3[j]=arr2[i];
			j++;
		}
		
	}
	return j;
	
}
int array_remove_repeated_numper(int *arr,int size,int *arr_new)
{
	int i,m;
	for(i=0,m=0;i<size-1;i++)
	{
		if(arr[i]==arr[i+1])
		{
			if(i==size-2)
			{
				arr_new[m]=arr[i];
				m++;
			}	
		}
		else
		{
			arr_new[m]=arr[i];
			m++;
		}
	}
	return m;
	
}
int swap_after_two_zeros(int *arr,int size)
{
	int i;
	int flag=0;
	int f_index=-1;
	int l_index=-1;
	int r=0;
	for(i=0;i<size&&flag<2;i++)
	{
		if((arr[i]==0)&&(i<(size-3))&&(flag==0))
		{
			f_index=i;
			flag=1;
		}
		else if((arr[i]==0)&&(i<(size-3))&&(flag==1))
		{
			l_index=i;
			flag=2;
		}
		else
		{
			
		}
		
	}
	if(f_index!=-1&&l_index!=-1)
	{
		int x=1;
		for(i=0;i<3;i++,x++)
		{
			swap(&arr[f_index+x],&arr[l_index+x]);
		}
		r=1;
	}
	return r;
}
int array_max_difference_between_two_numper(int *arr,int size)
{
	int i,j;
	int max=0;
	int def;
	for(i=size-1;i>0;i--)
	{
		for(j=i-1;j>=0;j--)
		{
			if(i>j)
			{
				def=i-j;
				if(def>max)
				{
					max=def;
				}
				
			}
		}
	}
	return max;
}
char array_char_max_repeated_num(char *arr,int size)
{
	char array[256]={0};
	int max=0;
	int max_num;
	int i;
	for(i=0;i<size;i++)
	{
		if(++array[arr[i]]>max)
		{
			max=array[arr[i]];
			max_num=arr[i];
		}
		
	}
	return max_num;
	
}
void swap_two_pointers(int **p1,int **p2)
{
	int *temp=(int *)0;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
int fabo_series(int index)
{
	int a=0;
	int b=1;
	int result=a+b;
	int i;
	if(index==0)
	{
		result=a;
	}
	for(i=3;i<=index;i++)
	{
	    a=b;
		b=result;
		result=a+b;
	}
	return result;
	
}
void Fibonacci_series_print(int num)
{
	int arr[20]={0};
	arr[0]=0;
	arr[1]=1;
	int i;
	for(i=2;i<=num;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	for(i=0;i<=num;i++)
	{
		printf("%d  ",arr[i]);
	}
}
int array_scan(int *arr)
{
	int i;
	int size;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	return size;
	
}
int array_sum(int *arr,int size)
{
	int i;
	int sum=0;
	for(i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
int array_search(int *arr,int size,int num)
{
	int i;
	int r=-1;
	for(i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			r=i;
		}
	}
	return r;
}
void array_remove_prime(int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(prime(arr[i]))
		{
			arr[i]=0;
		}
	}
	
}
void arr_f_s_max(int *arr,int size,int *f_max,int *s_max)
{
	int flag=0;
	int i;
	*f_max=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]!=arr[i+1]&&flag==0)
		{
			*s_max=arr[i+1];
			flag=1;
		}
		if(arr[i]>*f_max)
		{
			*s_max=*f_max;
			*f_max=arr[i];
		}
		else
		{
			if(arr[i]>*s_max&&arr[i]!=*f_max&&flag==1)
		    {
			*s_max=arr[i];
		    }
			
		}
	}
}
int array_swap_reverse(int *arr1,int size1,int *arr2,int size2)
{
	int i,j;
	int l=size1;
	if(size1>size2)
	{
		l=size2;
	}
	
	for(i=0,j=l-1;i<l;i++,j--)
	{
		swap(&arr1[i],&arr2[j]);
	}
	return l;
}
int *array_odd_even(int *arr,int size,int *arr_odd,int *arr_even)
{
	int l_odd=0;
	int l_even=0;
	int static arr_index[2];
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]&1)
		{
			arr_odd[l_odd]=arr[i];
			l_odd++;
		}
		else
		{
			arr_even[l_even]=arr[i];
			l_even++;
		}
	}
	arr_index[0]=l_odd;
	arr_index[1]=l_even;
	return arr_index;
	
	
}