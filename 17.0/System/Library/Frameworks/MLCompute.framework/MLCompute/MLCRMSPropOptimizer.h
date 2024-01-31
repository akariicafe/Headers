@class NSString, MLCOptimizerDescriptor;

@interface MLCRMSPropOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying>

@property (readonly, nonatomic) MLCOptimizerDescriptor *optimizerDescriptor;
@property (readonly, nonatomic) float momentumScale;
@property (readonly, nonatomic) float alpha;
@property (readonly, nonatomic) float epsilon;
@property (readonly, nonatomic) BOOL isCentered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optimizerWithDescriptor:(id)a0 momentumScale:(float)a1 alpha:(float)a2 epsilon:(float)a3 isCentered:(BOOL)a4;
+ (id)optimizerWithDescriptor:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)compileForDevice:(id)a0;
- (id)initWithDescriptor:(id)a0 momentumScale:(float)a1 alpha:(float)a2 epsilon:(float)a3 centered:(BOOL)a4;

@end
