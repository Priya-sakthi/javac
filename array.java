
public class Main
{
	public static void main(String[] args) {
    //#1 add value to the array
		int [] num = new int[6];
		num[0]=1;
		num[1]=2;
		num[2]=6;
		num[3]=7;
		num[4]=9;
		num[5]=8;
  // #2 another way to add value to the array
    int[] val ={7,8,9,10,11,12};
		for(int i=0;i<num.length;i++){
		    System.out.println(num[i]);
		}
		
	}
}
