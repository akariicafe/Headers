@class NSObject;
@protocol OS_dispatch_queue;

@interface FPSupport_PowerStateSingleton : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQ;
}

+ (id)sharedFPSupportPowerStateSingleton;

- (id)init;
- (void)dealloc;
- (void)_didChangePowerState:(id)a0;
- (void)postNotification;

@end
