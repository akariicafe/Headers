@class NSString, NSObject;
@protocol NSSecureCoding, _GCDeviceRegistry, OS_os_log, NSCopying, NSObject, OS_dispatch_queue;

@interface _GCLogitechRacingWheelDeviceManager : NSObject <_GCDeviceManager> {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _ioG923USBDeviceIterator;
    unsigned int _ioG923HIDDeviceIterator;
    unsigned int _ioG920USBDeviceIterator;
    unsigned int _ioG29PS4HIDDeviceIterator;
    unsigned int _ioG29PS3HIDDeviceIterator;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (weak) id<_GCDeviceRegistry> deviceRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
