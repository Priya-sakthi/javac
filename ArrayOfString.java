public class Main
{
	public static void main(String[] args) {
    // non-primitive type 
		String [] num = new String[6];
		num[0]= "Hi ";
		num[1]="I'm ";
		num[2]="Priya ";
		num[3]="Excited ";
		num[4]="to be ";
		num[5]="here.";
		
		String[] cars = {"KIA","Volvo","Audi","BMW"};
		for ( String car : cars){
		    System.out.println(car);
		}
		for(int i=0;i<num.length;i++){
		    System.out.print(num[i]);
		}
		
	}
}
