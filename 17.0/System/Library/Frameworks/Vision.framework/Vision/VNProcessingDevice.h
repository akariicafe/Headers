@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)allDevices;
+ (id)defaultANEDevice;
+ (id)deviceForMetalDevice:(id)a0;
+ (void)forcedCleanup;
+ (id)directANEDevice;
+ (id)defaultCPUDevice;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)defaultMetalDevice;
+ (void)_lockStaticObjectsAccessLock;
+ (id)defaultDevice;

- (unsigned long long)hash;
- (int)espressoEngine;
- (BOOL)targetsGPU;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)targetsCPU;
- (int)espressoStorageType;
- (id)computeDevice;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)metalDevice;
- (int)espressoDeviceID;
- (BOOL)targetsANE;

@end
