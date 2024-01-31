@class NSString, NSMutableDictionary;

@interface IMDMomentShareManager : NSObject <PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) NSMutableDictionary *shareURLsToContexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)_acceptMomentShare:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_clearCMMTransfersForCMMMessage:(id)a0;
+ (id)_copiedFileURLFromAssetExportFileURLs:(id)a0 transferGUID:(id)a1 error:(id *)a2;
+ (id)_copyItemAtURL:(id)a0 toTemporaryDirectoryWithName:(id)a1 isDirectory:(BOOL)a2 error:(id *)a3;
+ (id)_fetchResultForCuratedOrFirstForMomentShare:(id)a0 outFetchType:(long long *)a1;
+ (id)_fileTransferForAssetUUID:(id)a0 forMessage:(id)a1 momentShare:(id)a2 atIndex:(unsigned long long)a3 ofTotal:(unsigned long long)a4;
+ (id)_generateTransfersForAssetUUIDs:(id)a0 forMessage:(id)a1 inChat:(id)a2 momentShare:(id)a3;
+ (id)_loadCMMTransfersForMessage:(id)a0;
+ (void)_requestResourceFileURLsForAsset:(id)a0 fileTransfer:(id)a1 completionHandler:(id /* block */)a2;
+ (long long)_targetCountForContext:(id)a0;
+ (void)fetchMomentShareFromShareURL:(id)a0 forMessage:(id)a1 completionHandler:(id /* block */)a2;

- (id)init;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_acceptMomentShareIfNecessaryForContext:(id)a0 isRetry:(BOOL)a1;
- (id)_assetUUIDToUnfinishedTransferMapFromTransfers:(id)a0;
- (id)_contextForMomentShareURL:(id)a0 forMessage:(id)a1 inChat:(id)a2 createIfNeeded:(BOOL)a3;
- (void)_fetchAssetsForAcceptedMomentShareWithContext:(id)a0;
- (void)_generateTransfersForContext:(id)a0;
- (void)_handleIngestionFailureForContext:(id)a0;
- (void)_handleMomentShareFetchForContext:(id)a0 momentShare:(id)a1 error:(id)a2;
- (void)_handleResourceRequestForContext:(id)a0 asset:(id)a1 transfer:(id)a2 didCompleteWithFileURL:(id)a3 error:(id)a4;
- (void)_persistAttachmentAtFileURL:(id)a0 forFileTransfer:(id)a1;
- (void)_removeFinishedIngestionContext:(id)a0;
- (void)_startAssetExportForContext:(id)a0;
- (void)_transitionToCompletedStateForContext:(id)a0;
- (void)_transitionToFetchingMomentShareForContext:(id)a0;
- (void)_transitionToGenerateTransfersStateForContextIfNecessary:(id)a0;
- (void)_transitionToWaitingForAssetsForContext:(id)a0;
- (void)_updateContext:(id)a0 withChange:(id)a1;
- (void)_updatePendingTransferMapForContext:(id)a0 completedTransfer:(id)a1;
- (BOOL)messageHasUnfinishedTransfers:(id)a0;
- (void)regenerateTransfersForMessage:(id)a0 inChat:(id)a1 addingAssetWithUUID:(id)a2;
- (void)registerAndAcceptMomentShareForMessage:(id)a0 inChat:(id)a1 resetAssetTransfers:(BOOL)a2;

@end
