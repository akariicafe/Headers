@class UIView, MPAVEndpointRoute, NSString, UIImage, MPAVRoute, UIWindowScene, UIImageView, UILayoutGuide, MPVolumeController, _UISliderFluidConfiguration, MPAVOutputDeviceRoute;

@interface MPVolumeSlider : UISlider <MPVolumeControllerDelegate, _UISliderFluidInteractionDelegate, MPVolumeDisplaying> {
    BOOL _isFluidTracking;
    UIImageView *_thumbImageView;
    BOOL _isOffScreen;
    BOOL _forcingOffscreenVisibility;
    BOOL _configuredLayoutGuide;
}

@property (retain, nonatomic) _UISliderFluidConfiguration *configuration;
@property (nonatomic, setter=_setIsOffScreen:) BOOL _isOffScreen;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitRectInsets;
@property (readonly, nonatomic) UILayoutGuide *trackLayoutGuide;
@property (readonly, weak, nonatomic) UIView *thumbView;
@property (retain, nonatomic) MPVolumeController *volumeController;
@property (retain, nonatomic) MPAVRoute *route;
@property (retain, nonatomic) MPAVEndpointRoute *groupRoute;
@property (retain, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute;
@property (nonatomic, getter=isInOptimisticState) BOOL optimisticState;
@property (nonatomic) float optimisticValue;
@property (readonly, nonatomic) long long style;
@property (nonatomic) double expansionFactor;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (retain, nonatomic) UIImage *volumeWarningTrackImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)dealloc;
- (void)updateVolume;
- (void)volumeController:(id)a0 volumeControlLabelDidChange:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (float)minimumValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (void)setVolumeDataSource:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1 endpointRoute:(id)a2 outputDeviceRoute:(id)a3;
- (void)_sliderFluidInteractionWillBegin:(id)a0 withLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (id)createThumbView;
- (void)setEnabled:(BOOL)a0;
- (void)updateConstraints;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)volumeController:(id)a0 volumeControlCapabilitiesDidChange:(unsigned int)a1;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)_commitVolumeChange;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1 silenceVolumeHUD:(BOOL)a2;
- (void)_updateVolumeAnimated:(BOOL)a0 silenceVolumeHUD:(BOOL)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_sliderFluidInteractionWillEnd:(id)a0;
- (float)maximumValue;
- (BOOL)isTracking;
- (id)_routeName;
- (void)_sliderFluidInteractionWillContinue:(id)a0 withLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (void)_sliderFluidInteractionWillExtend:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
