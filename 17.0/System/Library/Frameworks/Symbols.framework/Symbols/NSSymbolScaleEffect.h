@interface NSSymbolScaleEffect : NSSymbolEffect

@property (nonatomic) long long _level;
@property (nonatomic) long long _layerBehavior;

+ (id)effect;
+ (id)scaleDownEffect;
+ (id)scaleUpEffect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (id)_rbOptionsMutable;
- (id)_withScaleLevel:(long long)a0;

@end
