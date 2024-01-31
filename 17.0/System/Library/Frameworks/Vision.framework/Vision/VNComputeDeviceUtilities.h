@interface VNComputeDeviceUtilities : NSObject

+ (BOOL)computeDevice:(id)a0 isOneTypeOfTypes:(unsigned long long)a1;
+ (id)allCPUAndGPUComputeDevices;
+ (id)allCPUAndNeuralEngineComputeDevices;
+ (id)allCPUComputeDevices;
+ (id)allComputeDevices;
+ (id)allGPUAndNeuralEngineComputeDevices;
+ (id)allGPUComputeDevices;
+ (id)allNeuralEngineComputeDevices;
+ (id)computeDeviceForMetalDevice:(id)a0;
+ (id)computeDeviceOfComputeDevices:(id)a0 mostCompatibleWithComputeDevice:(id)a1 options:(unsigned long long)a2;
+ (unsigned long long)computeDeviceTypesForMLComputeUnits:(long long)a0;
+ (id)computeDevices:(id)a0 ofTypes:(unsigned long long)a1;
+ (id)computeDevices:(id)a0 passingTest:(id /* block */)a1;
+ (id)computeDevicesOfTypes:(unsigned long long)a0;
+ (id)computeDevicesPassingTest:(id /* block */)a0;
+ (id)espressoV1ModelComputeDevices;
+ (BOOL)isCPUComputeDevice:(id)a0;
+ (BOOL)isGPUComputeDevice:(id)a0;
+ (BOOL)isNeuralEngineComputeDevice:(id)a0;
+ (id)metalDeviceForComputeDevice:(id)a0;
+ (id)mostPerformantCPUComputeDevice;
+ (id)mostPerformantComputeDevice;
+ (id)mostPerformantComputeDeviceOfComputeDevices:(id)a0;
+ (id)mostPerformantGPUComputeDevice;
+ (id)mostPerformantNeuralEngineComputeDevice;
+ (long long)performanceScoreForComputeDevice:(id)a0;
+ (unsigned long long)typeOfComputeDevice:(id)a0;

@end
