#pragma once
#include "ui_menu.hpp"
#include "ui_menu_composite_character.hpp"

namespace elona
{
namespace ui
{

class ui_menu_materials : public ui_menu<ui_menu_composite_character_result>
{
public:
    ui_menu_materials()
    {
    }

protected:
    virtual bool init();
    virtual void update();
    virtual void draw();
    virtual optional<ui_menu_materials::result_type> on_key(
        const std::string& key);
};

} // namespace ui
} // namespace elona