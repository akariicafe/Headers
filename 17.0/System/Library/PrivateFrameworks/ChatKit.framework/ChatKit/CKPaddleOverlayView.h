@class UIImageView, UIVisualEffectView, UIView;
@protocol CKPaddleOverlayViewDelegate;

@interface CKPaddleOverlayView : UIView

@property (weak, nonatomic) id<CKPaddleOverlayViewDelegate> delegate;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *shadowView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIView *darkOuterGlowView;
@property (retain, nonatomic) UIView *innerGlowView;
@property (retain, nonatomic) UIView *paddleView;
@property (retain, nonatomic) UIView *viewToShow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overlayRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anchorRect;

- (void)dismiss;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)drawMacPaddle;
- (id)initWithOverlayView:(id)a0 atAnchorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2 delegate:(id)a3;
- (void)showPaddleAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateShadowVisualStyling;

@end
