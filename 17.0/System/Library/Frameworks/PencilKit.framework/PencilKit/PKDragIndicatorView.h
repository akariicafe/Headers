@class NSString;

@interface PKDragIndicatorView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling>

@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double scalingFactor;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;

@end
