@class HMDDeviceHandle, HMDDevice;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination

@property (copy, nonatomic) HMDDeviceHandle *preferredHandle;
@property (readonly, nonatomic) HMDDevice *device;

+ (id)shortDescription;

- (unsigned long long)hash;
- (id)shortDescription;
- (id)privateDescription;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithTarget:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithTarget:(id)a0 device:(id)a1;
- (id)remoteDestinationString;

@end
