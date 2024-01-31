@class UIImage, UILabel;

@interface HUISliderConfig : NSObject

@property (nonatomic) long long style;
@property (retain, nonatomic) UIImage *minImage;
@property (retain, nonatomic) UIImage *maxImage;
@property (retain, nonatomic) UILabel *minTextLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (nonatomic) BOOL providesOwnSeparator;
@property (nonatomic) BOOL isSubmenuSlider;
@property (nonatomic) BOOL isLargeText;

- (void).cxx_destruct;

@end
