@class NSString, NSDictionary, NSPersistentHistoryToken, NSDate, NSNumber, NSManagedObjectContext;

@interface PLGlobalValues : NSObject {
    NSManagedObjectContext *_moc;
}

@property (nonatomic) BOOL didImportFileSystemAssets;
@property (nonatomic, getter=isJournalRebuildRequired) BOOL journalRebuildRequired;
@property (readonly, nonatomic) BOOL isRebuildComplete;
@property (nonatomic) BOOL backgroundJobServiceNeedsProcessing;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSDictionary *greenValues;
@property (retain, nonatomic) NSNumber *greenTeaContactsAuthorization;
@property (readonly, nonatomic) unsigned long long libraryCreateOptions;
@property (readonly, nonatomic) NSDate *_deprecated_lastFullIndexSyndicationSyncDate;
@property (retain, nonatomic) NSDate *lastFullIndexSyndicationSyncStartDate;
@property (retain, nonatomic) NSDate *inProgressFullIndexSyndicationSyncDate;
@property (retain, nonatomic) NSDate *lastAttachmentSyndicationSyncDate;
@property (retain, nonatomic) NSDate *lastChatSyndicationSyncDate;
@property (retain, nonatomic) NSDate *lastDeleteSyndicationSyncDate;
@property (retain, nonatomic) NSDate *syndicationStartDate;
@property (retain, nonatomic) NSPersistentHistoryToken *lastGuestAssetSyncToken;
@property (copy, nonatomic) NSString *lastGuestAssetSyncTargetLibraryPath;
@property (retain, nonatomic) NSPersistentHistoryToken *lastPersonSyncToken;
@property (copy, nonatomic) NSString *lastPersonSyncSourceLibraryPath;
@property (retain, nonatomic) NSDate *syndicationPrefetchDownloadThrottlingDate;
@property (nonatomic) double syndicationSyncRangeDenominator;
@property (retain, nonatomic) NSPersistentHistoryToken *lastDuplicateDetectorProcessingToken;
@property (readonly, nonatomic) BOOL isInitialDuplicateDetectorProcessingCompleted;
@property (retain, nonatomic) NSPersistentHistoryToken *lastInitialDuplicateDetectorProcessingCompletedToken;
@property (retain, nonatomic) NSPersistentHistoryToken *lastSharedAssetContainerProcessingToken;
@property (retain, nonatomic) NSString *lockedResourceTransitionAssetUUID;
@property (retain, nonatomic) NSNumber *orphanedSceneClassificationsCount;

+ (void)setJournalRebuildRequired:(BOOL)a0 managedObjectContext:(id)a1;
+ (void)setLibraryCreateOptions:(unsigned long long)a0 managedObjectContext:(id)a1;
+ (void)setSyndicationPrefetchDownloadThrottlingDate:(id)a0 managedObjectContext:(id)a1;

- (BOOL)shouldPrefetchWidgetResources;
- (void)_setRebuildComplete;
- (void)_setDidImportFileSystemAssets:(BOOL)a0;
- (id)_getValueUsingPerformBlockAndWait:(id /* block */)a0;
- (void)setRebuildComplete;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dontImportFileSystemDataIntoDatabase;
- (void)_setValueUsingPerformBlockAndWait:(id /* block */)a0 responsibleCaller:(const char *)a1;
- (id)initWithManagedObjectContext:(id)a0;
- (void)_setBackgroundJobServiceNeedsProcessing:(BOOL)a0;

@end
