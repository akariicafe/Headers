@class NSLocale;

@interface NLPLearnerShadowEvaluator : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) long long evaluationTask;
@property (readonly, nonatomic) unsigned long long topK;
@property (nonatomic) unsigned long long maxSamples;

+ (void)initialize;
+ (id)evaluatorWithLocale:(id)a0 andTask:(long long)a1;

- (void).cxx_destruct;
- (id)evaluateModel:(id)a0 onRecords:(id)a1 options:(id)a2 completion:(id /* block */)a3 error:(id *)a4;
- (id)initWithLocale:(id)a0 andTask:(long long)a1;
- (id)prepareDataFromRecords:(id)a0;

@end
