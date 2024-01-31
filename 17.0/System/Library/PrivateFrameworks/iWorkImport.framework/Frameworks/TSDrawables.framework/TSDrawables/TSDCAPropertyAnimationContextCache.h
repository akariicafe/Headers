@class NSString;

@interface TSDCAPropertyAnimationContextCache : TSDCAAnimationContextCache

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) BOOL isAnimationKeyTypeOfRotation;
@property (readonly, nonatomic) BOOL isAnimationKeyHidden;
@property (readonly, nonatomic) BOOL isAnimationKeyDoubleSided;
@property (readonly, nonatomic, getter=isAdditive) BOOL additive;
@property (nonatomic) BOOL isObjectTypeCGColor;
@property (nonatomic) BOOL isContentsAnimation;

- (void).cxx_destruct;
- (id)initWithAnimation:(id)a0;
- (id)adjustedResultWithValue:(id)a0;
- (id)interpolatedValueFrom:(id)a0 to:(id)a1 percent:(double)a2;
- (id)valueForKeyPath:(id)a0 atTime:(double)a1 animationCache:(id)a2;

@end
