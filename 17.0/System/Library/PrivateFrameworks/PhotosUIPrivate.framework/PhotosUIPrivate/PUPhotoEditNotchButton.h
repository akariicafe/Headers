@class UIColor, NSString, PUPhotoEditButtonMaterialView, UIImage, MTMaterialView;

@interface PUPhotoEditNotchButton : UIButton

@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (readonly, nonatomic) PUPhotoEditButtonMaterialView *materialView;
@property (retain, nonatomic) NSString *notchButtonTitle;
@property (retain, nonatomic) NSString *symbolName;
@property (nonatomic) long long notchButtonType;
@property (readonly, nonatomic) UIImage *defaultContentImage;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } backgroundInsets;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_didInvalidateContentImageMetrics;
- (void)_updateContentImage;

@end
