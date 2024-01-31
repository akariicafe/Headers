@interface VNCPUProcessingDevice : VNProcessingDevice

- (int)espressoEngine;
- (BOOL)targetsCPU;
- (int)espressoStorageType;
- (id)computeDevice;
- (id)metalDevice;

@end
