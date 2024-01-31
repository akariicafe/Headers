@class NSArray;

@interface _UIMaterial : NSObject

@property (readonly, nonatomic, getter=isVibrant) BOOL vibrant;
@property (readonly, nonatomic) NSArray *backgroundEffects;
@property (readonly, nonatomic) NSArray *contentEffects;

+ (id)watchMaterialMapping;
+ (id)xrOSMaterialMapping;
+ (id)defaultMaterialMapping;
+ (id)vibrancyEffectWithA:(double)a0 B:(double)a1 C:(double)a2 D:(double)a3 E:(double)a4 F:(double)a5;
+ (id)materialForSystemColorName:(id)a0;
+ (id)materialMapping;

- (id)initWithBlur:(long long)a0;
- (id)initWithVibrantVisualEffect:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVibrancy:(long long)a0 forBlurEffectStyle:(long long)a1;
- (id)initWithVibrancy:(long long)a0;
- (id)initWithVisualEffect:(id)a0;

@end
