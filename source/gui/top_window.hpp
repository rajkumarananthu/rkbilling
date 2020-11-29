#ifndef RK_TOP_WINDOW_HPP
#define RK_TOP_WINDOW_HPP

#include <gtkmm.h>

class cTopWindow : public Gtk::Window {
    protected:
        void on_button_clicked();

        Gtk::Button mLoginButton;

    public:
        cTopWindow();
        virtual ~cTopWindow();
};

#endif // RK_TOP_WINDOW_HPP
