@class NSSet, NSString;

@interface RMProtocolDeclarationItemsResponse_DeclarationItem : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedResponseKeys;

@property (copy, nonatomic) NSString *responseIdentifier;
@property (copy, nonatomic) NSString *responseServerToken;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 serverToken:(id)a1;
+ (id)buildWithIdentifier:(id)a0 serverToken:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
