@interface _UIImageSymbolScaleEffect : _UIImageSymbolEffect

@property (nonatomic) long long scale;
@property (nonatomic) BOOL byLayer;

+ (id)effect;
+ (BOOL)supportsSecureCoding;
+ (id)scaleDownEffect;
+ (id)effectWithScale:(long long)a0;
+ (id)scaleDefaultEffect;
+ (id)scaleUpEffect;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_desiredScale;
- (BOOL)_isValidAnimationPreset;
- (id)_nsSymbolEffectRepresentation;
- (long long)_stateUpdateType;

@end
