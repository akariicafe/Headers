@class NSSet, NSArray;

@interface RMProtocolDeclarationItemsResponse_Declarations : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedResponseKeys;

@property (copy, nonatomic) NSArray *responseActivations;
@property (copy, nonatomic) NSArray *responseConfigurations;
@property (copy, nonatomic) NSArray *responseAssets;
@property (copy, nonatomic) NSArray *responseManagement;

+ (id)buildRequiredOnlyWithActivations:(id)a0 configurations:(id)a1 assets:(id)a2 management:(id)a3;
+ (id)buildWithActivations:(id)a0 configurations:(id)a1 assets:(id)a2 management:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
