#include "common.hpp"
#include "gui/top_window.hpp"


int main (int argc, char *argv[]) {

    auto app = Gtk::Application::create(argc, argv, "org.rkbilling.top");

    cTopWindow topWindow;
    topWindow.set_default_size(1200,600);

    return app->run(topWindow);
}
