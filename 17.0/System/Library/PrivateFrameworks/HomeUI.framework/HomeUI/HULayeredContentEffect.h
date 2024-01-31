@class UIVibrancyEffect, UIColor;

@interface HULayeredContentEffect : NSObject

@property (retain, nonatomic) UIVibrancyEffect *vibrancyEffect;
@property (retain, nonatomic) UIColor *tintColor;

+ (id)contentWithTintColor:(id)a0;
+ (id)contentWithVibrancyEffect:(id)a0;

- (void).cxx_destruct;

@end
