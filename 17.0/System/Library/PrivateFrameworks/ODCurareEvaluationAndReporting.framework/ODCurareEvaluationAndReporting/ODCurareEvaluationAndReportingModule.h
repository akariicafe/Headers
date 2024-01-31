@class ODCurareEvaluationAndReportingModuleInternal;

@interface ODCurareEvaluationAndReportingModule : NSObject

@property (readonly) ODCurareEvaluationAndReportingModuleInternal *underlyingObject;

- (void).cxx_destruct;
- (id)getSelectedModel:(id *)a0;
- (id)initWithBundleIdentifier:(id)a0 dataProviderInstance:(id)a1 evaluationInstance:(id)a2 personalizationInstance:(id)a3 pruningPolicy:(id)a4 error:(id *)a5;
- (BOOL)trainAndEvaluateModelsWithCandidateModels:(id)a0 personalizationPolicy:(id)a1 selectionPolicy:(id)a2 error:(id *)a3;
- (id)getEvaluationResults;
- (BOOL)evaluateDefaultModelWithDefaultModelPath:(id)a0 modelConfiguration:(id)a1 error:(id *)a2;
- (BOOL)trainAndEvaluateAdaptedModelsWithAdaptableModelPath:(id)a0 modelConfiguration:(id)a1 error:(id *)a2;

@end
