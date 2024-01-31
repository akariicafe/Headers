@class MTObserverStore, NSArray, MTTimerDuration, NSMutableArray, MTTimerManager;

@interface MTTimerDataSource : NSObject

@property (retain, nonatomic) MTTimerManager *timerManager;
@property (retain, nonatomic) MTObserverStore *observers;
@property (retain, nonatomic) NSMutableArray *timers;
@property (retain, nonatomic) NSMutableArray *activeTimers;
@property (retain, nonatomic) NSArray *defaultDurations;
@property (retain, nonatomic) NSArray *recentDurations;
@property (retain, nonatomic) NSArray *favoriteDurations;
@property (retain, nonatomic) MTTimerDuration *latestDuration;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } timerLock;

- (id)addTimer:(id)a0;
- (void)_registerForNotifications;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (id)removeTimer:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)initWithTimerManager:(id)a0;
- (void).cxx_destruct;
- (void)_iterateObserversWithBlock:(id /* block */)a0;
- (id)updateTimer:(id)a0;
- (void)_stateReset;
- (void)_withLock:(id /* block */)a0;
- (void)_handleTimerNotification:(id)a0 block:(id /* block */)a1;
- (id)reloadTimersNotifyingObservers:(BOOL)a0;
- (void)_handleTimerDurationNotification:(id)a0 block:(id /* block */)a1;
- (id)activeTimerAtRow:(unsigned long long)a0;
- (id)addTimer:(id)a0 reload:(BOOL)a1;
- (id)getDefaultDurations;
- (id)getFavoriteDurations;
- (id)getLatestDuration;
- (id)getRecentDurations;
- (unsigned long long)numberOfActiveTimers;
- (unsigned long long)numberOfTimers;
- (void)processFavoriteDurationsUpdated:(id)a0;
- (void)processLatestDurationsUpdatedWith:(id)a0;
- (void)processRecentDurationsUpdated:(id)a0;
- (void)reloadTimerDurations;
- (id)reloadTimers;
- (unsigned long long)rowForTimer:(id)a0;
- (unsigned long long)rowForTimerWithID:(id)a0;
- (id)timerAtRow:(unsigned long long)a0;
- (id)updateTimer:(id)a0 reload:(BOOL)a1;

@end
