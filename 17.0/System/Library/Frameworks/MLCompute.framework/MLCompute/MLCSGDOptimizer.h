@class NSString, MLCOptimizerDescriptor;

@interface MLCSGDOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying>

@property (readonly, nonatomic) MLCOptimizerDescriptor *optimizerDescriptor;
@property (readonly, nonatomic) float momentumScale;
@property (readonly, nonatomic) BOOL usesNesterovMomentum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optimizerWithDescriptor:(id)a0 momentumScale:(float)a1 usesNesterovMomentum:(BOOL)a2;
+ (id)optimizerWithDescriptor:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)compileForDevice:(id)a0;
- (id)initWithMomentumScale:(float)a0 useNesterovMomentum:(BOOL)a1 optimizerDescriptor:(id)a2;

@end
