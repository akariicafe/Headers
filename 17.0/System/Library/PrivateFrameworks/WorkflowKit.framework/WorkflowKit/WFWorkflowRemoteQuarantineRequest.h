@class NSDictionary, WFWorkflowRecord;

@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest

@property (readonly, nonatomic) WFWorkflowRecord *workflowRecord;
@property (copy, nonatomic) NSDictionary *workflowJavaScriptCoreRepresentation;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)defaultLocalizedDeniedErrorMessage;
- (id)defaultLocalizedDeniedErrorTitle;
- (id)initWithWorkflowRecord:(id)a0;
- (id)javaScriptCoreRepresentationWithError:(id *)a0;
- (id)policyFunctionName;
- (id)workflowJavaScriptCoreRepresentationWithError:(id *)a0;
- (id)workflowName;

@end
