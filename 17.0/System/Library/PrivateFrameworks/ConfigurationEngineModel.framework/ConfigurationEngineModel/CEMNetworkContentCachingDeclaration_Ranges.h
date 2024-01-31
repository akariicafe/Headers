@class NSSet, NSString;

@interface CEMNetworkContentCachingDeclaration_Ranges : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSString *payloadFirst;
@property (copy, nonatomic) NSString *payloadLast;

+ (id)buildRequiredOnlyWithFirst:(id)a0 withLast:(id)a1;
+ (id)buildWithType:(id)a0 withFirst:(id)a1 withLast:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
