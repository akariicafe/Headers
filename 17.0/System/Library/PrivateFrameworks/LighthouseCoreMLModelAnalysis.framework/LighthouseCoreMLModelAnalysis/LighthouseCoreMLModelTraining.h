@interface LighthouseCoreMLModelTraining : NSObject

+ (void)initialize;
+ (id)evaluateModel:(id)a0 modelConfiguration:(id)a1 dataBatch:(id)a2;
+ (id)getLabelFeatureName:(id)a0 modelConfiguration:(id)a1;
+ (BOOL)trainModel:(id)a0 destModelUrl:(id)a1 modelConfiguration:(id)a2 dataBatch:(id)a3;
+ (BOOL)trainModel:(id)a0 destModelUrl:(id)a1 modelConfiguration:(id)a2 dataBatch:(id)a3 labelFeatureName:(id)a4;
+ (BOOL)validateModelFeatureName:(id)a0 modelConfiguration:(id)a1 dataBatch:(id)a2;

@end
