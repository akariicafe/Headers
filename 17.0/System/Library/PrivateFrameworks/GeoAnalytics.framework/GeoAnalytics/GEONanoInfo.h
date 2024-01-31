@interface GEONanoInfo : NSObject

+ (id)sharedInfo;

- (id)deviceSystemBuildVersion;
- (id)deviceSystemVersion;
- (id)hasPairedDevice;
- (id)hasPairedDeviceIfAvailable;
- (id)deviceOsVersionIfAvailable;
- (id)deviceProductType;
- (id)deviceProductTypeIfAvailable;
- (id)deviceIsAltAcctIfAvailable;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)deviceIsAltAcct;
- (id)deviceSystemVersionIfAvailable;

@end
