@class NSSet;

@interface TDAssetPackDistiller : TDDistiller

@property (retain, nonatomic) NSSet *assetPackMap;

- (void)dealloc;
- (id)assetPackForTags:(id)a0;
- (BOOL)assetStoreWriteToDisk;
- (id)initWithDocument:(id)a0 outputPath:(id)a1 versionString:(id)a2 usingAssetPackMapping:(id)a3 attemptIncremental:(BOOL)a4;
- (void)removeRenditionsFromAssetStoreWithKey:(id)a0;
- (BOOL)setAsset:(id)a0 withKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1 fromRenditionSpec:(id)a2;
- (void)setAssetColorSpaceID:(unsigned int)a0;
- (void)setAssetSchemaVersion:(unsigned int)a0;
- (void)setAssetStorageVersion:(unsigned int)a0;
- (void)setAssetStorageVersionString:(const char *)a0;
- (void)setAssetStoreAssociatedChecksum:(unsigned int)a0;
- (void)setAssetStoreKeyFormatData:(id)a0;
- (void)setAssetStoreKeySemantics:(int)a0;
- (void)setAssetStoreRenditionCount:(unsigned int)a0;
- (void)setAssetStoreUuid:(id)a0;

@end
