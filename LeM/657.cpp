bool judgeCircle(string moves) {
    int r = 0, u = 0;
    for(int i = 0; i < moves.size(); ++i) {
        switch (moves[i]) {
            case 'R':
                r++;
                break;
            case 'L':
                r--;
                break;
            case 'U':
                u++;
                break;
            case 'D':
                u--;
                break;
            default:
                break;

        }
    }
    if(!r && !u) return true;
    else return false;
}
