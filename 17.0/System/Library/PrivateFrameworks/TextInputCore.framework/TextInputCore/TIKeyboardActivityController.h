@class TIKeyboardApplicationStateMonitor, NSString, NSTimer, NSHashTable, NSObject;
@protocol OS_os_transaction, OS_dispatch_source;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling, TIKeyboardApplicationStateResponses> {
    BOOL _hadRecentActivity;
    BOOL _hasBackgroundActivity;
    unsigned long long _activityState;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    long long _inactiveMemoryPressureCount;
}

@property (nonatomic) BOOL isDirty;
@property (retain, nonatomic) NSObject<OS_os_transaction> *isDirtyTransaction;
@property (retain, nonatomic) NSTimer *inactivityTimer;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) TIKeyboardApplicationStateMonitor *appMonitor;
@property (readonly, nonatomic) unsigned long long activityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (void)setSharedController:(id)a0;
+ (id)singletonInstance;
+ (double)keyboardIdleTimeoutInterval;
+ (void)setKeyboardIdleTimeoutInterval:(double)a0;
+ (double)defaultKeyboardIdleTimeoutInterval;

- (void)generateMemgraphsIfNeeded;
- (void)addActivityObserver:(id)a0;
- (id)init;
- (void)dealloc;
- (void)keyboardAssertionsDidChange;
- (BOOL)atexitHandler;
- (void)setKeyboardDirtyIfNecessaryWithReason:(id)a0;
- (void)backgroundActivityAssertionsDidChange;
- (void)handleMemoryStatusPressure:(unsigned long long)a0;
- (void)removeActivityObserver:(id)a0;
- (id)createMemoryPressureSource;
- (void)notifyMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)notifyTransitionWithContext:(id)a0;
- (void)releaseInputManagers;
- (void)updateActivityState;
- (void).cxx_destruct;
- (BOOL)shouldBecomeClean;
- (BOOL)shouldBecomeDirty;
- (void)touchInactivityTimer;
- (BOOL)canGoEarlyClean;
- (void)inactivityTimerFired:(id)a0;
- (void)setKeyboardCleanIfNecessary;

@end
