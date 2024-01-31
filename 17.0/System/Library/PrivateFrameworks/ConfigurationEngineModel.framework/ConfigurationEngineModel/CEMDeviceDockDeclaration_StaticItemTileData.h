@class CEMAnyPayload, NSSet, NSString, NSNumber;

@interface CEMDeviceDockDeclaration_StaticItemTileData : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadLabel;
@property (copy, nonatomic) NSString *payloadUrl;
@property (copy, nonatomic) NSNumber *payloadFileType;
@property (copy, nonatomic) CEMAnyPayload *payloadFileData;

+ (id)buildRequiredOnlyWithLabel:(id)a0 withFileType:(id)a1;
+ (id)buildWithLabel:(id)a0 withUrl:(id)a1 withFileType:(id)a2 withFileData:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
