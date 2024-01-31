@class UIColor;

@interface PKBorderedButtonConfiguration : UIButtonConfiguration

@property (nonatomic) unsigned long long border;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

+ (id)filledButtonConfiguration;
+ (id)grayButtonConfiguration;
+ (id)plainButtonConfiguration;
+ (id)tintedButtonConfiguration;

- (void)_initializeDefaults;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
