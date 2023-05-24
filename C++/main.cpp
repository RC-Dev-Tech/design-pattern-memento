/*
 * Design Pattern - Memento 備忘錄模式
 * 
 * 在這個範例中，我們有三個主要類別：Originator、Memento和Caretaker。
 * Originator類別表示具有狀態的物件，它可以設置狀態、將狀態保存到Memento中，以及從Memento中恢復狀態。
 * Memento類別是儲存Originator狀態的容器。它擁有一個用於獲取狀態的方法。
 * Caretaker類別負責儲存和維護Memento對象，但不會修改或檢查其內容。
 * 
 * 在客戶端代碼中，我們創建了一個Originator對象和一個Caretaker對象。
 * 我們設置Originator的狀態為"State 1"，並將其狀態保存到Memento中。
 * 然後，我們修改Originator的狀態為"State 2"。
 */

#include <iostream>
#include <string>

// Memento
class Memento {
private:
    std::string state;

public:
    Memento(const std::string& state) : state(state) {}

    std::string GetState() const {
        return state;
    }
};

// Originator
class Originator {
private:
    std::string state;

public:
    void SetState(const std::string& state) {
        std::cout << "Setting state to: " << state << std::endl;
        this->state = state;
    }

    Memento* CreateMemento() {
        return new Memento(state);
    }

    void RestoreStateFromMemento(const Memento* memento) {
        state = memento->GetState();
        std::cout << "Restored state: " << state << std::endl;
    }
};

// Caretaker
class Caretaker {
private:
    Memento* memento;

public:
    Caretaker() : memento(nullptr) {}

    void SetMemento(Memento* memento) {
        this->memento = memento;
    }

    Memento* GetMemento() const {
        return memento;
    }

    ~Caretaker() {
        delete memento;
    }
};

// Client code
int main() {
    Originator originator;
    Caretaker caretaker;

    originator.SetState("State 1");
    caretaker.SetMemento(originator.CreateMemento());

    originator.SetState("State 2");

    originator.RestoreStateFromMemento(caretaker.GetMemento());

    return 0;
}
