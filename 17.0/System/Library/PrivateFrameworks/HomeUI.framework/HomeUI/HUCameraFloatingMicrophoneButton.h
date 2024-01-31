@class NAUILayoutConstraintSet, UIVisualEffectView, UIImageView, UILabel;

@interface HUCameraFloatingMicrophoneButton : UIButton

@property (readonly, nonatomic) UIVisualEffectView *backgroundView;
@property (readonly, nonatomic) UILabel *microphoneLabel;
@property (readonly, nonatomic) UIImageView *microphoneImageView;
@property (readonly, nonatomic) NAUILayoutConstraintSet *constraintSet;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)_createBackgroundEffect;

- (void)_updateAlpha;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)_setupConstraintSet;
- (void)_updateSelectionState;

@end
