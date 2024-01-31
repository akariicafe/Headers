@class NSArray, _TVCommonSenseFooterView, UIView;

@interface _TVCommonSenseView : UIView {
    UIView *_containerView;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *infoViews;
@property (retain, nonatomic) _TVCommonSenseFooterView *footerView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
