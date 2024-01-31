@class NSString, SBPIPStashVisualSettings, SBPIPBackdropView, UIView, UIImageView;

@interface SBPIPStashView : UIView <PTSettingsKeyObserver> {
    double _startBlurThreshold;
    double _completeBlurThreshold;
    SBPIPStashVisualSettings *_settings;
    SBPIPBackdropView *_backdropView;
    UIView *_lightTintView;
    UIView *_darkTintView;
    UIImageView *_leftChevron;
    UIImageView *_rightChevron;
    BOOL _chevronsHidden;
    BOOL _isChevronShownLeft;
}

@property (nonatomic) double blurProgress;
@property (nonatomic) double stashedTabWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 settings:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutStashChevrons;
- (void)resetChevronState;
- (void)setChevronHidden:(BOOL)a0 left:(BOOL)a1;
- (void)_updateSettingsDerivedValues;

@end
