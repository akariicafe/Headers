@class HMDDevice;

@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement

@property (readonly) HMDDevice *device;

- (id)description;
- (void).cxx_destruct;
- (id)initWithOutputDevice:(id)a0 device:(id)a1;

@end
