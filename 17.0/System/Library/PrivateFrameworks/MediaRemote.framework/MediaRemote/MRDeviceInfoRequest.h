@class MRDeviceInfo;

@interface MRDeviceInfoRequest : NSObject

@property (class, readonly, nonatomic) MRDeviceInfo *localDeviceInfo;

+ (void)deviceInfoForUID:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
+ (void)deviceInfoForOrigin:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
+ (id)deviceInfoForOrigin:(id)a0;
+ (id)cachedDeviceInfoForOrigin:(id)a0;

@end
