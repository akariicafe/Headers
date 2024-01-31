@class NSArray, NSUUID, NSString;

@interface WFArrayParameterState : NSObject <WFParameterState>

@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSUUID *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)processValues:(id)a0 context:(id)a1 processingClass:(Class)a2 userInputRequiredHandler:(id /* block */)a3 valueHandler:(id /* block */)a4 processSingleVariableStringsAsContentItems:(BOOL)a5;
+ (Class)processingValueClass;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValues:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (id)initWithValues:(id)a0 identity:(id)a1;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
