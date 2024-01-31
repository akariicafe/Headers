@interface LKStartupSupport : NSObject

+ (BOOL)inUserSessionLoginUI;
+ (void)postStartupActions;
+ (void)postStartupTransitionActions;

@end
