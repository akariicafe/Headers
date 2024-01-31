@class NSString, TVApplicationController, UIWindow;

@interface TVAppDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate> {
    BOOL _headLess;
}

@property (retain, nonatomic) TVApplicationController *appController;
@property (nonatomic) BOOL shouldTerminateOnEnterBackground;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)appController:(id)a0 didFailWithError:(id)a1;
- (id)_launchContext;
- (void)appController:(id)a0 evaluateAppJavaScriptInContext:(id)a1;
- (void)_controllerDidDisplay:(id)a0;
- (void)_presetDialogWithError:(long long)a0 appController:(id)a1;
- (void)_runScrollMoveTest:(id)a0;
- (void)_successTest:(id)a0 callback:(id)a1;
- (id)launchOptionsWithDefaultOptions:(id)a0;

@end
