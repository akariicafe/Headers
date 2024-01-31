@class UIWindow, NSObject;
@protocol OS_dispatch_queue;

@interface JFXOrientationMonitor : NSObject

@property (class, readonly, nonatomic) BOOL initialized;
@property (class, readonly, nonatomic) UIWindow *keyWindow;
@property (class, readonly, nonatomic) long long deviceOrientation;
@property (class, readonly, nonatomic) long long deviceInterfaceOrientation;
@property (class, readonly, nonatomic) long long interfaceOrientation;
@property (class, readonly, nonatomic) BOOL isDeviceInterfaceLandscape;

@property (readonly, nonatomic) UIWindow *keyWindow;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *darwinNotificationQ;
@property (nonatomic) int darwinNotificationToken;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long deviceOrientation_lock;
@property (nonatomic) long long deviceInterfaceOrientation;
@property (nonatomic) long long deviceInterfaceOrientation_lock;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long interfaceOrientation_lock;

+ (void)JFX_initLock;
+ (void)initializeWithKeyWindow:(id)a0;
+ (void)initializeWithViewController:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)JFX_UIApplicationDidChangeStatusBarOrientationNotification:(id)a0;
- (void)JFX_UIApplicationWillEnterForegroundNotification:(id)a0;
- (long long)JFX_deviceOrientation_darwinNotificationQ;
- (void)JFX_UIApplicationDidEnterBackgroundNotification:(id)a0;
- (void)JFX_initDarwinNotification;
- (id)initWithKeyWindow:(id)a0;

@end
