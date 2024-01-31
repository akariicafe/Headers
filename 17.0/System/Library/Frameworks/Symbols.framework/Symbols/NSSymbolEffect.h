@interface NSSymbolEffect : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _effectType;

+ (void)_addLayerBehavior:(long long)a0 ToOptions:(id)a1;
+ (id)_effectWithType:(long long)a0;
+ (void)_mergeEffectOptions:(id)a0 IntoRBOptions:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setEffectType:(long long)a0;
- (id)_rbAnimation;
- (id)_rbOptions;
- (id)_rbOptionsMutable;
- (id)_rbOptionsWithEffectOptions:(id)a0;

@end
