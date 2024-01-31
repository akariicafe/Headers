@class UILabel, UIActivityIndicatorView;

@interface ACUISpinnerTitle : UIView {
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}

- (void)dealloc;
- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
