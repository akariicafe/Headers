@class UIColor, UIImageView, NTKPigmentEditOption, CLKDevice;

@interface _NTKPigmentAddCell : UICollectionViewCell

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) NTKPigmentEditOption *pigmentEditOption;
@property (readonly, nonatomic) UIImageView *swatch;
@property (readonly, nonatomic) UIImageView *check;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)_updateCheck;

@end
