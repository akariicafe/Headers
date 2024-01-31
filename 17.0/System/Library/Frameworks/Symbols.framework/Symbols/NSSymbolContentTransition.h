@interface NSSymbolContentTransition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _effectType;

+ (id)_transitionWithType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_rbAnimation;
- (id)_rbOptions;
- (id)_rbOptionsMutable;
- (id)_rbOptionsWithEffectOptions:(id)a0;

@end
