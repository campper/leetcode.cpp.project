#ifndef _PERSON_H_
#define _PERSON_H_

namespace algorithms
{
	class Person
	{
	private:
		char* name_;
		int id_;

	public:
		char* getName() const;

		void setName(char* name);

		Person(char* name);
		Person();
		~Person();
	};

}

#endif //_PERSON_H_