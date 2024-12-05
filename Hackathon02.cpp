#include<stdio.h>
int main (){
	int cases=0,on=0,kichCo=0,le=0; 
	int  array[100]; 	
	while (on==0) {
		printf("menu\n");
		printf("1 So phan tu va nhap gia tri cho mang\n");
		printf("2 in ra cac gia tri phan tu trong mang\n");
		printf("3 dem so luong phan tu le trong mang\n");
		printf("4 tim gia tri lon thu hai trong mang\n");
		printf("5 them mot phan tu vao dau mang\n");
		printf("6 xoa 1 vi tri cu the\n");
		printf("7 sap xep mang theo thu tu tang dan\n");
		printf("8 yeu cau nhap 1 phan tu va tim kiem xem co ton tai trong mang hay khong(Binary search)\n");
		printf("9 in ra toan bo so nguyen to trong mang da duoc binh phuong \n") ;
		printf("10 Thoat\n"); 
		printf("11 sap xep theo thu tu giam dan\n"); 
	scanf("%d",&cases) ;
	switch (cases){
		case 1://So phan tu va nhap gia tri cho mang
	printf("moi ban nhap kich co mang");
	scanf("%d",&kichCo)	; 
	for(int i=0;i<kichCo;i++){
		printf("phan tu thu %d ",i+1) ;
		scanf("%d",&array[i]) ;
      	} 
      	break ; 
      	case 2://in ra cac gia tri phan tu trong mang
      	printf("cac phan tu sau khi duoc them la \n"); 
      	for(int i=0;i<kichCo;i++){
      		printf("%d\n",array[i]) ;
		 }
		 break ; 
		case 3://dem so luong phan tu le trong mang
		{le =0; 
		for (int i=0;i<kichCo;i++){
			if (array[i]%2!=0) {
			le++;	
			}
		} }
		printf("so luong phan tu le trong mang la %d\n",le) ;
		break ;
		case 4://tim gia tri lon thu hai trong mang
		{int temp=0; 
		for(int i=0;i<kichCo;i++){
			for(int j=0;j<kichCo-i-1;j++) {
			  if(array[j]>array[j+1]){
			  	temp=array[j];
			  array[j] =array[j+1];
			  array[j+1]=temp; 
			  } 
			}
		} 
		printf("phan tu lon thu hai trong mang la %d\n",array[kichCo-2]) ;
		 }
		 break; 
		case 5: //them mot phan tu vao dau mang
		{int value=0;
		printf("moi nguoi dung nhap gia tri muon them");
		scanf("%d",&value) ;
		for(int i=kichCo;i>0;i--) {
			array[i]=array[i-1];			
		}
		array[0]=value; 
		kichCo++;
		for(int i=0;i<kichCo;i++){
      		printf("%d\n",array[i]) ;
		 }
		 break ; 				
	}
	
		case 6://xoa 1 vi tri cu the
		{
			int viTri=0;
			printf("ban muon xoa phan tu thu may ?");
			scanf("%d",&viTri) ;
			for(int i=viTri-1;i<kichCo;i++){
				array[i]=array[i+1]; 
			} 
			array[kichCo-1]=0; 
			 kichCo--;
			 for(int i=0;i<kichCo;i++){
      		printf("%d\n",array[i]) ;
		 }
		 break ; 
			  
		}
		case 7: //sap xep mang theo thu tu tang dan
		{ int temp=0; 
		for(int i=0;i<kichCo;i++){
			for(int j=0;j<kichCo-i-1;j++){
				if(array[j]>array[j+1]){
				 temp=array[j]	;
				 array[j]=array[j+1];
				 array[j+1]=temp; 
				} 
			} 
		} 
		for(int i=0;i<kichCo;i++){
      		printf("%d\n",array[i]) ;
		 }
		 break; 
	}
		 case 8://yeu cau nhap 1 phan tu va tim kiem xem co ton tai trong mang hay khong
	{int sereach=0,flag=0,viTriTimKiem; 		   	  
		 printf("ban muon tim phan tu co gia tri la gi");
		 scanf("%d",&sereach);
		 for (int i=0;i<kichCo;i++){
		 	if(array[i]=sereach) {
		 		flag=1;
		 		viTriTimKiem=i; 
				 break; 
			 }
		 } 
		 if(flag==1){
		 	printf("phan tu tai vi tri %d",viTriTimKiem) ;
		 } else
		 printf("khong ton tai phan tu nay"); 
}
		  break; 
		  case 11://sap xep theo thu tu giam dan
		  {int tempA=0; 
		  for(int i=0;i<kichCo;i++) {
		  	for(int j=0;j=kichCo-i-1;j++) {
		  		if (array[j]<array[j+1]) {
		  			tempA=array[j];
					  array[j]=array[j+1];
					  array[j+1]=tempA; 
				  }
			  }			  			 
		 } 
		 printf("cac phan tu sau khi duoc sap xep giam dan");
		  for(int i=0;i<kichCo;i++){
      		printf("%d\n",array[i]) ;
		  }
	}
	break; 
	     case 10:
		printf("thoat");
		return 0; 
		 		  
     	} 		 		 		
	}
} 

