@class UIView;

@interface SiriUIProgressBarView : UIView {
    UIView *_progressBar;
    unsigned long long _progressState;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)beginProgressAnimationWithDuration:(double)a0;

@end
