@class NSString, NSMutableDictionary, NSMutableSet, NSNumber, NSObject;
@protocol _GCDeviceMatchingFilter, _GCPhysicalDeviceRegistry, OS_dispatch_queue, _GCDefaultDeviceManagerDelegate, _GCLogicalDeviceRegistry, NSSecureCoding, NSCopying, NSObject;

@interface _GCDefaultDeviceManager : NSObject <_GCPhysicalDeviceManager, _GCLogicalDeviceManager> {
    NSNumber *_probeScore;
    id<_GCDeviceMatchingFilter> _matchingFilter;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_claimedServices;
    NSMutableDictionary *_physicalDevices;
    NSMutableDictionary *_hiddenPhysicalDevices;
}

@property (weak) id<_GCPhysicalDeviceRegistry, _GCLogicalDeviceRegistry> deviceRegistry;
@property (weak, nonatomic) id<_GCDefaultDeviceManagerDelegate> delegate;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_onqueue_registerDefaultConfigurationForDevice:(id)a0 replaceExisting:(BOOL)a1;
- (void)claimHIDService:(id)a0;
- (void)_onqueue_registerPhysicalDevice:(id)a0 serviceInfo:(id)a1 checkForDuplicateDevice:(BOOL)a2;
- (id)matchHIDService:(id)a0;
- (id)makeDeviceWithConfiguration:(id)a0 dependencies:(id)a1;
- (void)relinquishHIDService:(id)a0;
- (void)_onqueue_relinquishHIDDevice:(id)a0;
- (void)_onqueue_checkAndHideDuplicateDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 matchingFilter:(id)a1 probeScore:(id)a2;
- (id)configurationIdentifierForDevice:(id)a0;
- (void)refreshPhysicalDeviceConfiguration:(id)a0;
- (BOOL)acceptFilterConnection:(id)a0 forHIDService:(id)a1;
- (BOOL)acceptDriverConnection:(id)a0 forHIDService:(id)a1;

@end
