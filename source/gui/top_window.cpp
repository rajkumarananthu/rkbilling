#include "top_window.hpp"
#include <iostream>

cTopWindow::cTopWindow()
            : mLoginButton("Login") {
    set_border_width(10);

    mLoginButton.signal_clicked().connect(sigc::mem_fun(*this, &cTopWindow::on_button_clicked));

    add(mLoginButton);

    mLoginButton.show();
}

cTopWindow::~cTopWindow() {
}

void cTopWindow::on_button_clicked() {
    std::cout<<"Login button clicked\n";
}
