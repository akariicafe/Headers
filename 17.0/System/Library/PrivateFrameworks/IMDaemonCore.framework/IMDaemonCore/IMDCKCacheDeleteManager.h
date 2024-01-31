@interface IMDCKCacheDeleteManager : NSObject

@property (nonatomic) BOOL alreadyCapturedErrorWithAutoBugCapture;
@property (nonatomic) BOOL allowsWritingToDisk;
@property (nonatomic, getter=isDeviceLowOnDiskSpace) BOOL deviceLowOnDiskSpace;
@property (nonatomic) BOOL isUsingCentralizedModel;
@property BOOL isUpdatingAttachmentFileSizes;

+ (id)sharedInstance;

- (BOOL)canWriteFileOfEstimatedSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;
- (id)init;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)a0;
- (id)_fileTransfersToDelete:(id)a0;
- (void)metricAttachmentsToPurge:(long long)a0 withActivity:(id)a1;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)a0 urgency:(int)a1;
- (BOOL)_shouldFetchNextBatch:(unsigned long long)a0 totalTransfers:(id)a1;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)a0 urgency:(int)a1;
- (void)registerWithCacheDelete;
- (id)_fileTransfersToValidate:(id)a0;
- (long long)_purgeableSpaceGivenUrgency:(int)a0;
- (id)_copyAttachmentRecord:(id)a0;
- (id)_ckUtilitiesSharedInstance;
- (unsigned long long)_indexOfNextBatch:(id)a0 totalTransfers:(id)a1 indexOfTransfers:(unsigned long long)a2;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)a0 diskVolume:(id)a1 urgency:(int)a2 requestedSize:(unsigned long long)a3;
- (BOOL)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)a0;
- (BOOL)canMarkPurgeableIfIsRichLinkForTransferGUID:(id)a0;
- (id)reportAvailableSpaceToBeDeleted:(id)a0 urgency:(int)a1;
- (void)_postTransferInfoOfDeletedTransfers:(id)a0;
- (void)resetAttachmentWatermark;
- (BOOL)isUsingCentralizeCacheDelete;
- (id)_getIndexSetForBatch:(id)a0 indexOfTransfers:(unsigned long long)a1;
- (BOOL)shouldDownloadAssetsOfSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)a0 urgency:(int)a1;
- (void)_cacheDeleteSetUp;
- (void)_fetchTransfersFromCloudKit:(id)a0 indexOfTransfers:(unsigned long long)a1 numberOfBatchesToFetch:(unsigned long long)a2 activity:(id)a3 withCompletion:(id /* block */)a4;
- (void)_fetchTransfersFromCloudKit:(id)a0 withActivity:(id)a1;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)a0 urgency:(int)a1;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)a0;
- (long long)purgeableAttachmentSize;
- (void)__wrapperAroundCacheDeletePurgeNotificationCallback:(id)a0;
- (long long)purgeAttachments:(long long)a0;
- (void)updateAttachmentFileSizesWithActivity:(id)a0;

@end
