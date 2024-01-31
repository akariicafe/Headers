@interface BRCDownloadThumbnailsBatchOperation : BRCTransferBatchOperation

@property (copy) id /* block */ perDownloadCompletionBlock;

- (id)initWithSyncContext:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)createActivity;
- (void)addDownload:(id)a0;
- (id)actionPrettyName;
- (void)mainWithTransfers:(id)a0;
- (void)sendTransferCompletionCallBack:(id)a0 error:(id)a1;
- (id)transferredObjectsPrettyName;

@end
