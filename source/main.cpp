#include "common.hpp"
#include "gui/top_window.hpp"


int main (int argc, char *argv[]) {

    auto app = Gtk::Application::create(argc, argv, "org.rkbilling.top");

    cTopWindow topWindow;

    return app->run(topWindow);
}
