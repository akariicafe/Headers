@protocol _GCPhysicalDevice;

@interface _GCFusedLogicalDevice : _GCDefaultLogicalDevice

@property (readonly, nonatomic) id<_GCPhysicalDevice> secondaryDevice;

- (id)init;
- (void).cxx_destruct;
- (id)_makeControllerGamepadEventSource;
- (id)initWithPrimaryPhysicalDevice:(id)a0 secondaryPhysicalDevice:(id)a1 configuration:(id)a2 manager:(id)a3;
- (id)underlyingDevices;

@end
