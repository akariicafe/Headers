@class MTMaterialView;

@interface PLGrabberView : UIView {
    MTMaterialView *_materialView;
}

@property (nonatomic) double weighting;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContainerWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_configureMaterialViewIfNecessary;
- (struct CGSize { double x0; double x1; })_defaultContainerSize;
- (struct CGSize { double x0; double x1; })_intrinsicContentSizeWithContainerSize:(struct CGSize { double x0; double x1; })a0;

@end
