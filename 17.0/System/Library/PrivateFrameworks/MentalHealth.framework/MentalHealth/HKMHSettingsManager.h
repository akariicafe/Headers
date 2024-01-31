@class NSArray, NSUserDefaults, HKObserverSet;

@interface HKMHSettingsManager : NSObject {
    HKObserverSet *_observers;
    NSArray *_allSettingsToObserve;
}

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic) BOOL middayNotificationsEnabled;
@property (nonatomic) BOOL endOfDayNotificationsEnabled;
@property (retain, nonatomic) NSArray *customReminderSchedule;

- (id)initWithUserDefaults:(id)a0;
- (void)addObserver:(id)a0 queue:(id)a1;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_startObservingDefaults;
- (void)_stopObservingAllDefaults;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setReminders:(BOOL)a0;
- (void)_notificationSettingsDidUpdate;
- (void)_setTestDefaults:(id)a0;
- (BOOL)hasAnyStateOfMindReminderEnabled;
- (BOOL)hasEverEnabledAStateOfMindReminderNotification;

@end
