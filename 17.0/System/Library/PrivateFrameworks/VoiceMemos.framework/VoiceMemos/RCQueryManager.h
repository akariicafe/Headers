@class NSArray;

@interface RCQueryManager : NSObject

@property (class, readonly, nonatomic) NSArray *defaultSortDescriptors;
@property (class, readonly, nonatomic) NSArray *defaultFetchedProperties;

+ (id)_defaultFolderFetchRequest;
+ (id)recordingsForFileNameFetchRequest:(id)a0;
+ (id)recordingsNeedingAssetExportFetchRequest;
+ (id)recordingsWithUniqueIDsFetchRequest:(id)a0;
+ (id)deletedRecordingsFetchRequest;
+ (id)customLabelSearchPredicateWithString:(id)a0;
+ (id)foldersWithUUIDFetchRequest:(id)a0;
+ (id)_defaultRecordingsFetchRequest:(id)a0;
+ (id)allFoldersForSortingFetchRequest;
+ (id)clearTransientFlagsBatchUpdateRequest;
+ (id)_recordingsWithPredicateFormat:(id)a0;
+ (id)recordingMatchingNameCaseInsensitiveFetchRequest:(id)a0;
+ (id)visibleRecordingsFetchRequest;
+ (id)_foldersWithPredicateFormat:(id)a0;
+ (id)defaultResidentRecordingsFetchedProperties;
+ (id)_defaultRecordingsFetchRequest;
+ (id)foldersWithhRankFetchRequest:(long long)a0;
+ (id)deletedRecordingsPredicate;
+ (id)favoritePredicate;
+ (id)recordingsInFolderFetchRequest:(id)a0;
+ (id)musicMemoPredicate;
+ (id)playableRecordingsFetchRequestWithSubPredicate:(id)a0;
+ (id)encryptedFieldsMigrationsFetchRequest;
+ (id)allDeletedRecordingsFetchRequest;
+ (id)recordingsWithTitleFetchRequest:(id)a0;
+ (id)foldersWithNameFetchRequest:(id)a0 searchOption:(int)a1;
+ (id)recordingsWithNilEncryptedTitleOrCustomLabelFetchRequest;
+ (id)allCustomLabelsFetchRequest;
+ (id)evictionDateBeforeFetchRequest:(id)a0;
+ (id)playablePredicate;
+ (id)recordingsWithUniqueIDFetchRequest:(id)a0;
+ (id)recordingsWithNilAudioFuturesFetchRequest;
+ (id)recordingsInFolderPredicate:(id)a0;
+ (id)cacheDeletedOnWatchPredicate;
+ (id)userDefinedFoldersFetchRequest;
+ (id)watchOSPredicate;

@end
