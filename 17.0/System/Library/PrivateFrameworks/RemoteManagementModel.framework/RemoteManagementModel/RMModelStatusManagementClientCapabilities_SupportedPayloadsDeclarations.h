@class NSSet, NSArray;

@interface RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSArray *statusActivations;
@property (copy, nonatomic) NSArray *statusAssets;
@property (copy, nonatomic) NSArray *statusConfigurations;
@property (copy, nonatomic) NSArray *statusManagement;

+ (id)buildRequiredOnly;
+ (id)buildWithActivations:(id)a0 assets:(id)a1 configurations:(id)a2 management:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
