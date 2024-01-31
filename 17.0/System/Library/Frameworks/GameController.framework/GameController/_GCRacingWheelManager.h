@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _GCRacingWheelManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_deviceNotificationPort;
    struct __CFSet { } *_deviceNotificationIterators;
    struct __CFSet { } *_connectedWheelDeviceNotifications;
    NSMutableDictionary *_connectedWheels;
}

- (id)init;
- (void).cxx_destruct;

@end
