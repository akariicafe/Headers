@class NSSet, NSNumber, NSString;

@interface RMModelAccountMailDeclaration_SMIMESigning : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadEnabled;
@property (copy, nonatomic) NSString *payloadIdentityAssetReference;
@property (copy, nonatomic) NSNumber *payloadUserOverrideable;
@property (copy, nonatomic) NSNumber *payloadIdentityUserOverrideable;

+ (id)buildRequiredOnlyWithEnabled:(id)a0;
+ (id)buildWithEnabled:(id)a0 identityAssetReference:(id)a1 userOverrideable:(id)a2 identityUserOverrideable:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
