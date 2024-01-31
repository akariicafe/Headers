@class NSString, UILabel, UIActivityIndicatorView;

@interface SL_OOPASpinnerTitle : UIView {
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}

@property (copy, nonatomic) NSString *title;

- (void)stopAnimating;
- (id)init;
- (void)dealloc;
- (void)startAnimating;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
