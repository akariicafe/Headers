@class UIVisualEffectView, CAShapeLayer, UIView, UIImageView, UIButton;
@protocol CKMessageHighlightButtonDelegate;

@interface CKMessageHighlightButton : UIView

@property (readonly, nonatomic) UIButton *button;
@property (readonly, nonatomic) BOOL didUpdate;
@property (readonly, nonatomic) UIView *backgroundColorView;
@property (readonly, nonatomic) UIView *backgroundColorViewForCrossFade;
@property (readonly, nonatomic) UIVisualEffectView *blurEffectView;
@property (readonly, nonatomic) CAShapeLayer *blurEffectMaskLayer;
@property (readonly, nonatomic) UIImageView *glyphView;
@property (readonly, nonatomic) UIImageView *glyphViewForCrossFade;
@property (weak, nonatomic) id<CKMessageHighlightButtonDelegate> delegate;
@property (readonly, nonatomic) BOOL isHighlighted;

- (struct CGSize { double x0; double x1; })buttonSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithInitialState:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })balloonViewFrame;
- (struct CGSize { double x0; double x1; })buttonSizeWithInsets;
- (void)buttonWasPressed:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFrameRelativeToBalloonViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFrameRelativeToBalloonViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transcriptHighlightFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateTranscriptHighlightFrameRelativeToBalloonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performFadeoutAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)performHideAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)performSelectedAnimation:(id /* block */)a0;
- (void)performShowAnimation:(id /* block */)a0;
- (void)performUnselectedDismissAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })replyButtonFrame;
- (struct CGSize { double x0; double x1; })transcriptHighlightSize;
- (char)transcriptOrientation;

@end
