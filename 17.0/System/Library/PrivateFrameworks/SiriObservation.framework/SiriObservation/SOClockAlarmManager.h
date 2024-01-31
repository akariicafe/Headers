@class MTAlarmManager, AFInstanceContext, NSMutableDictionary;

@interface SOClockAlarmManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
    MTAlarmManager *_mtAlarmManager;
}

+ (void)warmUp;

- (id)initWithInstanceContext:(id)a0;
- (id)removeAlarm:(id)a0;
- (id)alarms;
- (void)checkIn;
- (id)init;
- (id)addAlarm:(id)a0;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (id)updateAlarm:(id)a0;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (void)removeHandlerForEvent:(long long)a0;
- (void).cxx_destruct;
- (id)_registeredObservations;

@end
