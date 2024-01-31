@class NSError, PMDeviceSharingAvailability;

@interface PMDeviceProvider : NSObject

+ (void)fetchListsOfSharingDevicesSeparatedByAvailability:(void (^)(PMDeviceSharingAvailability *, NSError *))a0;

- (id)init;

@end
