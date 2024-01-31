@class MTAlarmManager;

@interface SBScheduledAlarmObserver : NSObject {
    MTAlarmManager *_alarmManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)_updateAlarmStatusBarItem;
- (void)_nextAlarmChanged:(id)a0;
- (void).cxx_destruct;

@end
