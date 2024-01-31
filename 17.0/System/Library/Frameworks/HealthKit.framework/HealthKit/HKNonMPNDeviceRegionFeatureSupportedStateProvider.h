@class NSString;

@interface HKNonMPNDeviceRegionFeatureSupportedStateProvider : NSObject <HKDeviceRegionFeatureSupportedStateProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)atrialFibrillationDetectionSupportedStateForCurrentDeviceRegion;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)a0;
+ (unsigned long long)electrocardiogramSupportedOnPhone:(id)a0 iOSVersionString:(id)a1;
+ (unsigned long long)electrocardiogramSupportedStateForCurrentDeviceRegion;
+ (unsigned long long)electrocardiogramSupportedStateForDeviceRegion:(id)a0;


@end
