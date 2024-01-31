@class NSObject, CKDProgressTracker, NSError, CKRecord, NSMutableArray;
@protocol OS_dispatch_group;

@interface CKDRecordDownloadTask : NSObject

@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *assetsToDownload;
@property (retain, nonatomic) NSMutableArray *assetsToDownloadInMemory;
@property (retain, nonatomic) NSMutableArray *packageIndexSets;
@property (retain, nonatomic) NSMutableArray *assetURLInfosToFillOut;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) CKDProgressTracker *progressTracker;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;

- (void).cxx_destruct;
- (void)didCompleteTaskWithError:(id)a0;
- (void)didDownloadAsset:(id)a0 error:(id)a1;
- (void)didFillOutURLInfo:(id)a0 error:(id)a1;
- (id)initWithRecord:(id)a0 trackProgress:(BOOL)a1 assetsToDownload:(id)a2 assetsToDownloadInMemory:(id)a3 packageIndexSets:(id)a4 assetURLInfosToFillOut:(id)a5;

@end
