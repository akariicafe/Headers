@class TDModelAsset, NSSet;

@interface TDModelRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDModelAsset *asset;
@property (retain, nonatomic) NSSet *childRenditions;
@property (nonatomic) int modelAssetIndex;

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)processMesh:(id)a0 withAssetMeshIndex:(unsigned int *)a1 assetKeySpec:(id)a2 inDocument:(id)a3;
- (void)processModelObjectsInDocument:(id)a0;

@end
