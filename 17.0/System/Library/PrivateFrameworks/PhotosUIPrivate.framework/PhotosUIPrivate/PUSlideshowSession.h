@class NSUUID, NSString, OKPresentationViewController, PUSlideshowSettingsViewModel, PUSlideshowViewModel, PUSlideshowContextRegistry, PHAssetCollection, OKProducerPreset, OKMediaFeederPhotoKit, PHFetchResult;

@interface PUSlideshowSession : NSObject <PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewModelChangeObserver, PXSettingsKeyObserver> {
    OKMediaFeederPhotoKit *_mediaFeeder;
    PUSlideshowContextRegistry *_contextRegistry;
    OKProducerPreset *_currentPreset;
}

@property (nonatomic, setter=_setDisablingIdleTimer:) BOOL _disablingIdleTimer;
@property (retain, nonatomic, setter=_setDisablingIdleTimerToken:) id _disablingIdleTimerToken;
@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic) long long currentState;
@property (nonatomic) BOOL didStartOnce;
@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PUSlideshowViewModel *viewModel;
@property (readonly, nonatomic) PUSlideshowSettingsViewModel *settingsViewModel;
@property (readonly, nonatomic) OKPresentationViewController *presentationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)init;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_addCurrentSettingsToPayload:(id)a0;
- (void)_beginDisablingIdleTimer;
- (void)_configurePresentationViewController:(id)a0;
- (void)_distributeSlideshowDisplayContextWithPresentationController:(id)a0;
- (void)_endDisablingIdleTimerIfNecessary;
- (void)_invalidateCurrentState;
- (id)_resolutionSizes;
- (void)_slideshowSettingsViewModel:(id)a0 didChange:(id)a1;
- (void)_slideshowViewModel:(id)a0 didChange:(id)a1;
- (void)_updateCurrentState;
- (id)initWithFetchResult:(id)a0 assetCollection:(id)a1;
- (id)initWithFetchResult:(id)a0 assetCollection:(id)a1 startIndex:(unsigned long long)a2;
- (void)registerSlideshowDisplayContext:(id)a0;
- (void)unregisterSlideshowDisplayContext:(id)a0;
- (void)updatePresentationViewController;

@end
