@interface NSSymbolReplaceContentTransition : NSSymbolContentTransition

@property (nonatomic) long long _style;
@property (nonatomic) long long _layerBehavior;

+ (id)transition;
+ (id)replaceDownUpTransition;
+ (id)replaceOffUpTransition;
+ (id)replaceUpUpTransition;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)transitionWithByLayer;
- (id)transitionWithWholeSymbol;
- (id)_rbOptionsMutable;
- (id)_withStyle:(long long)a0;

@end
