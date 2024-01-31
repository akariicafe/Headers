@class NSString, PKPassBannerTrailingView, PKPassBannerLeadingView;
@protocol PKPassBannerMinimalViewDelegate;

@interface PKPassBannerMinimalView : UIView <SBUISystemApertureAccessoryView> {
    long long _style;
    PKPassBannerLeadingView *_leadingView;
    PKPassBannerTrailingView *_trailingView;
    double _interitemPadding;
    id<PKPassBannerMinimalViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_initWithStyle:(long long)a0 leadingView:(id)a1 trailingView:(id)a2;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 commit:(BOOL)a1;
- (void)_setInteritemPadding:(double)a0;

@end
