@interface GCFrameworkInitialization : NSObject

+ (void)enableKeyboardAndMouseSupportServerSide;
+ (id)initQueue;
+ (void)enableControllerSupportWithReason:(long long)a0;
+ (void)initializeFramework;
+ (id)initOperationQueue;
+ (void)enableMouseSupportWithReason:(long long)a0;
+ (void)enableKeyboardSupportWithReason:(long long)a0;
+ (void)controllerManagerDidOpen;
+ (void)listenForObservers;

@end
