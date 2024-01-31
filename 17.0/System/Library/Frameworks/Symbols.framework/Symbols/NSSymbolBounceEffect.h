@interface NSSymbolBounceEffect : NSSymbolEffect

@property (nonatomic) long long _direction;
@property (nonatomic) long long _layerBehavior;

+ (id)effect;
+ (id)bounceDownEffect;
+ (id)bounceUpEffect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (id)_withDirection:(long long)a0;
- (id)_rbOptionsMutable;

@end
