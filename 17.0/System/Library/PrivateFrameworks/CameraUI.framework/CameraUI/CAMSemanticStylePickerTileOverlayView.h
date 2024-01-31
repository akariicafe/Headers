@class UIImageView, UIColor, UIView;

@interface CAMSemanticStylePickerTileOverlayView : UIView

@property (readonly, nonatomic) UIImageView *_topLeftCorner;
@property (readonly, nonatomic) UIImageView *_topRightCorner;
@property (readonly, nonatomic) UIImageView *_bottomLeftCorner;
@property (readonly, nonatomic) UIImageView *_bottomRightCorner;
@property (readonly, nonatomic) UIView *_tileOverlay;
@property (nonatomic) double cornerTargetAlpha;
@property (nonatomic) double tileAlpha;
@property (nonatomic) UIColor *materialColor;

+ (id)_sharedCornerImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateAlphas;
- (void)_updateMaterialColor;

@end
