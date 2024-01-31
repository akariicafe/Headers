@class HIDEventSystemClient, ContinuityCaptureButtonPressTracker, NSObject;
@protocol OS_dispatch_queue;

@interface ContinuityCaptureRemoteUIPowerButtonStatus : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HIDEventSystemClient *_hidEventSystemClient;
    ContinuityCaptureButtonPressTracker *_hidButtonTracker;
}

@property (nonatomic) BOOL invalidated;
@property (readonly) BOOL powerButtonPressed;

+ (id)sharedInstance;
+ (void)invalidate;

- (id)initWithQueue:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setupPowerButtonMonitor;

@end
