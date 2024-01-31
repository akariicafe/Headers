@class NSSet, NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnServiceException : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadServiceName;
@property (copy, nonatomic) NSString *payloadAction;

+ (id)buildRequiredOnlyWithServiceName:(id)a0 withAction:(id)a1;
+ (id)buildWithServiceName:(id)a0 withAction:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
