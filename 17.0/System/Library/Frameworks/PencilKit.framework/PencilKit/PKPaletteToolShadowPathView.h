@class NSString, UIView;

@interface PKPaletteToolShadowPathView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling> {
    UIView *_largeShadow;
    UIView *_smallShadow;
}

@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double scalingFactor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateUI;
- (id)initWithToolConfiguration:(id)a0;

@end
