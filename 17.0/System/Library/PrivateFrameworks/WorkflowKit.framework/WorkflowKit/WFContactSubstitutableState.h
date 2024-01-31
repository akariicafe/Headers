@class WFCommunicationMethod;

@interface WFContactSubstitutableState : WFMultipleValueParameterState

@property (retain, nonatomic) WFCommunicationMethod *communicationMethod;

+ (id)processingValueClasses;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)serializedRepresentation;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processContentCollection:(id)a0 context:(id)a1 valueHandler:(id /* block */)a2;
- (void)processIntoEntriesWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)processedEntriesFromCoercionResult:(id)a0 allowsCustomHandles:(BOOL)a1;
- (BOOL)reinterpretsStringsAsContactHandlesFromVariable:(BOOL)a0;
- (id)stringInterpretedAsContactHandle:(id)a0 allowsCustomHandles:(BOOL)a1;
- (id)valueItemClasses;

@end
