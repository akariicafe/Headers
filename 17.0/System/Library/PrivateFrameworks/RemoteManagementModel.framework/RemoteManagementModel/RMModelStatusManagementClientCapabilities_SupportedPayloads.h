@class NSSet, NSArray, RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations;

@interface RMModelStatusManagementClientCapabilities_SupportedPayloads : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations *statusDeclarations;
@property (copy, nonatomic) NSArray *statusStatusItems;

+ (id)buildRequiredOnlyWithDeclarations:(id)a0 statusItems:(id)a1;
+ (id)buildWithDeclarations:(id)a0 statusItems:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
