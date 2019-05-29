#ifndef _ENEMY_H_
#define _ENEMY_H

#include <iostream>
#include <string>

class Enemy
{
private:
    int _hp;
    std::string _type;
public:
    Enemy();
    Enemy(Enemy const &src);
    virtual ~Enemy();
    Enemy &operator=(Enemy const &rhs);

    Enemy(int hp, std::string const & type);
    std::string const getType() const;
    int getHP() const;

    virtual void takeDamage(int);

};
#endif // !_ENEMY_H_