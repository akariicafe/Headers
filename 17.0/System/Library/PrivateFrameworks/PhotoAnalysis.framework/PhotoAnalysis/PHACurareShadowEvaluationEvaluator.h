@class NSString, ETLossDefinition, ETOptimizerDefinition;

@interface PHACurareShadowEvaluationEvaluator : NSObject

@property (retain, nonatomic) NSString *modelInputName;
@property (retain, nonatomic) NSString *modelOutputName;
@property (retain, nonatomic) NSString *lossName;
@property (retain, nonatomic) NSString *labelName;
@property (retain, nonatomic) ETLossDefinition *lossDefinition;
@property (retain, nonatomic) ETOptimizerDefinition *optimizerDefinition;

+ (id)evaluatorLog;

- (void).cxx_destruct;
- (int)accuracyForProbability:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 isPositiveData:(BOOL)a1 atIndex:(int)a2 andOperatingPoint:(float)a3;
- (id)evaluateModelAtPath:(id)a0 labelIndex:(int)a1 labelOperatingPoint:(float)a2 isPositiveData:(BOOL)a3 evaluationData:(id)a4 error:(id *)a5;
- (id)evaluateModelAtPath:(id)a0 labelIndex:(int)a1 labelOperatingPoint:(float)a2 positiveEvaluationData:(id)a3 negativeEvaluationData:(id)a4 error:(id *)a5;
- (id)getDefaultEvaluationResultForModelPath:(id)a0 isPositiveData:(BOOL)a1;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; })getEspressoBufferShapeWithBuffer:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0;
- (id)initWithModelInputName:(id)a0 modelOutputName:(id)a1 lossName:(id)a2;

@end
