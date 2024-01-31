@class NSString, PLCloudMaster, CPLScopedIdentifier, NSDate, PLManagedAsset;

@interface PLCloudResource : PLManagedObject

@property (retain, nonatomic) NSString *assetUuid;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSString *fingerprint;
@property (nonatomic) long long height;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL isLocallyAvailable;
@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (retain, nonatomic) NSDate *lastOnDemandDownloadDate;
@property (retain, nonatomic) NSDate *lastPrefetchDate;
@property (nonatomic) short prefetchCount;
@property (retain, nonatomic) NSDate *prunedAt;
@property (nonatomic) int type;
@property (nonatomic) int sourceType;
@property (retain, nonatomic) NSString *uniformTypeIdentifier;
@property (nonatomic) long long width;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (retain, nonatomic) PLCloudMaster *cloudMaster;

+ (id)entityName;
+ (unsigned long long)bytesForAllResourcesInLibrary:(id)a0;
+ (void)_copyResourceFileFrom:(id)a0 to:(id)a1;
+ (BOOL)_countOfLocalCloudResourcesOfType:(unsigned long long)a0 inManagedObjectContext:(id)a1 forMediumSized:(BOOL)a2 localCount:(unsigned long long *)a3 unavailableCount:(unsigned long long *)a4 error:(id *)a5;
+ (id)assetUUIDToCloudResourcesForCloudMaster:(id)a0;
+ (id)cloudResourceForResourceType:(unsigned long long)a0 forAssetUuid:(id)a1 forCloudMaster:(id)a2;
+ (id)cloudResourcesForResourceType:(unsigned long long)a0 forCloudMaster:(id)a1;
+ (BOOL)countOfLocalCloudResourcesOfType:(unsigned long long)a0 inManagedObjectContext:(id)a1 localCount:(unsigned long long *)a2 unavailableCount:(unsigned long long *)a3 error:(id *)a4;
+ (BOOL)countOfMediumOriginalLocalCloudResourcesInManagedObjectContext:(id)a0 localCount:(unsigned long long *)a1 unavailableCount:(unsigned long long *)a2 error:(id *)a3;
+ (id)duplicateCloudResource:(id)a0 forAsset:(id)a1 withFilePath:(id)a2 inManagedObjectContext:(id)a3;
+ (id)insertIntoPhotoLibrary:(id)a0 forAsset:(id)a1 withCPLResource:(id)a2 adjusted:(BOOL)a3 withCreationDate:(id)a4;
+ (id)legacyCloudResourceForResourceType:(unsigned long long)a0 forAsset:(id)a1;
+ (BOOL)legacyCreateNewResourcesIn:(id)a0 inManagedObjectContext:(id)a1 forAsset:(id)a2;
+ (id)nonLocalResourcesInManagedObjectContext:(id)a0 forAssetUUIDs:(id)a1 cplResourceTypes:(id)a2;
+ (void)resetPrefetchStateForResourcesWithResourceType:(long long)a0 itemIdentifiers:(id)a1 inLibrary:(id)a2;
+ (id)validatedExternalResourceFromCloudResource:(id)a0 asset:(id)a1;
+ (id)validatedExternalResourcesUsingLegacyCloudResourcesFromAssetWithCloudMaster:(id)a0;

- (void)prepareForDeletion;
- (void)setPrefetchCount:(short)a0;
- (void)setPrunedAt:(id)a0;
- (id)description;
- (void)setLastPrefetchDate:(id)a0;
- (id)cplResourceIncludeFile:(BOOL)a0;
- (void)_duplicatePropertiesFromCloudResource:(id)a0 withFilePath:(id)a1 forAssetUuid:(id)a2;
- (void)applyPropertiesFromCloudResource:(id)a0;
- (void)repairCloudPlaceholderKindForVideoAsset:(id)a0;
- (void)setIsLocallyAvailable:(BOOL)a0;

@end
