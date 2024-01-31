@class WFNumberStringSubstitutableState, NSString, WFVariable;

@interface WFQuantityParameterState : NSObject <WFParameterState, WFVariableSupportingParameterState>

@property (readonly, nonatomic) WFNumberStringSubstitutableState *magnitudeState;
@property (readonly, copy, nonatomic) NSString *unitString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WFVariable *variable;

+ (Class)processingValueClass;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)initWithVariable:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (id)initWithMagnitudeState:(id)a0 unitString:(id)a1;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
