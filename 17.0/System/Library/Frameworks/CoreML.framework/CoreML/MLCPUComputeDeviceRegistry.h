@class NSArray, NSString, MLCPUComputeDevice;

@interface MLCPUComputeDeviceRegistry : NSObject <MLComputeDeviceRegistryProtocol>

@property (readonly, nonatomic) MLCPUComputeDevice *cpuDevice;
@property (readonly, copy, nonatomic) NSArray *registeredComputeDevices;
@property (readonly, copy, nonatomic) NSArray *registeredAndAccessibleComputeDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)initWithCpuDevice:(id)a0;

@end
