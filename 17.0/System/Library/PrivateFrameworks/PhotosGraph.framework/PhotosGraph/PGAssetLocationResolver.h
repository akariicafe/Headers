@interface PGAssetLocationResolver : NSObject

+ (id)closestAddressNodeFromMomentNodes:(id)a0 toLocation:(id)a1 withMaximumDistance:(double)a2 allowRemoteLocations:(BOOL)a3;
+ (id)closestAssetLocationForAsset:(id)a0 inAssetCollection:(id)a1;

@end
