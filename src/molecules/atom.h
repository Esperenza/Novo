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
  double get_Xaxis(){return coordinates[0];}
  double get_Yaxis(){return coordinates[1];}
  double get_Zaxis(){return coordinates[2];}

void translate(double x, double y, double z); // give in the coordinates to translate the atom
}

