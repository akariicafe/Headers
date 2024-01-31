@class UIColor, UIImage;

@interface _UITabBarLayoutData : _UIBarAppearanceData

@property (copy, nonatomic) UIColor *selectionIndicatorTintColor;
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (nonatomic) long long itemPositioning;
@property (nonatomic) double itemWidth;
@property (nonatomic) double itemSpacing;

+ (id)standardLayoutData;
+ (id)decodeFromCoder:(id)a0 prefix:(id)a1;

- (BOOL)checkEqualTo:(id)a0;
- (long long)hashInto:(long long)a0;
- (void)describeInto:(id)a0;
- (void)encodeToCoder:(id)a0 prefix:(id)a1;
- (id)replicate;
- (void).cxx_destruct;
- (long long)positioningForTraitCollection:(id)a0;

@end
