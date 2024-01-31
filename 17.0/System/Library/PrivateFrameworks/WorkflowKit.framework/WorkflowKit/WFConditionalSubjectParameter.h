@interface WFConditionalSubjectParameter : WFParameter

- (Class)stateClass;
- (BOOL)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;

@end
