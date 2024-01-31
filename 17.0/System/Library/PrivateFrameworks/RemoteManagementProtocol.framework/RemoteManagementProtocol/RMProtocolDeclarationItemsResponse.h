@class NSString, RMProtocolDeclarationItemsResponse_Declarations;

@interface RMProtocolDeclarationItemsResponse : RMModelPayloadBase

@property (copy, nonatomic) RMProtocolDeclarationItemsResponse_Declarations *responseDeclarations;
@property (copy, nonatomic) NSString *responseDeclarationsToken;

+ (id)requestWithDeclarations:(id)a0 declarationsToken:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
