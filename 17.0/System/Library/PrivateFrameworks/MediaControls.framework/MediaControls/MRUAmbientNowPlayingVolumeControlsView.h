@class UIWindowScene, MRUSlider, MRUVolumeController, MRUVisualStylingProvider, MSVTimer, MRUCAPackageView, NSString;
@protocol MPVolumeControllerDataSource;

@interface MRUAmbientNowPlayingVolumeControlsView : UIView <MRUVolumeControllerDelegate, MPVolumeDisplaying, UIGestureRecognizerDelegate>

@property (retain, nonatomic) MRUCAPackageView *packageView;
@property (nonatomic) double sliderValueOnPanBegin;
@property (nonatomic) BOOL sliderExpanded;
@property (retain, nonatomic) MSVTimer *idleTimer;
@property (readonly, nonatomic) MRUSlider *slider;
@property (retain, nonatomic) MRUVolumeController *volumeController;
@property (retain, nonatomic) id<MPVolumeControllerDataSource> dataSource;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic) double sliderExpansionFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly, nonatomic) NSString *volumeAudioCategory;

- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (void)sliderValueChanged:(id)a0;
- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)volumeController:(id)a0 volumeControlCapabilitiesDidChange:(unsigned int)a1;
- (void)updateVisibility;
- (void)updateVolumeAnimated:(BOOL)a0;
- (void)resetIdleTimer;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void).cxx_destruct;
- (void)sliderTouchDown:(id)a0;
- (void)createConstraints;
- (void)invalidateIdleTimer;
- (void)sliderTouchUp:(id)a0;
- (void)updatePackageWithValue:(float)a0;

@end
