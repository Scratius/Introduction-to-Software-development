class Time {
private:
    int hours;
    int minutes;
    int seconds;
 
public:
    Time::Time(int h, int m, int s) {
        if (s < 0 || s > 59) {
            // обрабатываем ошибочные секунды
        }
        if (m < 0 || m > 59) {
            // обрабатываем ошибочные минуты
        }
        if (h < 0 || h > 23) {
            // обрабатываем ошибочные часы
        }
        hours = h;
        minutes = m;
        seconds = s;
    }
     
    int Time::GetHours() const {
        return hours;
    }
     
    int Time::GetMinutes() const {
        return minutes;
    }
     
    int Time::GetSeconds() const {
        return seconds;
    }
};
