@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol _GCPhysicalDeviceRegistry, NSSecureCoding, NSCopying, NSObject, OS_dispatch_queue;

@interface _GCGenericDeviceManager : NSObject <_GCPhysicalDeviceManager> {
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_ioNotificationPort;
    NSObject<OS_dispatch_queue> *_ioNotificationQueue;
    unsigned int _ioHIDDeviceIterator;
    NSMutableSet *_claimedServices;
    NSMutableDictionary *_pendingDevices;
    NSMutableDictionary *_physicalDevices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<_GCPhysicalDeviceRegistry> deviceRegistry;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;

- (id)init;
- (void)dealloc;
- (void)claimHIDService:(id)a0;
- (id)matchHIDService:(id)a0;
- (void)relinquishHIDService:(id)a0;
- (id)serviceFor:(id)a0 client:(id)a1;
- (void).cxx_destruct;
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)a0;
- (BOOL)acceptFilterConnection:(id)a0 forHIDService:(id)a1;
- (BOOL)acceptDriverConnection:(id)a0 forHIDService:(id)a1;
- (void)_onioqueue_setupHIDMatching;

@end
