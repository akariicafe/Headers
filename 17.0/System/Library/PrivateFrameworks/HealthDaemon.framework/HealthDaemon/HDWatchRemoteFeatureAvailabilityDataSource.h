@class NSString, NRDevice;

@interface HDWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource> {
    NRDevice *_device;
}

@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)watchRegionInfo;
- (id)currentDeviceClass;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (id)watchProductType;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (id)watchModelNumber;
- (id)watchBuildType;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)watchOSBuildVersion;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (id)iOSBuildVersion;
- (id)watchRegion;

@end
