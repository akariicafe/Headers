@class BYBuddyDaemonCloudSyncClient, NWPathEvaluator, NSArray, NSString, NSMutableArray, NSProgress, NSObject, DKBackupProvider;
@protocol OS_dispatch_queue;

@interface DKCloudProvider : NSObject <BYClientDaemonCloudSyncProtocol, DKCloudProvider>

@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSArray *backupProviders;
@property (retain, nonatomic) DKBackupProvider *currentBackupProvider;
@property (retain, nonatomic) BYBuddyDaemonCloudSyncClient *cloudSyncClient;
@property (nonatomic) double timeRemaining;
@property (retain, nonatomic) NSProgress *backupProgress;
@property (retain, nonatomic) NSProgress *syncProgress;
@property (retain, nonatomic) NSMutableArray *backupResults;
@property (retain, nonatomic) NSArray *syncErrors;
@property (nonatomic) BOOL notifiedCompletion;
@property (copy, nonatomic) NSObject<OS_dispatch_queue> *progressQueue;
@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRestoring;
- (id)init;
- (void)syncCompletedWithErrors:(id)a0;
- (void).cxx_destruct;
- (void)syncProgress:(double)a0;
- (void)_communicateProgress;
- (void)_startBackupForProvider:(id)a0 remainingProviders:(id)a1 allowExpensiveCellular:(BOOL)a2;
- (void)_startBackupWithProviders:(id)a0 allowExpensiveCellular:(BOOL)a1;
- (void)beginUploadAllowingExpensiveCellular:(BOOL)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)cancelUpload;
- (void)hasDataToUpload:(id /* block */)a0;
- (unsigned long long)isUploadSupportedForCurrentNetwork;

@end
