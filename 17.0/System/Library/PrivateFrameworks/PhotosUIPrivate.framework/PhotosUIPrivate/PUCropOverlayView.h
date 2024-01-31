@class NSArray, PUCropMaskView, UIView;

@interface PUCropOverlayView : UIView

@property (retain, nonatomic) NSArray *oneThirdCropLines;
@property (retain, nonatomic) NSArray *oneNinthCropLines;
@property (retain, nonatomic) NSArray *maskViews;
@property (retain, nonatomic) UIView *cropWindowView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRectInLocalCoordinateSpace;
@property (retain, nonatomic) PUCropMaskView *topMask;
@property (retain, nonatomic) PUCropMaskView *bottomMask;
@property (retain, nonatomic) PUCropMaskView *leftMask;
@property (retain, nonatomic) PUCropMaskView *rightMask;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) UIView *layoutReferenceItem;
@property (nonatomic, getter=isCropGridVisible) BOOL cropGridVisible;
@property (nonatomic, getter=isStraightenGridVisible) BOOL straightenGridVisible;
@property (nonatomic, getter=isMaskedContentVisible) BOOL maskedContentVisible;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_createMaskView;
- (id)_addLinesSpacedForCount:(unsigned long long)a0 drawFirstAndLast:(BOOL)a1 visible:(BOOL)a2;
- (id)_createConstraintsForLine:(id)a0 centerMultiplier:(double)a1 vertical:(BOOL)a2;
- (id)_createLineViewForCount:(unsigned long long)a0;
- (void)_setGridViews:(id)a0 visible:(BOOL)a1 iVarVisibilePtr:(BOOL *)a2 animated:(BOOL)a3;
- (unsigned long long)_subviewIndexForLineForCount:(unsigned long long)a0;
- (void)_updateCropRectInLocalCoordinateSpace;
- (void)setCropGridVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setMaskedContentVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setStraightenGridVisible:(BOOL)a0 animated:(BOOL)a1;

@end
