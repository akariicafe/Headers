@class NSDictionary;

@interface CEMAnyPayload : CEMPayloadBase

@property (copy) NSDictionary *payloadKeys;

+ (id)buildFromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
