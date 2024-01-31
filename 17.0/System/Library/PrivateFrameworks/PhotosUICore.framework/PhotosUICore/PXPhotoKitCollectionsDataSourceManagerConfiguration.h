@class PHCollectionList, PHFetchResult, NSPredicate;

@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject

@property BOOL shouldIgnoreLibraryChanges;
@property (readonly) PHCollectionList *collectionList;
@property (readonly) PHFetchResult *collectionsFetchResult;
@property (nonatomic) BOOL separateSectionsForSmartAndUserCollections;
@property (nonatomic) BOOL includePeopleAlbum;
@property (nonatomic) BOOL skipKeyAssetFetches;
@property (nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums;
@property (nonatomic) BOOL skipAssetFetches;
@property (nonatomic) BOOL skipSyndicatedAssetFetches;
@property (nonatomic) BOOL updateKeyAssetFetchesInBackground;
@property (retain, nonatomic) NSPredicate *assetsFilterPredicate;
@property (nonatomic) unsigned long long assetTypesToInclude;
@property (nonatomic) unsigned long long collectionTypesToInclude;
@property (nonatomic) BOOL shouldExcludePrivacySensitiveAlbums;
@property (nonatomic) BOOL simulateNonIncrementalChanges;
@property (nonatomic) long long pausedChangeDetailsBufferLength;

+ (id)_generatePredicateForAssetTypesToInclude:(unsigned long long)a0;

- (BOOL)isRootFolder;
- (id)init;
- (id)initWithCollectionList:(id)a0;
- (void)setIsRootFolder:(BOOL)a0;
- (id)newConfigurationWithCollectionList:(id)a0;
- (id)newConfigurationWithCollectionsFetchResult:(id)a0;
- (id)customFetchOptionsForCollection:(id)a0;
- (id)_newConfigurationWithCollectionList:(id)a0 collectionsFetchResult:(id)a1;
- (id)initWithCollectionList:(id)a0 collectionsFetchResult:(id)a1;
- (BOOL)_shouldSupportSyndicatedAssetFetches:(id)a0;
- (void).cxx_destruct;
- (id)initWithCollectionsFetchResult:(id)a0;

@end
