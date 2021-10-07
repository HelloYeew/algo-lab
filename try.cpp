    int n, k;
    cin >> n >> k;

    int ball = 0, same = 1, before = 0;
    int ballarray[100000] = { 0 };

    int while_loop = 0, list_track = 0;

    for (int i = 0; i < n; i++) {
        cin >> ballarray[i];
    }

    // print array
    for (int i = 0; i < n; i++) {
        cout << ballarray[i] << endl;
    }

    int left = 0;

    for (int i = 0; i < n; i++) {
        if (ballarray[i-1] == ballarray[i]) {
            same++;
        } else {
            same = 1;
        }

        if (same != k) {
            left++;
        } else {
            left -= k-1;
        }

        cout << ballarray[i] << " " << same << " " << left << endl;
    }
    