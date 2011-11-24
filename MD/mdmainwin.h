#ifndef MDMAINWIN_H
#define MDMAINWIN_H

// Own includes
#include "mdsystem.h"

// Qt includes
#include <QMainWindow>

namespace Ui {
    class mdmainwin;
}

class mdmainwin : public QMainWindow
{
    Q_OBJECT

public:
    // Constructor and destructor
    explicit mdmainwin(QWidget *parent = 0);
    ~mdmainwin();

private slots:

    void on_start_simulation_pb_clicked();
    void closeEvent(QCloseEvent *event);


private:
    // Static functions
    static void process_events();
    static void write_to_text_browser(string output);
    // Private variables
    mdsystem simulation;

private:
    Ui::mdmainwin *ui;

};

#endif // MDMAINWIN_H
