@class NSString, NRPairedDeviceRegistry;

@interface HKActiveWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource>

@property (retain, nonatomic) NRPairedDeviceRegistry *pairedDeviceRegistry;
@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)watchRegionInfo;
- (id)currentDeviceClass;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (id)watchProductType;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (id)watchModelNumber;
- (id)watchBuildType;
- (void).cxx_destruct;
- (id)watchOSBuildVersion;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (id)iOSBuildVersion;
- (id)watchRegion;
- (id)_activeWatch;
- (struct { long long x0; long long x1; long long x2; })_operatingSystemVersionForOSVersion:(unsigned int)a0;

@end
