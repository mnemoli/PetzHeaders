#pragma once
class istream;
class ostream;

class DataValue;
class Allele;


class __declspec(dllimport) Chromosome {
public:
	pfvector<Allele> alleles;
	Chromosome(Chromosome const&);
	Chromosome(int);
	Chromosome();
	virtual ~Chromosome();
	static Chromosome* CrossoverAndMutate(Chromosome const&, Chromosome const&);
	static DataValue MapToPhenotype(Chromosome const&, Chromosome const&, int);
	void Print();
	void StreamOut(ostream&);
	void StreamIn(istream&);
};

class __declspec(dllimport) SpriteChromosome : public Chromosome {
public:
	SpriteChromosome();
	SpriteChromosome(SpriteChromosome const&);
	Chromosome* Clone();
};

class __declspec(dllimport) LooksChromosome : public Chromosome {
public:
	LooksChromosome();
	LooksChromosome(LooksChromosome const&);
	Chromosome* Clone();
};

class __declspec(dllimport) BehaviorChromosome : public Chromosome {
public:
	BehaviorChromosome();
	BehaviorChromosome(BehaviorChromosome const&);
	Chromosome* Clone();
};

class __declspec(dllimport) Genome {
public:
	pfvector<Chromosome*> gamete1;
	pfvector<Chromosome*> gamete2;
	void GetGamete(pfvector<Chromosome>&) const;
	~Genome();
	void Print();
	void StreamOut(ostream&);
	void StreamIn(istream&);
};

class __declspec(dllimport) Allele {
public:
	int centervalue;
	int range;
	int weight;
	unsigned char weighttype;
	unsigned char combinetype;
	unsigned char isbitmask;
	Allele();
	Allele(bool, int, unsigned char);
	Allele(int, int, int, unsigned char, unsigned char);
	Allele(Allele const&);
	virtual Allele* Clone();
	virtual int Center();
	Allele& operator=(Allele const&);
	bool operator==(Allele const&) const;
	virtual void StreamOut(ostream&);
	virtual void StreamIn(istream&);
	void DontCare();
	void AddState(int);
	bool HasState(int);
	int PickState();
	static DataValue Combine(Allele const&, Allele const&);
	int GetAdjustedWeight(int);
	virtual ~Allele();
};

class __declspec(dllimport) DataValue: public Allele {
public:
	int offset;
	int centeringrate;
	virtual ~DataValue();
	virtual int Center() override;
	virtual void StreamOut(ostream&) override;
	virtual void StreamIn(istream&) override;
	virtual void Print() const;
	DataValue& operator=(DataValue const&);
	bool operator==(DataValue const&) const;
	DataValue();
	DataValue(int, int);
	DataValue(bool);
	DataValue(DataValue const&);
	void Update();
	int Overlap(DataValue const&);

};