@class NSArray, NSSet, UIView, UIButton;

@interface PUReviewScreenControlBar : UIView

@property (retain, nonatomic, setter=_setButtonsForLayout:) NSArray *_buttonsForLayout;
@property (copy, nonatomic) NSSet *availableButtons;
@property (copy, nonatomic) NSSet *enabledButtons;
@property (nonatomic) BOOL shouldLayoutVertically;
@property (nonatomic) struct CGPoint { double x; double y; } layoutCenterAlignmentPoint;
@property (nonatomic) BOOL useTransparentBackground;
@property (nonatomic) BOOL useTransparentTouches;
@property (readonly, nonatomic) UIButton *editButton;
@property (readonly, nonatomic) UIButton *markupButton;
@property (readonly, nonatomic) UIButton *funEffectsButton;
@property (readonly, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIView *accessoryView;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sendButtonAlignmentRectInHorizontalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeCenterAlignmentPoint:(struct CGPoint { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sendButtonAlignmentRectInVerticalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeCenterAlignmentPoint:(struct CGPoint { double x0; double x1; })a1 controlsCount:(unsigned long long)a2;
+ (id)supportedButtons;

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_updateButtonVisibility;
- (id)_buttonForButtonType:(long long)a0;
- (BOOL)_isButtonAvailable:(long long)a0;
- (BOOL)_isButtonEnabled:(long long)a0;
- (void)_updateBackgroundTransparency;
- (void)_updateButtonText;

@end
