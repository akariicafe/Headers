@interface WFTableTemplateParameter : WFParameter

@property (readonly, nonatomic) Class contentItemClass;
@property (readonly, nonatomic, getter=isFilterable) BOOL filterable;
@property (readonly, copy, nonatomic) id additionalRowSerializedRepresentation;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (BOOL)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;
- (Class)singleStateClass;

@end
