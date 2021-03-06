#include "dialog.hpp"
#include "dialog_data.hpp"
#include "dialog_decoder.hpp"

namespace elona
{

void dialog_start(const std::string& id)
{
    if (auto the_dialog = DialogDecoder().decode(id))
    {
        the_dialog->show();
    }
}

} // namespace elona
