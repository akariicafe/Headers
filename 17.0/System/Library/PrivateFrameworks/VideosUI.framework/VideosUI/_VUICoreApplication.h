@class UIWindow, NSString, NSDictionary, VUITVApplicationControllerContext;
@protocol UITraitEnvironment;

@interface _VUICoreApplication : NSObject <VUIApplication>

@property (readonly, weak, nonatomic) VUITVApplicationControllerContext *launchContext;
@property (copy, nonatomic) NSDictionary *javaScriptLaunchOptions;
@property (weak, nonatomic) UIWindow *keyWindow;
@property (weak, nonatomic) id<UITraitEnvironment> keyTraitEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appIdentifier;
- (void).cxx_destruct;
- (id)initWithLaunchContext:(id)a0;
- (id)appLaunchParams;
- (id)appJSURL;
- (id)appTraitCollection;
- (BOOL)shouldIgnoreJSValidation;
- (id)userDefaultsStorage;

@end
