#ifndef AIPROJECT_COMPUTER_H
#define AIPROJECT_COMPUTER_H


#include "game.h"
#include <vector>
#include <time.h>
#include <array>

enum specifier {CORNERS=0, MIDDLE_CORNERS};
enum status {WINS,BLOCK,NONE};

class computer : public game
{
protected:
    struct win_block_info{
        bool wins;
        bool blocks;
        int place;
    };
    struct corner_info{
        bool corners;
        bool mid_corners;
        std::vector<char*> empty_pos;
    };
    std::vector<std::array<char*,3>> list;
    std::vector<status> status_list;
    std::array<char*,4> corners;
    std::array<char*,4> middle_corners;
public:
    computer();
    void play();
    void comp_choice();
    win_block_info possible_wins_or_blocks();
    corner_info corner_placement();
    bool any_two_elements_equal(std::array<char*,3>);
    void test();
    std::vector<char*> empty_places_list(specifier);
    ~computer();

};

#endif //AIPROJECT_COMPUTER_H
