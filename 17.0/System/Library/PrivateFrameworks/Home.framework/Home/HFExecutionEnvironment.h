@class NSDate, NSHashTable;

@interface HFExecutionEnvironment : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSDate *appForegroundStartTime;
@property (readonly, nonatomic) unsigned long long runningState;
@property (readonly, nonatomic) long long hostProcess;
@property (nonatomic) BOOL macScreenIsLocked;

+ (id)sharedInstance;
+ (BOOL)isSpringBoard;
+ (BOOL)isSettings;
+ (BOOL)isWatchApp;
+ (BOOL)isHomeUIService;
+ (BOOL)isHomeApp;
+ (BOOL)isHomeControlService;
+ (BOOL)isHomeNotification;
+ (BOOL)isMacShortcuts;
+ (BOOL)isShortcuts;
+ (BOOL)isCarousel;
+ (BOOL)isHomeEnergyWidget;
+ (BOOL)isHomeRelatedProcess;
+ (BOOL)isHomeWidget;
+ (BOOL)isHomeWidgetInteractive;
+ (BOOL)isHomeWidgetRelatedProcess;
+ (id)stringForHFExecutionEnvironmentRunningState:(unsigned long long)a0;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_disablePreferencesCloudBackup;
- (void)_recordMetricsForAppRunningState;
- (void)dispatchMessageToObserversWithBlock:(id /* block */)a0;
- (void)executionEnvironmentDidBecomeActive;
- (void)executionEnvironmentDidEnterBackground;
- (void)executionEnvironmentWillEnterForeground;
- (void)executionEnvironmentWillResignActive;
- (void)setRunningState:(unsigned long long)a0;

@end
