@class NSString, NSSet, NSData, NSDate;

@interface PLSuggestion : PLManagedObject <PLCloudDeletable, PLBackgroundUpdatesSharingComposition>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short subtype;
@property (nonatomic) unsigned short state;
@property (nonatomic) unsigned short notificationState;
@property (nonatomic) short version;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *activationDate;
@property (retain, nonatomic) NSDate *relevantUntilDate;
@property (retain, nonatomic) NSDate *expungeDate;
@property (retain, nonatomic) NSData *actionData;
@property (retain, nonatomic) NSData *featuresData;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *suggestionContext;
@property (retain, nonatomic) NSSet *keyAssets;
@property (retain, nonatomic) NSSet *representativeAssets;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (nonatomic) unsigned short featuredState;
@property (nonatomic) long long availableFeatures;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) short sharingComposition;

+ (id)predicateForPrivateOnlyCollectionsWithinSubset:(id)a0;
+ (id)entityName;
+ (unsigned long long)deleteSuggestionsWithObjectIDs:(id)a0 inManagedObjectContext:(id)a1;
+ (id)suggestionsToPrefetchInManagedObjectContext:(id)a0;
+ (id)predicateForSharedOnlyCollectionsWithinSubset:(id)a0;
+ (id)suggestionWithUUID:(id)a0 inPhotoLibrary:(id)a1;
+ (id)suggestionObjectIDsContainingAsset:(id)a0;
+ (id)suggestionsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)predicateForAllMomentsFromRepresentativeAssetsInSuggestion:(id)a0 managedObjectContext:(id)a1;
+ (short)_calculateSharingCompositionForSuggestion:(id)a0;
+ (id)suggestionsToUploadInPhotoLibrary:(id)a0 limit:(long long)a1;
+ (unsigned long long)_deleteSuggestionsMatchingPredicate:(id)a0 inManagedObjectContext:(id)a1;
+ (id)suggestionsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(long long)a2 inManagedObjectContext:(id)a3;
+ (id)_syncablePredicate;
+ (unsigned long long)deletePendingSuggestionsCreatedBefore:(id)a0 withTypes:(id)a1 andRejectedAssetsBySuggestionType:(id)a2 inManagedObjectContext:(id)a3;
+ (id)predicateForAllAssetsInSuggestion:(id)a0 managedObjectContext:(id)a1;
+ (BOOL)_suggestionSubtypeAllowedToContainSyndicatedAssets:(unsigned short)a0;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1;
+ (unsigned long long)deleteAllMomentShareSuggestionsInManagedObjectContext:(id)a0;
+ (void)resetCloudStateInPhotoLibrary:(id)a0;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (id)suggestionWithUUID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)_representativeAssetIDsInSuggestion:(id)a0 managedObjectContext:(id)a1;

- (void)willSave;
- (void)delete;
- (void)prepareForDeletion;
- (BOOL)supportsCloudUpload;
- (BOOL)isSyncableChange;
- (BOOL)isPending;
- (id)cplFullRecord;
- (short)sharingComposition;
- (BOOL)isEmpty;
- (void)updateCachedCounts:(id)a0;
- (void)_recalculateSharingCompositionIfNeeded;
- (BOOL)_sharingCompositionNeedsUpdate;
- (id)cplSuggestionChange;
- (id)mutableKeyAssets;
- (id)mutableRepresentativeAssets;
- (void)removeRepresentativeAsset:(id)a0;
- (void)replaceKeyAsset:(id)a0;
- (void)updateStartAndEndDate;
- (BOOL)updateWithCPLSuggestionChange:(id)a0 inPhotoLibrary:(id)a1;

@end
