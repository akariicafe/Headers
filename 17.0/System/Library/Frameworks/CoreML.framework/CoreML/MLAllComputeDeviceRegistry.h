@class NSArray, NSString;

@interface MLAllComputeDeviceRegistry : NSObject <MLComputeDeviceRegistryProtocol>

@property (readonly, copy, nonatomic) NSArray *deviceRegistries;
@property (readonly, copy, nonatomic) NSArray *registeredComputeDevices;
@property (readonly, copy, nonatomic) NSArray *registeredAndAccessibleComputeDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRegistry;
+ (id)registryWithDeviceRegisteries:(id)a0;

- (void).cxx_destruct;
- (id)initWithDeviceRegisteries:(id)a0;

@end
