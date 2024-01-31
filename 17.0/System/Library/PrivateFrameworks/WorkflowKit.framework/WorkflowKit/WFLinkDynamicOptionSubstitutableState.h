@class NSString, WFImage;

@interface WFLinkDynamicOptionSubstitutableState : WFVariableSubstitutableParameterState

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) WFImage *image;
@property (readonly, nonatomic) BOOL valueNeedsDisplayRepresentation;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2 bundleIdentifier:(id)a3;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0 localizedTitle:(id)a1 localizedSubtitle:(id)a2 image:(id)a3;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (BOOL)stateIsEquivalent:(id)a0;

@end
