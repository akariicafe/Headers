@class NSString, NSArray, MRUVolumeHUDRouteDescriptionProvider, UIImageSymbolConfiguration;

@interface SBElasticVolumeViewController : SBElasticValueViewController <MRUVolumeHUDRouteDescriptionProviderDelegate> {
    BOOL _mediaProvidedRouteDisplayInfoNeedsUpdate;
    UIImageSymbolConfiguration *_routeImageSymbolConfiguration;
    MRUVolumeHUDRouteDescriptionProvider *_routeDescriptionProvider;
    NSArray *_physicalButtonSceneTargets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)log;
- (id)physicalButtonSceneTargets;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id)dataSource;
- (void)volumeHUDRouteDescriptionProvider:(id)a0 didChangeOutputDeviceAsset:(id)a1;
- (void)_debugHandleNextRoute;
- (void)_debugHandleResetRoute;
- (id)createSliderView;
- (double)interactiveValueUpdateDiscontinuityInterval;
- (unsigned long long)layoutAxisForInterfaceOrientation:(long long)a0;
- (id)sliderAccessibilityIdentifier;
- (BOOL)updateActiveRouteDisplay:(out id *)a0;

@end
