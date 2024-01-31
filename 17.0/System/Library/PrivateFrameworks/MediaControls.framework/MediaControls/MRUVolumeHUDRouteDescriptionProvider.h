@class NSString, MRUOutputDeviceAsset;
@protocol MRUVolumeHUDRouteDescriptionProviderDelegate;

@interface MRUVolumeHUDRouteDescriptionProvider : NSObject <MRUSystemOutputDeviceRouteControllerObserver>

@property (retain, nonatomic) MRUOutputDeviceAsset *outputDeviceAsset;
@property (retain, nonatomic) MRUOutputDeviceAsset *overrideOutputDeviceAsset;
@property (weak, nonatomic) id<MRUVolumeHUDRouteDescriptionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)packageStateForVolumeValue:(float)a0;
- (void).cxx_destruct;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)resetOverridePackageDescription;
- (void)cycleOverridePackageDescriptions;
- (void)updateOutputDeviceAsset;

@end
