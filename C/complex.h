struct Complex
{	
	private:
		float real;
		float img;
	public:
	
	void SetReal(float r)
	{
		real=r;
	}
	void SetImg(float i)
	{
		img=i;
	}
	float GetReal()
	{
		return real;
		
	}
	float GetImg()
	{
		return img;
	}
		
		void print()
		{
			cout<<"\n"<<real;
			if(img>0)
				cout<<"+j"<<img;
			if(img<0)
				cout<<"-J"<<(-1*img);
		}
};




