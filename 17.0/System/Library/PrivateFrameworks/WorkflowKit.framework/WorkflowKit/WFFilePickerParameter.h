@class NSArray, NSString, WFWorkflow;

@interface WFFilePickerParameter : WFParameter <WFWorkflowReferencing>

@property (readonly, nonatomic) NSArray *supportedTypes;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (readonly) BOOL shouldShowFullContextualPath;
@property (weak, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (BOOL)displaysMultipleValueEditor;
- (BOOL)parameterStateIsValid:(id)a0;
- (Class)singleStateClass;
- (BOOL)usesDefaultValue;

@end
