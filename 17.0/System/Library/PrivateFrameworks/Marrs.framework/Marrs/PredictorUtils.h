@interface PredictorUtils : NSObject

+ (id)getInitStatusWithPredictorName:(id)a0 domain:(id)a1 code:(long long)a2;
+ (id)getPredictStatusWithPredictorName:(id)a0 domain:(id)a1 code:(long long)a2;
+ (long long)handleInitException:(struct exception_ptr { void *x0; })a0;
+ (long long)handlePredictException:(struct exception_ptr { void *x0; })a0;
+ (void)reportInitStatusWithPredictorName:(id)a0 domain:(id)a1 code:(long long)a2 locale:(id)a3;
+ (void)reportPredictStatusWithPredictorName:(id)a0 domain:(id)a1 code:(long long)a2 locale:(id)a3;

@end
