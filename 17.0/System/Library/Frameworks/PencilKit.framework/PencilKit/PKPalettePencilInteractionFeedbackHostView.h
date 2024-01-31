@class PKPalettePencilInteractionFeedbackView, UILayoutGuide, NSTimer, NSLayoutConstraint, UIViewFloatAnimatableProperty;
@protocol PKPalettePencilInteractionFeedbackHostViewDelegate;

@interface PKPalettePencilInteractionFeedbackHostView : UIView

@property (weak, nonatomic) id<PKPalettePencilInteractionFeedbackHostViewDelegate> delegate;
@property (retain, nonatomic) PKPalettePencilInteractionFeedbackView *pencilInteractionFeedbackView;
@property (retain, nonatomic) NSTimer *pencilInteractionFeedbackViewAutodismissTimer;
@property (retain, nonatomic) UILayoutGuide *pencilInteractionFeedbackViewLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewCenterYConstraint;
@property (nonatomic, getter=isPencilInteractionFeedbackViewVisible) BOOL pencilInteractionFeedbackViewVisible;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *feedbackViewVisibilityAnimatableProperty;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (long long)_palettePosition;
- (void)_animatePencilInteractionFeedbackViewToVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_isPencilInteractionFeedbackViewAlmostOffScreen;
- (void)_updateLayoutGuideConstraints;
- (void)hideFeedbackView;
- (double)minimizedPaletteScaleFactor;
- (struct CGSize { double x0; double x1; })minimizedPaletteSize;
- (void)showFeedbackForCurrentlySelectedToolInPaletteView;

@end
