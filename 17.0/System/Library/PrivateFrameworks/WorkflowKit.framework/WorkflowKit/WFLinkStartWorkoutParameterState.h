@class NSString;

@interface WFLinkStartWorkoutParameterState : WFVariableSubstitutableParameterState

@property (readonly, copy, nonatomic) NSString *localizedTitle;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)initWithLinkAction:(id)a0;

@end
