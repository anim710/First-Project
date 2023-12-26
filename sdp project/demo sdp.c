#include<stdio.h>
#include<string.h>
struct Registar{
long long int id;
char name[10];
int blood_code;
char phone[15];
};
struct donor{
long long int id;
char name[10];
int blood_code;
char phone[15];
};
void mainmenu();
void registar();
void search_blood();
void blood_info();
void hospital();
void call_mainmenu();
void donation();
void faq();
void show_code();
void blank();
int main()
{
    mainmenu();
    return 0;
}
void mainmenu()
{
    int a;
    printf("\t\t\t\t...WELCOME TO THE BLOOD DONATION SYSTEM...\t\t\t");
    printf("\n\n");
    printf("\t\t\t......Press Corresponding Number to Choose What You Want to Do.....\n\n");
    printf("\n");
    printf("1.Register as a Blood Donor.\n");
    printf("2.Search for Blood.\n");
    printf("3.Information on Blood types.\n");
    printf("4.Information on Blood Bank of Nearby Hospital.\n");
    printf("5.Donation.\n");
    printf("6.FAQ.\n");
    printf("\n\n");
    printf("Enter Your Choice : ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:registar();
        break;
        case 2:search_blood();
        break;
        case 3:blood_info();
        break;
        case 4:hospital();
        break;
        case 5:donation();
        break;
        case 6:faq();
        break;


    }
}
void registar()
{
int i,n=1,k;
struct Registar st;
FILE *p;
p = (fopen("Registration.txt", "w"));
printf("\n\n.....Enter The following information.....");
printf("\n\n");
show_code();
printf("Donor Information:\n");
printf("***Use blank instead of space in name***\n ");
printf("\nEnter ID:");
scanf("%lld",&st.id);
printf("Enter Name:");
scanf("%s",&st.name);
printf("Enter Blood Code:");
scanf("%d",&st.blood_code);
printf("Enter phone number:");
scanf("%s",&st.phone);
printf("\nDonor Information List:");
fprintf(p,"\nID:%d\nName:%s\nBlood Code:%d\nPhone Number:%s\n",st.id,st.name,st.blood_code,st.phone);
printf("\nID:%d\nName:%s\nBlood Code:%d\nPhone Number:%s\n",st.id,st.name,st.blood_code,st.phone);
printf("Press 1 to confirm your information!!\n");
scanf("%d",&i);
if(i==1)
{
    printf("You Are Successfully Registered.");
}
else
{
    while(n!=i)
{
    printf("Press 1 to confirm!!\n");
    scanf("%d",&i);
    if(i==1)
{
    printf("You Are Successfully Registered.");
}
}
}
fclose(p);
call_mainmenu();
blank();
}
void search_blood()
{
int i;
int bc;
show_code();
printf("Enter Blood Code : ");
scanf("%d",&bc);
struct donor st[1000];
FILE *p;
p = (fopen("Project.txt", "r"));
for(i=0;i<30;i++){
fscanf(p,"%lld",&st[i].id);
fscanf(p,"%s",&st[i].name);
fscanf(p,"%d",&st[i].blood_code);
fscanf(p,"%s",&st[i].phone);
}
fclose(p);
printf("\nDonor Information List for Given Blood Code:");
for(i=0;i<30;i++)
{
       if(bc==st[i].blood_code)
        printf("\nID:%d\nName:%s\nBlood Code:%d\nPhone Number:%s\n",st[i].id,st[i].name,st[i].blood_code,st[i].phone);
}
blank();
call_mainmenu();
blank();
}
void blood_info()
{
    printf("\n\n");
    printf("\t\t\t\t\tInformation on Blood Types ");
    printf("\n\n Choose your option- \n 1.Blood Group\n 2.Rh-Factor\n 3.Antibody & Antigen\n 4.Blood Donation");
    printf("\n\nEnter your option:");
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("Blood Group: \n\nThe ABO blood group system consists of 4 types of blood group  A, B, AB, and O and is mainly based on the antigens and antibodies on red blood cells and in the plasma.\nBlood Group A-Presence of antigen A on the RBCs and anti-B antibodies in the plasma.\nBlood group B-Presence of antigen B on the RBCs and anti-A antibodies in the plasma.\nBlood group AB-Presence of both antigen A and B on the red blood cells and lacks the antibody.\nBlood group O-Absence of both antigen A and B on the red blood cells and presence of both the anti-A and anti-B antibodies in the plasma.");
        printf("\nBlood Group A-Presence of antigen A on the RBCs and anti-B antibodies in the plasma.");
        printf("\nBlood group B-Presence of antigen B on the RBCs and anti-A antibodies in the plasma.");
        printf("\nBlood group AB-Presence of both antigen A and B on the red blood cells and lacks the antibody.");
        printf("\nBlood group O-Absence of both antigen A and B on the red blood cells and presence of both the anti-A and anti-B antibodies in the plasma.");
     }
    if(n==2){
        printf("\n\nRh-Factor: \n\n Rh factor is an inherited protein found on the surface of red blood cells. If your blood has the protein, you're Rh positive. If your blood doesn't have the protein, you're Rh negative.");
        printf("The '+' or '-' you might see after your blood type refers to Rh positive or Rh negative.");
        printf("Having an Rh negative blood type is not an illness, and it usually does not affect your health.");
        printf("But it can affect pregnancy. Your pregnancy needs special care if you're Rh negative and your baby is Rh positive. That's called Rh incompatibility. A baby can inherit the Rh factor from either parent.");
        printf("\nYour health care provider will advise that you have a blood type and Rh factor screening test during your first prenatal visit.");
        printf("This will show whether you are Rh positive or Rh negative.");
    }
    if(n==3){
         printf("\n\nAntibody & Antigen: \n\n Antigens, or immunogens, are substances or toxins in your blood that trigger your body to fight them.The presence of antigens rouses your body’s illness-fighting white blood cells, called lymphocytes.");
         printf("This presence of antigens causes white blood cells to make cells called antibodies to fight against the antigens.\nThere are two main types of antigens, heteroantigens and autoantigens:");
         printf("\n*Heteroantigens are substances that are foreign to your body and involve substances made by or found within: \n\n*viruses\n*bacteria\n*protozoa\n*blood and red blood cells from other people\n*snake venom\n*allergens such as pollen.");
         printf("\n*certain proteins in foods\n\n*Autoantigens, or self-antigens, are made by your body to fight your cells and are usually a sign of an illness such as an autoimmune condition.\n\nAntibodies are also called immunoglobulins or Ig.");
         printf("They are Y-shaped proteins made by your immune system’s B lymphocytes or B cells.\nB cells attack and eliminate viruses and other toxins outside the cell. They do this by making specific antibodies for a single type of antigen.");
         printf("These tailored antibodies lock on to their specific antigens and tag them for attack. Antibodies also block these antigens, keeping them away from your healthy cells.");
         printf("Ultimately, antibodies kill these antigens, stopping infection.\nThe main types of antibodies (immunoglobulins) include:\n");
         printf("\n*IgG:These are the most abundant types of antibodies in your plasma. They detoxify harmful substances and provide long-term protection.");
         printf("\n*IgM:These are the first antibodies made by B cells in response to antigens.");
         printf("\n*IgA:These antibodies collect antigens and remove them from your body in your mucus or other body fluids.");
         printf("\n*IgE:These antibodies trigger allergies and protect against parasites.Small amounts are in your skin, lungs, and mucosal membranes.");
         printf("\n*IgD:These antibodies bind to B cells and signal them to release IgM antibodies.");
         printf("\n\nEach antibody guards against its target antigen, and many types of antibodies are found throughout your body.They play a vital role in your body’s defense against illness and disease.");
    }
    if(n==4){
         printf("\n\nBlood Donation :\n\n*If you have type A blood, you should only receive types A or O.");
         printf("\n*If you have type B blood, you should only receive types B or O blood.");
         printf("\n*If you have type AB blood, you can receive types A, B, AB, or O blood.");
         printf("\n*If you have type O blood, you should only receive type O blood.");
         printf("\n\nIf you have type AB blood, you’re known as a 'universal recipient' and can receive any ABO category of donor blood.");
         printf("\nIf you have type O blood, you’re known as a 'universal donor' as anyone can receive type O blood.Type O blood is often used in emergencies when there is not enough time to perform blood typing tests.");
     }
     blank();
     call_mainmenu();
     blank();
}
void hospital()
{
    printf("\t\t\t\t\tInformation on Blood Bank of Nearby Hospital");
printf("\n1.SQUARE HOSPITAL");
printf("\nAddress: 18/F, Bir Uttam, Qazi Nuruzzaman Sarak, West Panthapath");
printf("\nMail: info@squarehospital.com");
printf("\n2.UNITED HOSPITAL LIMITED");
printf("\nAddress: Plot 15, Road 71, Gulshan, Dhaka-1212, Bangladesh");
printf("\nMail: info@uhlbd.com");
printf("\n3.LABAID SPECIALIZED HOSPITAL");
printf("\nAddress: House-06, Road-04, Dhanmondi, Dhaka-1205, Bangladesh");
printf("\nMail: info@labaidgroup.com");
printf("\n4.KURMITOLA GENERAL HOSPITAL");
printf("\nAddress: New Airport Road, Kurmitola, Dhaka Cantonment, Dhaka");
printf("\nMail: kurmitola500bed@hospi.dghs.gov.bd");
printf("\n5.BIRDEM GENERAL HOSPITAL");
printf("\nAddress: Shahbag Square, 122 Kazi Nazrul Islam Ave, Dhaka 1000");
printf("\nMail: info@birdem.com");
printf("\n6.DHAKA MEDICAL COLLEGE");
printf("\nAddress: Dhaka Medical College, Dhaka-1000, Bangladesh");
printf("\nMail: dmch@hospi.dghs.gov.bd");
printf("\n7.EVERCARE HOSPITAL DHAKA");
printf("\nAddress: Plot: 81, Block: E, Bashundhara R/A, Dhaka 1229, Bangladesh");
printf("\nMail: info@evercare.ng");
blank();
call_mainmenu();
blank();
}
void donation()
{
    int c;
    char s[15];
    printf("Your donation is used for charity to help poor people and help them with their livelihood.\n\n\n");
    printf("Selcet your donation method\n");
    printf("1.Bkash\n");
    printf("2.Nagad\n");
    printf("3.Rocket\n");
    printf("Enter your choice: ");
    scanf("%d",&c);
    if(c==1){
        printf("\nOur Bkash number:01730247334\n");
        printf("\nEnter your transaction id:");
        scanf("%s",&s);
        printf("\nThanks for your donation\n");
    }
    if(c==2){
        printf("Our Nagad number:01730247334\n");
        printf("Enter your transaction id:");
        scanf("%s",&s);
        printf("\nThanks for your donation\n");
    }
    if(c==3){
        printf("Our Rocket number:01730247334\n");
        printf("Enter your transaction id:");
        scanf("%s",&s);
        printf("\nThanks for your donation");
    }
    blank();
    call_mainmenu();
    blank();
}
void faq()
{
int ch;
printf("FAQ");
printf("\n\nChoose Your Option-");
printf("\n\n ENTER 1: Can you give your blood to different blood group person?\n");
printf("ENTER 2: How often can you donate blood?\n");
printf("ENTER 3: What is term 'Postive & Negetive' in blood group?\n");
printf("ENTER 4: What is Rh Factor?\n");
printf("ENTER 5: Is Rh Factor really a matter about donating blood?\n");
printf("ENTER 6: Why should we donate blood?\n");
printf("\n\nEnter Your Choice: ");
scanf("%d",&ch);
if(ch==1){
    printf("\n\nYes, You can!\n A person with type A blood can donate blood to a person with type A or type AB.");
    printf("\n A person with type B blood can donate blood to a person with type B or type AB.");
    printf("\nA person with type AB blood can donate blood to a person with type AB only.\n");
    printf("A person with type O blood can donate to any blood group as it is devoid of any antigens. A person with type A blood can receive blood from a person with type A or type O.");
    printf("A person with type B blood can receive blood from a person with type B or type O.\n");
    printf("A person with type AB blood can receive blood from anyone.\n");
    printf("A person with type O blood can receive blood from a person with type O. Because of these patterns, a person with type O blood is said to be a universal donor.\n");
    printf("A person with type AB blood is said to be a universal recipient");
}
 if(ch==2){
    printf("\n\nYou must wait a minimum of 56 days between whole blood donations.\n");
    printf("You must wait at least 7 days after donating blood before you can donate platelets.\n");
    printf("After an automated double red cell collection, you must wait 112 days before donating again.\n");
    printf("You can donate platelets once in a seven day period and up to 24 times a year. You must wait at least 7 days after donating platelets before donating whole blood.\n");
    printf("In any eight (8) week period, you can make one blood donation and one platelet donation or six (6) platelet donations.\n");
 }
 if(ch==3){
    printf("\n\nThe positive or negative in the blood group refers to the Rh antigen.\n");
    printf("A positive blood group means that the person has Rh antigen on the red blood cells whereas a negative blood group means that the Rh antigen is absent on the red blood cells./n");
    printf("Positive and negative blood are the two types of blood classified by the RH blood group system.\n");
    printf("The RH blood group classifies blood based on the presence or absence of the antigen D on the surface of the red blood cells.\n");
    printf("The antigen D is also called ‘Rhesus factor’ (Rh factor).\n");
 }
 if(ch==4){
    printf("\n\nRh factor is an inherited protein found on the surface of red blood cells.\n");
    printf("If your blood has the protein, you're Rh positive. If your blood doesn't have the protein, you're Rh negative.\n");
    printf("The '+' or '-' you might see after your blood type refers to Rh positive or Rh negative.Rh positive is much more common than Rh negative.\n");
    printf("Having an Rh negative blood type is not an illness, and it usually does not affect your health.\n");
    printf("But it can affect pregnancy. Your pregnancy needs special care if you're Rh negative and your baby is Rh positive.\n");
    printf("That's called Rh incompatibility. A baby can inherit the Rh factor from either parent.\n");
    printf("Your health care provider will advise that you have a blood type and Rh factor screening test during your first prenatal visit.\n");
    printf("This will show whether you are Rh positive or Rh negative.\n");
 }
 if(ch==5){
    printf("\n\nRH FACTOR does not affect any donation .. the Red Cross will take any blood type. But if you are an RH Negative type, they break out the fresh donuts. Type is also important.");
 }
 if(ch==6){
    printf("\nThe blood you give is a lifeline in an emergency and for people who need long-term treatments.\n");
    printf("Why do we need you to give blood?We need new blood donors from all backgrounds to ensure there is the right blood available for patients who need it.\n");
    printf("Blood donation is safe for healthy adults. There's no risk of contracting disease. New, sterile equipment is used for each donor.\n");
    printf("Some people may feel nauseous,lightheaded or dizzy after donating blood.If this happens,it should only last a few minutes.You can lie down with your feet up until you feel better.\n");
 }
 else{
    printf("Please select a valid option.\n");
 }
 blank();
 call_mainmenu();
 blank();
}
void call_mainmenu()
{
    int a;
    printf("Press 1 to go to Main-menu!!");
    printf("Press any other button and enter to exit!!\n");
    printf(" ");
    scanf("%d",&a);
    if(a==1)
        mainmenu();
}
void show_code()
{
    printf("Blood Code List:\n1.A+ 2.A-\n3.B+ 4.B-\n5.AB+ 6.AB-\n7.O+ 8.O-");
    printf("\n\n");
}
void blank()
{
    printf("\n\n\n");
}
