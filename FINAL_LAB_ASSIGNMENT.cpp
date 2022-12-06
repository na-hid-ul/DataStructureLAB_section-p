
#include <iostream>
#include<list>
#define size_max 4
using namespace std;

 class VehicleQueue{
    public:

    string arr[size_max];
    int first = 0;
    int last = -1;

    int enqueue(string a){
        if(last >= size_max-1){
            cout<<"queue is full.."<<endl;
            return 0;
        }
        arr[++last]=a;
        return 0;
    }
    void printout(){
        for(int i=first;i<=last;i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
    string getCar_number(){
        return arr[1];
    }
    string getCounter_number(){
        return arr[3];
    }
    void search_info(){
        cout<<"DATE:"<<arr[0]<<endl;
        cout<<"CAR_NUMBER: "<<arr[1]<<endl;
        cout<<"TICKET_NUMBER : "<<arr[2]<<endl;
        cout<<"COUNTER_NUMBER : "<<arr[3]<<endl;
    }
};
int main(){
    std:: list<VehicleQueue> heavy_duty;
    std::list<VehicleQueue>medium_duty;
    std::list<VehicleQueue>light_duty;

    int heavy_count=0;
    int medium_count=0;
    int light_count=0;

    VehicleQueue cd;
    cd.enqueue("29-11-2022");
    cd.enqueue("dh-94758");
    cd.enqueue("0124324");
    cd.enqueue("1");
    heavy_duty.push_front(cd);

    VehicleQueue ef;
    ef.enqueue("29-11-2022");
    ef.enqueue("dh-35476");
    ef.enqueue("01234325");
    ef.enqueue("2");
    heavy_duty.push_front(ef);

    VehicleQueue gh;
    gh.enqueue("29-11-2022");
    gh.enqueue("tr-35436");
    gh.enqueue("01234326");
    gh.enqueue("3");
    heavy_duty.push_front(gh);

    VehicleQueue ij;
    ij.enqueue("6.7.2021");
    ij.enqueue("ds-8454123");
    ij.enqueue("5826844");
    ij.enqueue("1");
    heavy_duty.push_front(ij);

    VehicleQueue kl;
    kl.enqueue("29-11-2022");
    kl.enqueue("gh-6556");
    kl.enqueue("989854");
    kl.enqueue("2");
    heavy_duty.push_front(kl);

   cout<<" HEAVY_DUTY_VEHICLE "<<endl;
   cout<< heavy_duty.empty()<<endl;

     std::list<VehicleQueue>::iterator it;
     string search_heavy ="dh-94758";
     for (it = heavy_duty.begin(); it != heavy_duty.end(); it++)
     {
        string car_num = it->getCar_number();
        it->printout();

        if(car_num==search_heavy){
             cout<<"CAR NUMBER HAS BEEN MATCHED"<<endl;
             it->search_info();
          }
     }
    VehicleQueue ab;

    ab.enqueue("29-11-2022");
    ab.enqueue("ab-34556");
    ab.enqueue("2678456");
    ab.enqueue("1");
    medium_duty.push_front(ab);

    VehicleQueue am;
    am.enqueue("29-11-2022");
    am.enqueue("tg-4564");
    am.enqueue("567564");
    am.enqueue("2");
    medium_duty.push_front(am);

    VehicleQueue an;
    an.enqueue("29-11-2022");
    an.enqueue("vk-3456");
    an.enqueue("4354345");
    an.enqueue("3");
    medium_duty.push_front(an);

    VehicleQueue az;
    az.enqueue("29-11-2022");
    az.enqueue("hb-3456");
    az.enqueue("45634");
    az.enqueue("1");
    medium_duty.push_front(az);

    VehicleQueue ax;
    ax.enqueue("29-11-2022");
    ax.enqueue("jk-34544");
    ax.enqueue("5765462");
    ax.enqueue("2");
    medium_duty.push_front(ax);

    cout<<"!! MEDIUM_DUTY_VEHICLE -->> "<<endl;
    cout<< heavy_duty.empty()<<endl;

    string search_medium ="jk-34544";
    for (it = medium_duty.begin(); it != medium_duty.end(); it++)
    {
        string car_num = it->getCar_number();
        it->printout();

        if(car_num==search_medium){
            cout<<" !!  CAR HAS BEEN MATCHED   !!"<<endl;
            it->search_info();
        }
    }
    VehicleQueue op;
    op.enqueue("29-11-2022");
    op.enqueue("gh-7654");
    op.enqueue("7868765");
    op.enqueue("1");
    light_duty.push_front(op);

    VehicleQueue ju;
    ju.enqueue("26.12.2020");
    ju.enqueue("et-5415");
    ju.enqueue("5255152");
    ju.enqueue("2");
    light_duty.push_front(ju);

    VehicleQueue vb;
    vb.enqueue("29-11-2022");
    vb.enqueue("fg-6545");
    vb.enqueue("654657");
    vb.enqueue("3");
    light_duty.push_front(vb);

    VehicleQueue mn;
    mn.enqueue("29-11-2022");
    mn.enqueue("er-543566");
    mn.enqueue("345643");
    mn.enqueue("1");
    light_duty.push_front(mn);

    VehicleQueue ty;
    ty.enqueue("31.5.2021");
    ty.enqueue("og-54552");
    ty.enqueue("554455256");
    ty.enqueue("2");
    light_duty.push_front(ty);

    cout<<"!!   LIGHT DUTY VEHICLE -->>"<<endl;
    cout<< light_duty.empty()<<endl;

    string search_light="og-54552";
    for (it = light_duty.begin(); it != light_duty.end(); it++)
    {
        string car_num = it->getCar_number();
        it->printout();

        if(car_num==search_light){
            cout<<"CAR HAS BEEN MATCHED"<<endl;
            it->search_info();
        }
    }
    cout<<"NUMBER_OF_HEAVY_DUTY_VEHICLE  : "<<heavy_duty.size()<<endl;
    cout<<"NUMBER_OF_MEDIUM_DUTY_VEHICLE  :"<<medium_duty.size()<<endl;
    cout<< "NUMBER_OF_LIGHT_DUTY_VEHICLE  : "<<light_duty.size()<<endl;

    int heavy_toll=800;
    int medium_toll=500;
    int light_toll=300;

    int count_counter1=0;
    int count_counter2=0;
    int count_counter3=0;
    int counter1_collection=0;
    int counter2_collection=0;
    int counter3_collection=0;

    for (it=heavy_duty.begin();it !=heavy_duty.end();it++){
       string counter_num=it->getCounter_number();
       if(counter_num=="1"){
            count_counter1++;
            counter1_collection+=heavy_toll;
       }
       else if(counter_num=="2"){
            count_counter2++;
            counter2_collection+=heavy_toll;

       }
       else if(counter_num=="3"){
            count_counter3++;
            counter3_collection+=heavy_toll;
       }
       else{
           cout<<"COUNTER NUMBER IS NOT MATCHED"<<endl;
       }

    }

    for(it=medium_duty.begin();it !=medium_duty.end();it++){
        string counter_num=it->getCounter_number();
        if(counter_num=="1"){
            count_counter1++;
            counter1_collection+=medium_toll;
        }
        else if(counter_num=="2"){
            count_counter2++;
            counter2_collection+=medium_toll;
        }
        else if(counter_num=="3"){
            count_counter3++;
            counter3_collection+=medium_toll;
        }
        else{
            cout<<"####COUNTER_NUMBER_ERROR####"<<endl;
        }

    }

    for(it=light_duty.begin();it !=light_duty.end();it++){
        string counter_num=it->getCounter_number();
        if(counter_num=="1"){
            count_counter1++;
            counter1_collection+=light_toll;
        }
        else if(counter_num=="2"){
            count_counter2++;
            counter2_collection+=light_toll;
        }
        else if(counter_num=="3"){
            count_counter3++;
            counter3_collection+=light_toll;
        }
        else{
            cout<<"####COUNTER_NUMBER_ERROR####"<<endl;
        }

    }

    cout<<"NUMBER_OF_VEHICLE IN COUNTER  :"<<count_counter1<<endl;
    cout<<"NUMBER_OF_VEHICLE IN COUNTER  2 :"<<count_counter2<<endl;
    cout<<"NUMBER_OF_VEHICLE IN COUNTER  3 :"<<count_counter3<<endl;

    cout<<"COLLECTION FROM COUNTER 1 : "<<counter1_collection<<endl;
    cout<<"COLLECTION FROM COUNTER 2 : "<<counter2_collection<<endl;
    cout<<"COLLECTION FROM COUNTER 3 : "<<counter3_collection<<endl;

    int total=counter1_collection+counter2_collection+counter3_collection;
    cout<<"ULTIMATE_TOTAL : "<<total<<endl;


    return 0;

}
