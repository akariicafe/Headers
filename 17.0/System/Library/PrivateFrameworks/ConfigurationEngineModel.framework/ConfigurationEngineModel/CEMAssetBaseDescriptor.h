@class NSSet, NSString;

@interface CEMAssetBaseDescriptor : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadTitle;
@property (copy, nonatomic) NSString *payloadDescription;

+ (id)buildWithTitle:(id)a0 withDescription:(id)a1;
+ (id)buildRequiredOnlyWithTitle:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
