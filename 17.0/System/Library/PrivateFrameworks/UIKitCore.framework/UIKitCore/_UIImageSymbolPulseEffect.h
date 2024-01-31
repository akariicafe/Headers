@class _UIImageSymbolEffectRepeatBehavior;

@interface _UIImageSymbolPulseEffect : _UIImageSymbolEffect

@property (retain, nonatomic) _UIImageSymbolEffectRepeatBehavior *repeatBehavior;
@property (nonatomic) BOOL byLayer;

+ (id)effect;
+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isValidAnimationPreset;
- (id)_nsSymbolEffectRepresentation;

@end
