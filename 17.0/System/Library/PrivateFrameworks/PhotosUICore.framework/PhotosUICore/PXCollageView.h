@class UIColor, NSArray, NSPointerArray, PXLayoutPerformerOutput, PXRoundedCornerOverlayView;

@interface PXCollageView : UIView

@property (class, readonly) long long maximumNumberOfItems;

@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (readonly, nonatomic) NSArray *_imageViews;
@property (readonly, nonatomic) NSPointerArray *_imageSizes;
@property (retain, nonatomic) PXRoundedCornerOverlayView *_roundedCornerOverlayView;
@property (nonatomic) double spacing;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) UIColor *cornerBackgroundColor;
@property (nonatomic) double imageCornerRadius;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImage:(id)a0 forItemAtIndex:(long long)a1;
- (void)_updateRoundedCornerOverlayView;
- (void)_updateImageViews;
- (struct CGSize { double x0; double x1; })imageSizeForItemAtIndex:(long long)a0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0 forItemAtIndex:(long long)a1;

@end
