@class NSArray, HDMCDeviceInfo;

@interface HDMCAccountDevicesInfo : NSObject <NSCopying> {
    NSArray *_healthAppDevicesInfo;
    HDMCDeviceInfo *_localDeviceInfo;
}

@property (readonly, nonatomic) BOOL hasHealthAppDevicesWithHigherAlgorithmVersions;
@property (readonly, nonatomic) BOOL localDeviceIsOnlyDeviceWithNotifications;
@property (readonly, nonatomic) BOOL shouldFireNotifications;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHealthAppDevicesInfo:(id)a0 localDeviceInfo:(id)a1;

@end
