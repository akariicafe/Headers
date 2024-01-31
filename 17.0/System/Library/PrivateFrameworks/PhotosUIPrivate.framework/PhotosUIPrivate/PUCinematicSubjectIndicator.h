@class CEKSubjectIndicatorView, CEKCinematicSubjectIndicatorView;

@interface PUCinematicSubjectIndicator : UIView {
    CEKSubjectIndicatorView *_fixedFocusView;
    CEKCinematicSubjectIndicatorView *_subjectView;
    struct CGSize { double width; double height; } _fixedFocusSize;
}

@property (nonatomic) long long shape;
@property (nonatomic) BOOL isPulsing;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_startPulseAnimation;
- (void)setShape:(long long)a0 animated:(BOOL)a1;

@end
