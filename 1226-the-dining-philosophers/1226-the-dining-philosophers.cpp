class DiningPhilosophers {
private:
    vector<mutex> forks;

public:
    DiningPhilosophers() : forks(5) {}
     /*yuvi sharma
              2420954
              R&Ai(5th sem)*/
    void wantsToEat(int philosopher,
                    function<void()> pickLeftFork,
                    function<void()> pickRightFork,
                    function<void()> eat,
                    function<void()> putLeftFork,
                    function<void()> putRightFork) {

        int left = philosopher;
        int right = (philosopher + 1) % 5;

        // Always lock the smaller fork first
        int first = min(left, right);
        int second = max(left, right);

        forks[first].lock();
        forks[second].lock();

        pickLeftFork();
        pickRightFork();

        eat();
          /*yuvi sharma
              2420954
              R&Ai(5th sem)*/
        putLeftFork();
        putRightFork();

        forks[second].unlock();
        forks[first].unlock();
    }
};