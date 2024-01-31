@class MLNeuralEngineComputeDevice, NSArray, NSString;

@interface MLNeuralEngineComputeDeviceRegistry : NSObject <MLComputeDeviceRegistryProtocol>

@property (readonly, nonatomic) MLNeuralEngineComputeDevice *neuralEngineDevice;
@property (readonly, copy, nonatomic) NSArray *registeredComputeDevices;
@property (readonly, copy, nonatomic) NSArray *registeredAndAccessibleComputeDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)initWithNeuralEngineDevice:(id)a0;

@end
