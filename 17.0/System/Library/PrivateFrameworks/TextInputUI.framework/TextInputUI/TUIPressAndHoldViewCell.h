@class UILabel, NSString;

@interface TUIPressAndHoldViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *accentVariantNumberLabel;
@property (copy, nonatomic) NSString *accentVariant;
@property (nonatomic) unsigned long long accentVariantNumber;
@property (nonatomic) long long alignment;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateColors;
- (void)updateLabels;

@end
