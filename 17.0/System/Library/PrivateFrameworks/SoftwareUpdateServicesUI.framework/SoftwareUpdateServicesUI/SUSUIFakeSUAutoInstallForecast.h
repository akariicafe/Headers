@interface SUSUIFakeSUAutoInstallForecast : SUAutoInstallForecast {
    double _now;
}

- (double)_now;
- (id)unlockStartDate;
- (id)firstUnlock;
- (long long)scheduleType;
- (id)suEndDate;
- (id)suStartDate;
- (id)unlockEndDate;

@end
