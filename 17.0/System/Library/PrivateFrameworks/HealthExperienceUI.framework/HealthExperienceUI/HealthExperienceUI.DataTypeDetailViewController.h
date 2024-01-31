@class NSString;

@interface HealthExperienceUI.DataTypeDetailViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <HKInternalSettingsGestureHandler, HealthExperienceUI.TapToRadarButtonDisplaying> {
    void /* unknown type, empty encoding */ providedHealthToolbox;
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ chartContext;
    void /* unknown type, empty encoding */ chartImageProvider;
    void /* unknown type, empty encoding */ chartOverlayVersionProvider;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ restorationUserActivity;
    void /* unknown type, empty encoding */ hkType;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_personalizedFeedTrainer;
    void /* unknown type, empty encoding */ didSubmitAnalyticsForRoomEntry;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapToRadarHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addDataButton;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)ttrButtonTapped;
- (void)onInternalSettingsGesture;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)restoreUserActivityState:(id)a0;
- (void)shareButtonTapped:(id)a0;
- (void)addDataKeyCommandFired;
- (void)addDataTapped:(id)a0;

@end
