@class NSString;

@interface STYDeviceInfo : NSObject

@property (class, readonly) unsigned long long bootVolumeType;
@property (class, readonly) NSString *hardwareModel;
@property (class, readonly) NSString *osBuild;
@property (class, readonly) BOOL isAppleInternal;
@property (class, readonly) BOOL isMemoryConstrained;

+ (unsigned long long)_determineBootVolumeType;
+ (id)_determineHardwareModel;

@end
