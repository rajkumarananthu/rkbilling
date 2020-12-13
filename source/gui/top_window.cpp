#include "top_window.hpp"
#include <iostream>

cTopWindow::cTopWindow()
              : mOrderButton("New Order"),
                mStatsButton("Statistics"){
    set_border_width(10);
    set_default_size(600,600);

    mOrderButton.signal_clicked().connect(sigc::mem_fun(*this, &cTopWindow::on_button_clicked));
    mStatsButton.signal_clicked().connect(sigc::mem_fun(*this, &cTopWindow::on_button_clicked));

    mOrderButton.show();
    mStatsButton.show();

    mGrid.add(mOrderButton);
    mGrid.attach_next_to(mStatsButton, mOrderButton, Gtk::POS_BOTTOM);

    add(mGrid);
    show_all_children();
}

cTopWindow::~cTopWindow() {
}

void cTopWindow::on_button_clicked() {
    std::cout<<"Login button clicked\n";
}
