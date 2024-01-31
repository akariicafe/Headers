@interface PXPlacesMapOptionsController : NSObject <PXMapOptionsViewDelegate, PXMapOptionsChooseMapViewDelegate> {
    void /* unknown type, empty encoding */ mapModeController;
    void /* unknown type, empty encoding */ mapFetchResultController;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ currentChooseMapSheetController;
    void /* unknown type, empty encoding */ locationAuthorizationMonitor;
    void /* unknown type, empty encoding */ locationAuthorizationMonitorObservation;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) unsigned long long mapStyle;
@property (nonatomic, readonly) unsigned long long perspectiveButtonState;
@property (nonatomic) void /* unknown type, empty encoding */ enableUserTrackingButton;

- (void)chooseMapViewDidTapAttributionWithURL:(id)a0;
- (void)chooseMapViewDidTapCardForMapStyle:(unsigned long long)a0;
- (void)mapOptionsViewDidTapMapModeSettingsButton:(id)a0;
- (void)mapOptionsViewDidTapPerspective2DButton:(id)a0;
- (void)mapOptionsViewDidTapPerspective3DButton:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMapModeController:(id)a0 mapFetchResultController:(id)a1 presentingViewController:(id)a2 locationAuthorizationMonitor:(id)a3;

@end
