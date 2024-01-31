@interface AEMutableAssetPackage : AEAssetPackage

- (id)initWithAssetIdentifier:(id)a0;
- (void)setMediaOrigin:(long long)a0;
- (id)_copyMetadataFromDisplayAsset:(id)a0;
- (void)addSidecarEntriesFromDictionary:(id)a0;
- (void)beginSupressingLivePhoto;
- (void)endSuppressingLivePhoto;
- (void)expressURLForType:(id)a0;
- (void)removeSidecarObjectForKey:(id)a0;
- (void)removeURLForType:(id)a0;
- (void)replaceURLForType:(id)a0 withURL:(id)a1;
- (void)setSidecarObject:(id)a0 forKey:(id)a1;
- (void)storeMetadataFromPHAsset:(id)a0 imageURL:(id)a1 adjustmentURL:(id)a2;
- (void)storeMetadataFromReviewAsset:(id)a0;
- (void)storeURL:(id)a0 forType:(id)a1;
- (void)suppressURLForType:(id)a0;

@end
