@interface CRComputeDeviceUtilities : NSObject

+ (id)allComputeDevices;
+ (id)computeDevices:(id)a0 ofTypes:(unsigned long long)a1;
+ (unsigned long long)computeDeviceTypeForOptions:(id)a0 mtlDevice:(id *)a1;
+ (long long)mlComputeUnitFromComputeDeviceType:(unsigned long long)a0;

@end
