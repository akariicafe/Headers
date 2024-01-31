@protocol MKSystemControllerOpenURLDelegate;

@interface MKSystemController : NSObject

@property (weak, nonatomic) id<MKSystemControllerOpenURLDelegate> openURLDelegate;

+ (id)sharedInstance;

- (double)screenScale;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)reduceMotionEnabled;
- (BOOL)isWifiEnabled;
- (BOOL)isInternalInstall;
- (int)userInterfaceIdiom;
- (BOOL)shouldCaptureMapViewGestureAnalytics;
- (BOOL)supportsPitchAPI;
- (void)openURL:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)_defaultOpenURLOptions;
- (BOOL)isHiDPI;
- (BOOL)requiresRTT;
- (void)openURL:(id)a0 fromScene:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)overrideBlurStyle;
- (BOOL)supports3DMaps;
- (BOOL)_isInSpotlight;
- (struct CGSize { double x0; double x1; })screenSize;
- (BOOL)isPhone6PlusOrLarger;
- (void)openUserActivity:(id)a0 withApplicationRecord:(id)a1 requireOptionKeyPromptUnlockDevice:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)placeDialRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsAlwaysOnCompass;
- (BOOL)isDevicePluggedIn;
- (BOOL)_shouldUseLaunchServices;
- (BOOL)supports3DImagery;
- (BOOL)_isRunningInLockScreen;
- (BOOL)openURL:(id)a0;

@end
