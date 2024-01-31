@class NSSet, CEMDeviceDockDeclaration_StaticItemTileData, NSString;

@interface CEMDeviceDockDeclaration_StaticItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) CEMDeviceDockDeclaration_StaticItemTileData *payloadTileData;
@property (copy, nonatomic) NSString *payloadTileType;

+ (id)buildWithTileData:(id)a0 withTileType:(id)a1;
+ (id)buildRequiredOnlyWithTileData:(id)a0 withTileType:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
