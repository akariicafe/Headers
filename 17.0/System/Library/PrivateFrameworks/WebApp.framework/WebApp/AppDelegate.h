@class NSString, UIWindow;

@interface AppDelegate : NSObject <UIApplicationDelegate>

@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationDidFinishLaunching:(id)a0;

@end
