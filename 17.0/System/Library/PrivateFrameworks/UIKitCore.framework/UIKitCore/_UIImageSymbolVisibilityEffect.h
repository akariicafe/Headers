@interface _UIImageSymbolVisibilityEffect : _UIImageSymbolEffect

@property (nonatomic) long long visibility;
@property (nonatomic) long long style;
@property (nonatomic) BOOL byLayer;

+ (id)effect;
+ (BOOL)supportsSecureCoding;
+ (id)disappearEffect;
+ (id)appearEffect;
+ (id)effectWithVisibility:(long long)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_desiredVisibility;
- (BOOL)_isValidAnimationPreset;
- (id)_nsSymbolEffectRepresentation;
- (long long)_stateUpdateType;

@end
