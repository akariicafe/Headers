@interface PMLClassificationEvaluationMetrics : NSObject

+ (void)addScoresForOutcomes:(id)a0 predictions:(id)a1 predicate:(id /* block */)a2 metrics:(id)a3;
+ (float)f1Score:(id)a0 predictions:(id)a1 predicate:(id /* block */)a2;
+ (unsigned long long)falseNegatives:(id)a0 predictions:(id)a1 predicate:(id /* block */)a2;
+ (unsigned long long)falsePositives:(id)a0 predictions:(id)a1 predicate:(id /* block */)a2;
+ (float)precision:(id)a0 predictions:(id)a1 predicate:(id /* block */)a2;
+ (float)recall:(id)a0 predictions:(id)a1 predicate:(id /* block */)a2;
+ (float)roundFloatToSigFigs:(float)a0 sigFigs:(int)a1;
+ (void)setReportSamplingRate:(unsigned int)a0;
+ (unsigned long long)trueNegatives:(id)a0 predictions:(id)a1 predicate:(id /* block */)a2;
+ (unsigned long long)truePositives:(id)a0 predictions:(id)a1 predicate:(id /* block */)a2;

@end
