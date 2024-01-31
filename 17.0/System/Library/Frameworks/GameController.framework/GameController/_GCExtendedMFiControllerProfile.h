@class NSString;
@protocol _GCPhysicalDeviceManager;

@interface _GCExtendedMFiControllerProfile : NSObject <_GCControllerProfile>

@property (class, readonly) id<_GCPhysicalDeviceManager> deviceManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)physicalDeviceUsesACHomeForMenu:(id)a0;
+ (void)deviceManager:(id)a0 willPublishPhysicalDevice:(id)a1;
+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)a0;
+ (id)logicalDeviceControllerProductCategory:(id)a0;
+ (void)determineCapabilitiesWithServiceInfo:(id)a0 initInfo:(struct { struct { id x0; BOOL x1; BOOL x2; union { struct { int x0; BOOL x1; float x2; long long x3; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; id x8; id x9; } x0[16]; BOOL x1; BOOL x2; } *)a1;
+ (void)populateInitInfo:(struct { struct { id x0; BOOL x1; BOOL x2; union { struct { int x0; BOOL x1; float x2; long long x3; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; id x8; id x9; } x0[16]; BOOL x1; BOOL x2; } *)a0 forLogicalDevice:(id)a1;
+ (id)logicalDevice:(id)a0 makeControllerInputDescriptionWithIdentifier:(id)a1 bindings:(id)a2;
+ (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileWithIdentifier:(id)a1;
+ (void)deviceManager:(id)a0 prepareLogicalDevice:(id)a1;
+ (void)physicalDevice:(id)a0 setIndicatedPlayerIndex:(long long)a1;


@end
