@class VUILabel, UIScrollView, UIView;

@interface VUILibraryAlertView : UIView {
    UIScrollView *_scrollView;
    UIView *_containerView;
}

@property (readonly, nonatomic) VUILabel *titleLabel;
@property (readonly, nonatomic) VUILabel *subtitleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
