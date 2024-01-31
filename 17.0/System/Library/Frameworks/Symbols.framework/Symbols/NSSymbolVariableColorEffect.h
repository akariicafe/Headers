@interface NSSymbolVariableColorEffect : NSSymbolEffect

@property (nonatomic) long long _fillStyle;
@property (nonatomic) long long _inactiveStyle;
@property (nonatomic) long long _playbackStyle;

+ (id)effect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectWithHideInactiveLayers;
- (id)effectWithIterative;
- (id)effectWithReversing;
- (id)_rbOptionsMutable;
- (id)effectWithCumulative;
- (id)effectWithDimInactiveLayers;
- (id)effectWithNonReversing;

@end
