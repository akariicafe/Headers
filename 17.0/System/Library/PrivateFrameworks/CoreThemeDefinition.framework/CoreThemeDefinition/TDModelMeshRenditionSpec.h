@class NSOrderedSet;

@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec

@property (retain, nonatomic) NSOrderedSet *submeshes;

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)processSubMesh:(id)a0 withAssetSubmeshIndex:(unsigned int *)a1 assetKeySpec:(id)a2 inDocument:(id)a3;

@end
