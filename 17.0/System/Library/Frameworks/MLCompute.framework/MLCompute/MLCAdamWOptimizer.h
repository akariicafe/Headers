@class NSString, MLCOptimizerDescriptor;

@interface MLCAdamWOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying>

@property (readonly, nonatomic) MLCOptimizerDescriptor *optimizerDescriptor;
@property (nonatomic) unsigned long long timeStep;
@property (readonly, nonatomic) float beta1;
@property (readonly, nonatomic) float beta2;
@property (readonly, nonatomic) float epsilon;
@property (readonly, nonatomic) BOOL usesAMSGrad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optimizerWithDescriptor:(id)a0;
+ (id)optimizerWithDescriptor:(id)a0 beta1:(float)a1 beta2:(float)a2 epsilon:(float)a3 usesAMSGrad:(BOOL)a4 timeStep:(unsigned long long)a5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)compileForDevice:(id)a0;
- (id)initWithDescriptor:(id)a0 beta1:(float)a1 beta2:(float)a2 epsilon:(float)a3 usesAMSGrad:(BOOL)a4 timeStep:(unsigned long long)a5;

@end
