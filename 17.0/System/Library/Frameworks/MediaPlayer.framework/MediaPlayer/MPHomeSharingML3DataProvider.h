@class NSMutableDictionary, NSMutableSet, HSHomeSharingLibrary, NSObject;
@protocol OS_dispatch_queue, MPArtworkDataSource;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3 {
    NSMutableDictionary *_tokenDataForDSIDs;
    NSMutableSet *_loadedContainerPIDs;
    NSMutableDictionary *_blocksForLoadingContainerPIDs;
    NSObject<OS_dispatch_queue> *_containerFillQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id<MPArtworkDataSource> _artworkDataSource;
}

@property (readonly, nonatomic) HSHomeSharingLibrary *homeSharingLibrary;
@property (readonly, nonatomic) BOOL isSupportedSharingVersion;
@property (readonly, nonatomic) unsigned int databaseID;

+ (void)endScanningForLibraries;
+ (void)_determineHomeSharingGroupIDWithCompletionHandler:(id /* block */)a0;
+ (id)homeSharingGroupID;
+ (void)beginScanningForLibraries;
+ (BOOL)isScanningForLibraries;

- (void)disconnect;
- (void)dealloc;
- (id)errorResolverForItem:(id)a0;
- (BOOL)requiresAuthentication;
- (id)protectedContentSupportStorageURL;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)hasGeniusMixes;
- (id)name;
- (id)artworkDataSource;
- (BOOL)writable;
- (void)setTokenData:(id)a0 forAuthorizedDSID:(unsigned long long)a1;
- (id)URLForItemDataRequest:(id)a0;
- (void)_fetchTokensForAuthorizedDSIDs;
- (void)_fillContainerForQueryCriteria:(id)a0 completionBlock:(id /* block */)a1;
- (void)_homeSharingGroupIDDidChangeNotification:(id)a0;
- (void)_homeSharingLibraryDidBecomeUnavailable:(id)a0;
- (void)_homeSharingLibraryDidUpdateRevisionNumber:(id)a0;
- (id)_tokenDataForAccountID:(unsigned long long)a0;
- (id)adjustedValueForMPProperty:(id)a0 ofEntity:(id)a1 withDefaultValue:(id)a2;
- (void)connectWithAuthenticationData:(id)a0 completionBlock:(id /* block */)a1 progressHandler:(id /* block */)a2;
- (id)initWithHomeSharingLibrary:(id)a0;
- (id)itemResultSetForQueryCriteria:(id)a0;
- (void)loadQueryCriteria:(id)a0 countOfCollectionsWithCompletionBlock:(id /* block */)a1;
- (void)loadQueryCriteria:(id)a0 countOfItemsWithCompletionBlock:(id /* block */)a1;
- (void)loadQueryCriteria:(id)a0 hasCollectionsWithCompletionBlock:(id /* block */)a1;
- (void)loadQueryCriteria:(id)a0 hasItemsWithCompletionBlock:(id /* block */)a1;
- (void)setRentalPlaybackStartDateForItemID:(unsigned long long)a0;
- (void)setValue:(id)a0 forProperty:(id)a1 ofItemWithIdentifier:(long long)a2 completionBlock:(id /* block */)a3;

@end
