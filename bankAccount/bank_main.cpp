//
// Created by abondar on 12.05.16.
//

#include "BankDB.h"

auto main() -> int {
    BankDB db;
    db.addAccount(BankAccount(100, "Nicholas Solter"));
    db.addAccount(BankAccount(200, "Scott Kleper"));

    try {
        auto acct = db.findAccount(100);
        cout << "Found account 100" << endl;
        acct.setClientName("Nicholas A Solter");
        auto acct2 = db.findAccount("Scott Kleper");
        cout << "Found account Scott Kleper" << endl;
        auto acct3 = db.findAccount(1000);

    } catch (const out_of_range &) {
        cout << "Unable to find account" << endl;
    }

    return 0;
}