@class SBRingerVolumeSliderView, UIColor, FBScene, SBUISystemApertureContentProvider, NSString, SBUISystemApertureTextContentProvider, SBUISystemApertureCAPackageContentProvider;
@protocol SBUISystemApertureContentViewProviding, SAAlertHosting, SAInvalidatable, SBRingerAlertElementDelegate;

@interface SBRingerAlertElement : SBAlertProvidedContentElement <SBSystemApertureContextProviding, SBRingerNoticeUICoordinating> {
    id<SAAlertHosting> _alertHost;
}

@property (nonatomic) unsigned long long visualStyle;
@property (retain, nonatomic) SBUISystemApertureContentProvider *contentProvider;
@property (retain, nonatomic) SBUISystemApertureCAPackageContentProvider *leadingRingerContentViewProvider;
@property (retain, nonatomic) SBUISystemApertureCAPackageContentProvider *minimalRingerContentViewProvider;
@property (retain, nonatomic) id<SBUISystemApertureContentViewProviding> minimalContentViewProvider;
@property (retain, nonatomic) SBUISystemApertureTextContentProvider *trailingTextContentViewProvider;
@property (retain, nonatomic) SBRingerVolumeSliderView *sliderView;
@property (retain, nonatomic) SBRingerVolumeSliderView *minimalSliderView;
@property (nonatomic) BOOL lastEventIsAVolumeChange;
@property (nonatomic) double overshoot;
@property (nonatomic) unsigned long long source;
@property (weak, nonatomic) id<SBRingerAlertElementDelegate> delegate;
@property (retain, nonatomic) id<SAInvalidatable> assertion;
@property (nonatomic, getter=isActivatedForPreviewing) BOOL activatedForPreviewing;
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) BOOL preventsSwipeToHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isRingerSilent) BOOL ringerSilent;
@property (nonatomic) float volume;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;

- (id)elementIdentifier;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (void)setVolume:(float)a0 animated:(BOOL)a1 forKeyPress:(BOOL)a2;
- (void)_updateStateWithTransitionType:(unsigned long long)a0;
- (id)_bellImageForRingerSilent:(BOOL)a0;
- (id)_colorForRingerSilent:(BOOL)a0;
- (id)_containedVolumeSliderViewWithSize:(struct CGSize { double x0; double x1; })a0 layoutAxis:(long long)a1;
- (void)_getRingerPackageSizesForVisualStyle:(unsigned long long)a0 ringerSilent:(BOOL)a1 leadingSize:(out struct CGSize { double x0; double x1; } *)a2 minimalSize:(out struct CGSize { double x0; double x1; } *)a3;
- (id)_leadingContentViewProviderForVolume;
- (id)_minimalContentForSource:(unsigned long long)a0 visualStyle:(unsigned long long)a1 ringerSilent:(BOOL)a2;
- (id)_ringerPackageNameForVisualStyle:(unsigned long long)a0 minimal:(BOOL)a1;
- (void)_setRingerSilent:(BOOL)a0 skipUpdate:(BOOL)a1;
- (void)_shakeRingerBell;
- (id)_textForRingerSilent:(BOOL)a0;
- (void)_updateVolumeSliderAnimated:(BOOL)a0;
- (id)alertHost;
- (void)buttonReleased;
- (double)concentricPaddingOverrideForView:(id)a0 inLayoutMode:(long long)a1;
- (id)initWithSource:(unsigned long long)a0 ringerSilent:(BOOL)a1 forPreviewing:(BOOL)a2;
- (BOOL)isProvidedViewConcentric:(id)a0 inLayoutMode:(long long)a1;
- (void)nudgeUp:(BOOL)a0;
- (BOOL)overridesConcentricPaddingForView:(id)a0 inLayoutMode:(long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)presentForMuteChange:(BOOL)a0;
- (void)setAlertHost:(id)a0;

@end
