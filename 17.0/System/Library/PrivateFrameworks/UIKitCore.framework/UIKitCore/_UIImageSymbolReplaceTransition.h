@interface _UIImageSymbolReplaceTransition : _UIImageSymbolTransition

@property (nonatomic) long long style;
@property (nonatomic) BOOL byLayer;

+ (BOOL)supportsSecureCoding;
+ (id)transition;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isValidAnimationPreset;
- (id)_nsSymbolContentTransitionRepresentation;

@end
