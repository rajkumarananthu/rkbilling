#include "top_window.hpp"

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create();

    cTopWindow topWindow;

    app->run(topWindow);
    return 0;
}
