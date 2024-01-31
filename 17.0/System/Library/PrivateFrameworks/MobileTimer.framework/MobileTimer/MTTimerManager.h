@class NSString, MTXPCConnectionProvider, MTMetrics, NSNotificationCenter, MTTimerManagerExportedObject, MTTimerCache;
@protocol MTTimerManagerIntentSupport;

@interface MTTimerManager : NSObject <MTTimerManagerIntentSupport, MTTimerManagerProviding, MTUserDefaultNotificationObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MTTimerManagerIntentSupport> timerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MTTimerManagerExportedObject *exportedObject;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) MTTimerCache *cache;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id notificationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)warmUp;
+ (double)defaultDuration;
+ (void)setDefaultDuration:(double)a0;

- (id)nextTimer;
- (id)addTimer:(id)a0;
- (id)timers;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (id)stopCurrentTimer;
- (void)reconnect;
- (void)checkIn;
- (id)removeRecentDuration:(id)a0;
- (id)init;
- (id)currentTimer;
- (void)dealloc;
- (id)removeTimer:(id)a0;
- (id)nextTimersForDate:(id)a0 maxCount:(unsigned long long)a1;
- (BOOL)resumeCurrentTimerSync;
- (id)timersSync;
- (id)addFavoriteDuration:(id)a0;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)getCurrentTimerSync;
- (id)_validateCanStartTimer:(id)a0;
- (BOOL)_updateCurrentTimerWithStateSync:(unsigned long long)a0;
- (id)_updateCurrentTimerWithState:(unsigned long long)a0;
- (id)latestDuration;
- (id)favoriteDurations;
- (id)defaultDurations;
- (id)getQueryDurations:(id /* block */)a0 withFuture:(id)a1;
- (BOOL)pauseCurrentTimerSync;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (void).cxx_destruct;
- (void)_getCachedTimersWithFuture:(id)a0 finishBlock:(id /* block */)a1;
- (id)saveLatestDuration:(id)a0;
- (id)startCurrentTimerWithDuration:(double)a0;
- (id)resumeCurrentTimer;
- (id)repeatTimerWithIdentifier:(id)a0;
- (id)removeFavoriteDuration:(id)a0;
- (BOOL)stopCurrentTimerSync;
- (id)initWithMetrics:(id)a0;
- (id)pauseCurrentTimer;
- (id)updateTimer:(id)a0;
- (void)loadAllDurationsWithCompletion:(id /* block */)a0;
- (id)addRecentDuration:(id)a0;
- (id)_updateTimer:(id)a0 doSynchronous:(BOOL)a1;
- (BOOL)startCurrentTimerWithDurationSync:(double)a0;
- (id)_runningTimerFromCurrentTimer:(id)a0 withDuration:(double)a1;
- (id)dismissTimerWithIdentifier:(id)a0;
- (id)recentDurations;

@end
