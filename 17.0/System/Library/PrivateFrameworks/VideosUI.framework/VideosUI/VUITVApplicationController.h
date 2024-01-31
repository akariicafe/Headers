@class NSDate, VUIAppContext, NSString, UINavigationController, UIWindow, NSDictionary, UIViewController, VUITVApplicationControllerContext, _VUICoreApplication;
@protocol UITraitEnvironment, VUITVApplicationControllerDelegate, VUITVAppRootViewController;

@interface VUITVApplicationController : NSObject <VUIAppContextDelegate> {
    _VUICoreApplication *_application;
    NSDictionary *_openURLResumeOptions;
    NSDictionary *_openURLReloadOptions;
    BOOL _suspended;
    BOOL _reloadInProgress;
    BOOL _reloadOnResume;
    double _reloadOnResumeMinInterval;
    NSDate *_reloadOnResumeBackgroundedDate;
    BOOL _doLaunchOpenURLHandling;
    NSDictionary *_launchOpenURLOptions;
    BOOL _popViewControllerOnBackground;
    UIViewController<VUITVAppRootViewController> *_appRootViewController;
    long long _interfaceOrientation;
}

@property (readonly, nonatomic) UIWindow *window;
@property (readonly, nonatomic) VUITVApplicationControllerContext *context;
@property (readonly, weak, nonatomic) id<VUITVApplicationControllerDelegate> delegate;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) VUIAppContext *appContext;
@property (weak, nonatomic) id<UITraitEnvironment> keyTraitEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_jsLaunchOptionsWithApplicationOptions:(id)a0;

- (void)reload;
- (id)init;
- (void)dealloc;
- (id)rootViewController;
- (void)registerForApplicationNotifications;
- (id)_rootViewController;
- (void)stop;
- (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)applicationWillSuspend:(id)a0;
- (void)_statusBarOrientationDidChange:(id)a0;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void)appContext:(id)a0 didStartWithOptions:(id)a1;
- (void)_launchApp;
- (void)appContext:(id)a0 didFailWithError:(id)a1;
- (void)appContext:(id)a0 didStopWithOptions:(id)a1;
- (void)appContext:(id)a0 evaluateAppJavaScriptInContext:(id)a1;
- (void)appContext:(id)a0 needsReloadWithUrgency:(unsigned long long)a1 options:(id)a2;
- (void)_applicationWillTerminateNotification:(id)a0;
- (void)appContext:(id)a0 scriptForURL:(id)a1 cachePolicy:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)_currentNavigationController;
- (BOOL)_hasReloadOnResumeMinIntervalPassed;
- (void)_openURLControllerDidDisplay:(id)a0;
- (void)_openURLControllerHandler:(BOOL)a0;
- (void)_openURLOnAppLaunchControllerDidDisplay:(id)a0;
- (void)_reloadControllerDidDisplay:(id)a0;
- (BOOL)_shouldReloadOnResume;
- (id)appRootViewController;
- (void)applicationDidResume:(id)a0;
- (void)evaluateInJavaScriptContext:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 window:(id)a1 delegate:(id)a2;
- (BOOL)openURL:(id)a0 options:(id)a1;

@end
