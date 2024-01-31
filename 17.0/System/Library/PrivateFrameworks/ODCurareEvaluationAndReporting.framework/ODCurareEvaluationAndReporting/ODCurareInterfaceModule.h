@class ODCurareInterfaceModuleInternal;

@interface ODCurareInterfaceModule : NSObject

@property (readonly) ODCurareInterfaceModuleInternal *underlyingObject;

- (void).cxx_destruct;
- (void)generateCAReportAndReturnError:(id *)a0;
- (BOOL)evaluateModelsWithEvaluationModels:(id)a0 error:(id *)a1;
- (id)getSelectedModelWithDefaultModel:(id)a0 selectionPolicy:(id)a1 error:(id *)a2;
- (id)initWithBundleIdentifier:(id)a0 evaluationInstance:(id)a1 personalizationInstance:(id)a2 pruningPolicy:(id)a3 error:(id *)a4;
- (BOOL)personalizeModelsWithPersonalizableModels:(id)a0 personalizationPolicy:(id)a1 error:(id *)a2;

@end
