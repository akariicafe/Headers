@class AVOutputDeviceDiscoverySession, NSNotificationCenter, NSObject, IRAVOutputDeviceProvider;
@protocol OS_dispatch_queue;

@interface IRAVOutputDeviceDiscoverySessionController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AVOutputDeviceDiscoverySession *_session;
    NSNotificationCenter *_notificationCenter;
}

@property (readonly, weak, nonatomic) IRAVOutputDeviceProvider *avOutputDeviceProvider;

- (void)dealloc;
- (void)stopDetailedDiscovery;
- (void).cxx_destruct;
- (void)startDetailedDiscovery;
- (id)initWithAVOutputDeviceProvider:(id)a0;
- (void)_didUpdateAVOutputDevices:(id)a0;
- (void)registerForAvailableOutputDevicesNotification;
- (void)unregisterForAvailableOutputDevicesNotification;

@end
