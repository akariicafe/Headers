@class NSString, JFXImageView, CFXEffect, JTImage;

@interface CFXEffectPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) JFXImageView *imageView;
@property (retain, nonatomic) JTImage *image;
@property (retain, nonatomic) CFXEffect *effect;
@property (retain, nonatomic) NSString *effectIdentifier;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)awakeFromNib;
- (void)configureCellAppearence;

@end
