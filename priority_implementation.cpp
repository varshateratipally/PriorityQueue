#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
static int arrival_count=0;
static int process_id=3000;
struct pcb
{
	int process_id;
	int process_priority;
        int burst_time;
	int wait_time;
	int turnaround_time;
        
	void set_process_id()
	{
		process_id=process_id++;
	}
	void print_process_id()
	{
		cout<<"Process ID :\t"<<process_id<<"\n";
		cout<<"burst_time: \t"<<burst_time<<"\n";
	
	}
	
	void set_bursttime()
	{
		burst_time=1+(rand()%10);
	}
	void set_turnaroundtime()
	{
		turnaround_time=burst_time+wait_time;
	}
	void set_process_priority()
	{
		process_priority=1+(rand()%5);
	}

};

int main()
{
	pcb p[10];
	int sum=0,sum1=0;
	for(int i=0;i<10;i++)
	{
		p[i];
		p[i].set_bursttime();
		p[i].set_process_priority();
		p[i].set_process_id();
	}
	for(int j=9;j>0;j--)
	{
		for(int k=9;k>=0;k--)
		{
			if(p[k].process_priority<p[k-1].process_priority)
			{
				pcb temp;
				temp=p[k-1];
				p[k-1]=p[k];
				p[k]=temp;
			}
		}
	}
	for(int j=0;j<10;j++)
	{
		if(j==0)
		p[j].wait_time=0;
		else
		{
			p[j].wait_time=(p[j-1].burst_time+p[j-1].wait_time);
		}
		cout<<"process with process_id ["<<p[j].process_id<<"] running"<<endl;		
		cout<<"process has bursttime(";
		cout<<p[j].burst_time<<") and waittime("<<p[j].wait_time;
		cout<<")"<<endl;
		cout<<"process_priority is:"<<p[j].process_priority<<endl;
		for(int k=p[j].burst_time;k>0;k--)
		{
                        sleep(1);
			cout<<k<<"\t"<<"\n";
			
		}

		p[j].set_turnaroundtime();	
		cout<<endl<<"turn around time is:"<<p[j].turnaround_time;
		cout<<endl<<"process with process_id ["<<p[j].process_id<<"] completed"<<endl<<endl;
		sum+=p[j].wait_time;
		sum1+=p[j].turnaround_time;
	}
	cout<<"average waittime="<<(sum/10)<<endl;
	cout<<"AVERAGE turnaroundtime:"<<(sum1/10)<<endl;
}
