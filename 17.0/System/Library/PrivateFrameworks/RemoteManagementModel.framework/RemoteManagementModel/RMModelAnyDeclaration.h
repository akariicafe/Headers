@class NSDictionary;

@interface RMModelAnyDeclaration : RMModelDeclarationBase

@property (copy, nonatomic) NSDictionary *payload;

+ (id)load:(id)a0 serializationType:(short)a1 error:(id *)a2;
+ (id)buildWithType:(id)a0 identifier:(id)a1 payload:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)declarationClassType;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
