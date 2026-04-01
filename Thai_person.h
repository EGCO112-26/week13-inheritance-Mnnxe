class Thai_person{
	private: 
	protected:	
		long nat_id;
	public: 
		Thai_person(long=0);
		void display_Thai();
 };

Thai_person::Thai_person(long nid){
	nat_id = nid;
	cout<<"NID:"<<nid<<endl;
}

void Thai_person::display_Thai(){
	cout<<"NID:"<<nat_id<<endl;
}