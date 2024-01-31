@class NSString, UILabel;

@interface SFFluidTabOverviewHeaderView : SFFluidTabOverviewReusableView {
    UILabel *_label;
    double _lastBlurRadius;
}

@property (copy, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
