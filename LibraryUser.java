package OOPS_WEEK_1;
interface LibraryUser{
    public void  registerAccount();

    public void requestBook();
}

class KidUsers implements LibraryUser {
    int age;
    String bookType;
    
    KidUsers(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    public void registerAccount(){
            if(age<12){
                System.out.println("You have successfully registered under a Kids Account");
            }
            if(age>12){
                System.out.println("Sorry, Age must be less than 12 to register as a kid");
            }
        }

    public void requestBook(){
            if(bookType.equals("Kids")){
                System.out.println("Book Issued successfully, please return the book within 10 days");
            }
            else{
                System.out.println("Oops, you are allowed to take only kids books");
            }
        }
    }

    class AdultUser implements LibraryUser {
        int age;
        String bookType;

    AdultUser(int age, String bookType) {
            this.age = age;
            this.bookType = bookType;
    }

public void registerAccount(){
        if(age>12){
            System.out.println("You have successfully registered under an Adult Account");
        }
        if(age<12){
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }


    public void requestBook(){
            if(bookType.equals("Fiction")){
                System.out.println("Book Issued successfully, please return the book within 7 days");
            }
            else{
                System.out.println("Oops, you are allowed to take only adult Fiction books");
            }
        }
}
