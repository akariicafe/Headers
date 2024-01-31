@class UIColor, UIImageView, UIImage, UILabel, WFCircularGlyphView;

@interface WFTriggerOptionSelectionView : UIView

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) UIColor *selectedStateImageTintColor;
@property (retain, nonatomic) UIColor *defaultImageTintColor;
@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIImage *defaultImage;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;
@property (readonly, nonatomic) WFCircularGlyphView *selectedView;
@property (readonly, nonatomic) WFCircularGlyphView *unselectedView;

+ (double)scaledValueForValue:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateAlpha;

@end
