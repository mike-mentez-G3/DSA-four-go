
        if (current == nullptr) {
            std::cout << "Position out of bounds. Adding to the end." << std::endl;
            delete newSong;
            insertSong(title, size());
            return;
        }

        newSong->next = current->next;
        current->next = newSong;
    }

    void deleteSong(int position) {
        if (head == nullptr) return;

        Song* temp = head;

        if (position == 0) {
            head = head->next;
            delete temp;
            return;
        }