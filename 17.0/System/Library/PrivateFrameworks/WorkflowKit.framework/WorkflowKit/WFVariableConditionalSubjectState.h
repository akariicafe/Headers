@class NSString, WFContentProperty, WFVariableParameterState, WFVariable;

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState <WFVariableSupportingParameterState>

@property (readonly, nonatomic) WFVariableParameterState *variableState;
@property (readonly, nonatomic) WFContentProperty *effectiveContentProperty;
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subjectType;

- (id)serializedRepresentation;
- (long long)contentType;
- (void).cxx_destruct;
- (id)initWithVariable:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)tense;
- (id)unitType;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (unsigned long long)comparableTimeUnits;
- (id)containedVariables;
- (Class)contentClassProvidingContentProperty;
- (unsigned long long)displayableTimeUnits;
- (Class)effectiveContentClass;
- (void)getContentWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)a0;
- (id)initWithVariableState:(id)a0;
- (BOOL)isCaseInsensitive;
- (BOOL)isEnumeration;
- (BOOL)isIrrational;
- (id)localizedLabelForEnumerationPossibleState:(id)a0;
- (id)supportedComparisonOperators;

@end
