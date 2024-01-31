@class UIImageView, UIView, NSLayoutConstraint;
@protocol TUICandidateViewStyle;

@interface TUICandidateMask : UIView

@property (retain, nonatomic) UIImageView *leftEdgeImageView;
@property (retain, nonatomic) NSLayoutConstraint *leftEdgeWidthConstraint;
@property (retain, nonatomic) UIImageView *rightEdgeImageView;
@property (retain, nonatomic) NSLayoutConstraint *rightEdgeWidthConstraint;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;

- (void)_updateLayout;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
