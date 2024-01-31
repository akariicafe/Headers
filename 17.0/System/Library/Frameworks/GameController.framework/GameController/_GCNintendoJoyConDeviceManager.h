@class NSString, NSMutableDictionary, NSMutableSet, _GCNintendoJoyConDevice, NSObject;
@protocol _GCPhysicalDeviceRegistry, NSSecureCoding, _GCLogicalDeviceRegistry, NSCopying, NSObject, OS_dispatch_queue;

@interface _GCNintendoJoyConDeviceManager : NSObject <_GCPhysicalDeviceManager, _GCLogicalDeviceManager> {
    NSObject<OS_dispatch_queue> *_queue;
    id<_GCPhysicalDeviceRegistry, _GCLogicalDeviceRegistry> _deviceRegistry;
    NSMutableSet *_claimedServices;
    NSMutableDictionary *_pendingDevices;
    NSMutableDictionary *_physicalDevices;
    _GCNintendoJoyConDevice *_pendingJoyCon;
    NSMutableSet *_fusionGestureDevices;
}

@property (weak) id<_GCPhysicalDeviceRegistry> deviceRegistry;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)claimHIDService:(id)a0;
- (id)matchHIDService:(id)a0;
- (void)_onqueue_registerDefaultConfigurationForJoyConDevice:(id)a0;
- (id)makeDeviceWithConfiguration:(id)a0 dependencies:(id)a1;
- (void)relinquishHIDService:(id)a0;
- (void).cxx_destruct;
- (void)activateLogicalDevice:(id)a0;
- (void)_onqueue_registerFusionConfigurationWithLeftDevice:(id)a0 rightDevice:(id)a1;
- (void)device:(id)a0 fusionGestureActive:(BOOL)a1;
- (void)_onqueue_tryRegisteringFusionConfigurationWithDevice:(id)a0;
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)a0;
- (BOOL)acceptFilterConnection:(id)a0 forHIDService:(id)a1;
- (void)_onqueue_relinquishHIDService:(id)a0;
- (void)deactivateLogicalDevice:(id)a0;
- (BOOL)acceptDriverConnection:(id)a0 forHIDService:(id)a1;
- (void)_onqueue_registerDefaultConfigurationsForDevice:(id)a0;

@end
