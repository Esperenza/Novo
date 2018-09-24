// distances are all measured in armstrongs

class atom
{
private:
  string atomkind; // which kind of atom it is for example C = carbon. Atoms are always the abbreviations in the periodic system.
  double* coordinates; // xyz in that order.
public:
  atom(); // creator
  ~atom(); // destructor
void set_coordinates();  // sets the coordinates
void set_atomkind(); // sets the atom kind

void translate atom(); // 
}

