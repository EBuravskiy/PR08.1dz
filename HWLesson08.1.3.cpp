#include <iostream>
using namespace std;


class Weapon { 
public:
    virtual void UsingWeapon() = 0; 
protected:
    int cartridge = 0;
};

class Gun : public Weapon{
public:
    Gun() {
        this->cartridge = 1;
    }
    void UsingWeapon() override { 
        cout << "Using gun\n";
        for (int i = 0; i < this->cartridge; i++) {
            cout << "BANG!" << " ";
        }
        cout << endl;
    }
};

class SubMachineGun : public Gun{
public:
    SubMachineGun() {
        this->cartridge = 3;
    }
};

class MachineGun : public Gun {
public:
    MachineGun() {
        this->cartridge = 30;
    }
};

class Knife : public Weapon {
public:
    void UsingWeapon()override {
        cout << "Using knife\n";
        cout << "Vjuuuh!!!" << endl;
    }
};

class Bazooka : public Weapon {
public:
    void UsingWeapon()override {
        cout << "Using Bazooka\n";
        cout << "BADABOOM!!!" << endl;
    }
};

class Explosives : public Weapon {
public:
    void UsingWeapon()override {
        cout << "Start ticker explosives: \n";
        for (int i = 5; i > 0; i--) {
            cout << i << endl;
        }
        cout << "BADABOOOOOOOOM!!!\n";
    }
};

class Player {
public:
    void UsingWeapon(Weapon* weapon) { 
        cout << "Player using weapon: " << endl;
        weapon->UsingWeapon(); 
        cout << "////////////////////////////////////\n";
    }
};
int main()
{
    Player player;
    Knife Knife;
    player.UsingWeapon(&Knife);
    Bazooka Bazooka;
    player.UsingWeapon(&Bazooka);
    MachineGun Kalashnikov;
    player.UsingWeapon(&Kalashnikov);
    SubMachineGun Uzi;
    player.UsingWeapon(&Uzi);
    Explosives dynamit;
    player.UsingWeapon(&dynamit);
    return 0;
}