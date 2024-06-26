@class NSString, NSMutableDictionary, NSMutableSet, NSTimer, NSMutableArray;

@interface IMDFileTransferCenter : NSObject

@property (retain, nonatomic) NSString *contextStamp;
@property (retain, nonatomic) NSMutableDictionary *guidToTransferMap;
@property (retain, nonatomic) NSMutableSet *activeTransfers;
@property (retain, nonatomic) NSTimer *transferTimer;
@property (retain, nonatomic) NSMutableArray *transferringTransfers;
@property (retain, nonatomic) NSMutableSet *activeHubbleRequestedTransfers;

+ (id)sharedInstance;
+ (id)localFileURLRetrievalErrorWithReason:(long long)a0 description:(id)a1;
+ (id)localFileURLRetrievalErrorWithReason:(long long)a0 underlyingReason:(long long)a1 description:(id)a2;
+ (id)fileTransferErrorWithReason:(long long)a0 description:(id)a1;

- (id)_getNewFileTransferForStoredAttachmentPayloadDataWithTransferGUID:(id)a0 messageGUID:(id)a1;
- (void)failTransfer:(id)a0 error:(id)a1;
- (id)updateTransfersWithCKRecord:(id)a0 recordWasFetched:(BOOL)a1 downloadAsset:(BOOL *)a2;
- (void)startFinalizingTransfer:(id)a0;
- (id)_progressForTransferGUID:(id)a0 allowCreate:(BOOL)a1 path:(id)a2;
- (id)_removeWrapperForTransfer:(id)a0;
- (void)addDefaultGatekeeperPropertiesToDirectory:(id)a0;
- (id)init;
- (void)postHubbleDownloadFinishedIfNeededForTransfer:(id)a0;
- (id)guidForNewOutgoingTransferWithLocalURL:(id)a0;
- (void)_updateTransferGUID:(id)a0 toGUID:(id)a1;
- (void)resetTransferAndPostError:(id)a0 error:(id)a1;
- (id)guidForNewIncomingTransferWithFilename:(id)a0 isDirectory:(BOOL)a1 totalBytes:(unsigned long long)a2 hfsType:(unsigned int)a3 hfsCreator:(unsigned int)a4 hfsFlags:(unsigned short)a5;
- (void)_addActiveTransfer:(id)a0;
- (id)guidsForStoredAttachmentPayloadDataURLs:(id)a0 messageGUID:(id)a1;
- (void)updateTransfer:(id)a0;
- (void)_clearProgressForTransferGUID:(id)a0;
- (BOOL)markAttachment:(id)a0 sender:(id)a1 recipients:(id)a2 isIncoming:(BOOL)a3;
- (id)guidForNewOutgoingTransferWithFilename:(id)a0 isDirectory:(BOOL)a1 totalBytes:(unsigned long long)a2 hfsType:(unsigned int)a3 hfsCreator:(unsigned int)a4 hfsFlags:(unsigned short)a5;
- (void)resetSyncStateForRecord:(id)a0 toState:(long long)a1;
- (id)_dictionaryRepresentationsForFileTransfers:(id)a0 toSave:(BOOL)a1;
- (void)updateTransfer:(id)a0 currentBytes:(unsigned long long)a1 totalBytes:(unsigned long long)a2;
- (void)_completeHubbleDownloadForTransfer:(id)a0;
- (void)makeNewIncomingTransferWithGUID:(id)a0 filename:(id)a1 isDirectory:(BOOL)a2 totalBytes:(unsigned long long)a3 hfsType:(unsigned int)a4 hfsCreator:(unsigned int)a5 hfsFlags:(unsigned short)a6;
- (void)assignTransfer:(id)a0 toAccount:(id)a1 otherPerson:(id)a2;
- (void)_handleFileTransfers:(id)a0 autoRename:(BOOL)a1 overwrite:(BOOL)a2 options:(long long)a3 postNotification:(BOOL)a4;
- (void)_postHubbleDownloadFailedForTransfer:(id)a0 error:(id)a1;
- (id)guidsForStoredAttachmentBlastDoorPayloadData:(id)a0 messageGUID:(id)a1;
- (void)_removeHubbleRequestedTransfer:(id)a0;
- (void)_handleFileTransfer:(id)a0 updatedWithProperties:(id)a1;
- (void)_transferTimerTick:(id)a0;
- (id)_attachmentStoreSharedInstance;
- (void)deleteTransferForGUID:(id)a0;
- (void)addTransfer:(id)a0 forGUID:(id)a1;
- (void)markTransferAsNotSyncedSuccessfully:(id)a0;
- (BOOL)_hasActiveTransferWithGUID:(id)a0;
- (void)resetTransfer:(id)a0 andPostReason:(long long)a1;
- (id)_messageStoreSharedInstance;
- (void)postHubbleDownloadFailedIfNeededForTransfer:(id)a0 error:(id)a1;
- (void)setRecoverableErrorForTransfer:(id)a0 error:(long long)a1;
- (void)_handleFileTransfer:(id)a0 createdWithProperties:(id)a1 withAuditToken:(struct { unsigned int x0[8]; })a2;
- (id)transferForGUID:(id)a0;
- (void)acceptTransfer:(id)a0 path:(id)a1;
- (void)failTransferPreviewGeneration:(id)a0;
- (BOOL)_shouldDownloadAssetForTransfer:(id)a0 forMessageItem:(id)a1;
- (id)_transcodeControllerSharedInstance;
- (void).cxx_destruct;
- (void)removeFinishedTransfers;
- (void)updateTransferAsWaitingForAccept:(id)a0;
- (void)markTransferAsNotSuccessfullyDownloadedFromCloud:(id)a0;
- (void)_removeActiveTransfer:(id)a0;
- (void)_removeTransferringTransfer:(id)a0;
- (void)_updateContextStamp;
- (void)updateTransferGUID:(id)a0 toGUID:(id)a1;
- (id)_createWrapperForTransfer:(id)a0;
- (void)_handleFileTransferRemoved:(id)a0;
- (void)_addTransferringTransfer:(id)a0;
- (id)_allFileTransfers;
- (void)_handleFileTransfer:(id)a0 acceptedWithPath:(id)a1 autoRename:(BOOL)a2 overwrite:(BOOL)a3 options:(long long)a4 postNotification:(BOOL)a5;
- (void)_postUpdated:(id)a0;
- (void)makeNewOutgoingTransferWithGUID:(id)a0 filename:(id)a1 isDirectory:(BOOL)a2 totalBytes:(unsigned long long)a3 hfsType:(unsigned int)a4 hfsCreator:(unsigned int)a5 hfsFlags:(unsigned short)a6;
- (void)startTransfer:(id)a0;
- (void)_handleFileTransferStopped:(id)a0;
- (void)broadcastTransfersWithGUIDs:(id)a0 atLocalPaths:(id)a1;
- (void)endTransfer:(id)a0;
- (void)rejectTransfer:(id)a0;
- (struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })_clientPreviewConstraints;
- (void)failTransfer:(id)a0 reason:(long long)a1;
- (void)_addTransfer:(id)a0 forGUID:(id)a1 shouldNotify:(BOOL)a2;
- (void)updateTransfer:(id)a0 withPreviewSize:(id)a1 forConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2;
- (void)_addGatekeeperProperties:(id)a0 toFileAtPath:(id)a1;
- (BOOL)populateLocalURLsForTransfer:(id)a0 fromCKRecord:(id)a1;
- (id)guidsForStoredAttachmentPayloadData:(id)a0 messageGUID:(id)a1;
- (BOOL)registerGUID:(id)a0 forNewOutgoingTransferWithLocalURL:(id)a1;
- (void)_addSpotlightPropertiesFromFileTransfer:(id)a0 toDirectory:(id)a1;
- (void)_addGatekeeperProperties:(id)a0 toDirectory:(id)a1;
- (void)addHubbleRequestedTransfer:(id)a0;
- (void)_completeProgressForTransferGUID:(id)a0;
- (void)removeTransferForGUID:(id)a0;

@end
