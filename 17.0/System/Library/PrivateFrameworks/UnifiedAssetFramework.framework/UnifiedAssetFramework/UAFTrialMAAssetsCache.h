@interface UAFTrialMAAssetsCache : NSObject

+ (void)invalidateCache;
+ (BOOL)checkForAssetTypePath:(id)a0;
+ (id)getFactor:(id)a0 asRoot:(BOOL)a1 assetType:(id)a2 matchingAttribute:(id)a3 attributeValue:(id)a4;
+ (void)initCache;
+ (id)lookupStringForFactor:(id)a0 asRoot:(BOOL)a1 matchingAttribute:(id)a2 attributeValue:(id)a3;
+ (id)queryFactor:(id)a0 asRoot:(BOOL)a1 assetType:(id)a2 matchingAttribute:(id)a3 attributeValue:(id)a4;

@end
