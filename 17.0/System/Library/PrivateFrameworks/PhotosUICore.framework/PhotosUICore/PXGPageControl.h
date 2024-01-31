@class PXGPageControlConfiguration, UIPageControl;

@interface PXGPageControl : UIView <PXGReusableView> {
    UIPageControl *_pageControl;
}

@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) BOOL hidesForSinglePage;
@property (copy, nonatomic) PXGPageControlConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)prepareForReuse;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_valueChanged:(id)a0;
- (void).cxx_destruct;

@end
