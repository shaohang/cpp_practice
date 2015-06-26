class CWin
{
	protected:
		char id;
		int width,height;
	public:
		CWin(char i, int w, int h):id(i),width(w),height(h)
		{}

		void show();
};
