@class UIApplication;

@interface IMAppStateMonitor : NSObject

@property (retain, nonatomic) UIApplication *app;
@property (nonatomic) long long applicationState;
@property (nonatomic) double backgroundTimeRemaining;

+ (id)sharedInstance;

- (id)init;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationDidFinishLaunching;

@end
