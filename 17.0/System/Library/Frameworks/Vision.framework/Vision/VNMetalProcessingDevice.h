@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (unsigned long long)hash;
- (int)espressoEngine;
- (id)initWithMetalDevice:(id)a0;
- (BOOL)targetsGPU;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)espressoStorageType;
- (id)computeDevice;
- (id)metalDevice;
- (int)espressoDeviceID;

@end
