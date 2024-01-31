@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration : MPLibraryKeepLocalStatusObserverConfiguration

@property (nonatomic, getter=isCollectionType) BOOL collectionType;
@property (nonatomic) long long managedStatus;
@property (nonatomic) BOOL hasNonPurgeableAsset;
@property (nonatomic, getter=isStoreRedownloadable) BOOL storeRedownloadable;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
