#ifndef RK_TOP_WINDOW_HPP
#define RK_TOP_WINDOW_HPP

#include <gtkmm.h>

class cTopWindow : public Gtk::Window {
    protected:
        void on_button_clicked();

        // two text boxes, one - user id, two -password
        // Gtk::Button mLoginButton;
        Gtk::Button mOrderButton;
        Gtk::Button mStatsButton;
        Gtk::Grid mGrid;

    public:
        cTopWindow();
        virtual ~cTopWindow();
};

#endif // RK_TOP_WINDOW_HPP
