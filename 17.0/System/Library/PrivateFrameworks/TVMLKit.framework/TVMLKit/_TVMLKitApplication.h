@class UIWindow, TVApplicationControllerContext, NSDictionary, IKAppDataStorage, NSString, UIViewController;
@protocol UITraitEnvironment, TVAppRootViewController;

@interface _TVMLKitApplication : NSObject <_TVMLKitApplication>

@property (weak, nonatomic) TVApplicationControllerContext *launchContext;
@property (weak, nonatomic) IKAppDataStorage *localDataStorage;
@property (weak, nonatomic) UIViewController<TVAppRootViewController> *appRootViewController;
@property (weak, nonatomic) UIWindow *keyWindow;
@property (weak, nonatomic) id<UITraitEnvironment> keyTraitEnvironment;
@property (copy, nonatomic) NSDictionary *javaScriptLaunchOptions;
@property (nonatomic) BOOL headless;
@property (readonly, nonatomic) BOOL supportsPictureInPicturePlayback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activeDocument;
- (id)appIdentifier;
- (void).cxx_destruct;
- (id)vendorIdentifier;
- (id)initWithLaunchContext:(id)a0;
- (id)localStorage;
- (BOOL)appIsPrivileged;
- (id)appLaunchParams;
- (BOOL)appIsTrusted;
- (id)appJSCachePath;
- (id)appJSURL;
- (id)appLocalJSURL;
- (id)appTraitCollection;
- (id)bagBootURLKey;
- (id)offlineJSURL;
- (BOOL)shouldIgnoreJSValidation;
- (id)userDefaultsStorage;
- (id)vendorStorage;

@end
