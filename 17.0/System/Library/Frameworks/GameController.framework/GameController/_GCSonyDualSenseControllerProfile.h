@class NSString;
@protocol _GCPhysicalDeviceManager;

@interface _GCSonyDualSenseControllerProfile : NSObject <_GCControllerProfile>

@property (class, readonly) id<_GCPhysicalDeviceManager> deviceManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)physicalDevice:(id)a0 getLightWithReply:(id /* block */)a1;
+ (void)physicalDevice:(id)a0 getSensorsEnabledWithReply:(id /* block */)a1;
+ (BOOL)physicalDeviceSupportsMotion:(id)a0;
+ (void)deviceManager:(id)a0 willPublishPhysicalDevice:(id)a1;
+ (void)physicalDevice:(id)a0 setSensorsActive:(BOOL)a1;
+ (void)physicalDevice:(id)a0 setAdaptiveTriggersPayload:(id)a1 forIndex:(int)a2;
+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)a0;
+ (id)logicalDeviceControllerProductCategory:(id)a0;
+ (id)logicalDevice:(id)a0 makeControllerMotionWithIdentifier:(id)a1;
+ (id)physicalDeviceGetHapticCapabilities:(id)a0;
+ (id)logicalDeviceControllerDetailedProductCategory:(id)a0;
+ (void)physicalDevice:(id)a0 setLight:(id)a1;
+ (void)physicalDevice:(id)a0 getBatteryWithReply:(id /* block */)a1;
+ (void)physicalDevice:(id)a0 getAdaptiveTriggersStatusesWithReply:(id /* block */)a1;
+ (id)logicalDevice:(id)a0 makeControllerInputDescriptionWithIdentifier:(id)a1 bindings:(id)a2;
+ (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileWithIdentifier:(id)a1;
+ (void)deviceManager:(id)a0 prepareLogicalDevice:(id)a1;
+ (id)physicalDeviceGetHapticCapabilityGraph:(id)a0;
+ (void)physicalDevice:(id)a0 setIndicatedPlayerIndex:(long long)a1;


@end
