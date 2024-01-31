@class NSSet, NSString, NSArray, NSNumber;

@interface CEMAssetBaseReference : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadDataURL;
@property (copy, nonatomic) NSString *payloadContentType;
@property (copy, nonatomic) NSNumber *payloadSize;
@property (copy, nonatomic) NSString *payloadHashSHA256;
@property (copy, nonatomic) NSArray *payloadCertificatePinningIdentifiers;

+ (id)buildRequiredOnlyWithDataURL:(id)a0 withContentType:(id)a1 withSize:(id)a2 withHashSHA256:(id)a3;
+ (id)buildWithDataURL:(id)a0 withContentType:(id)a1 withSize:(id)a2 withHashSHA256:(id)a3 withCertificatePinningIdentifiers:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
