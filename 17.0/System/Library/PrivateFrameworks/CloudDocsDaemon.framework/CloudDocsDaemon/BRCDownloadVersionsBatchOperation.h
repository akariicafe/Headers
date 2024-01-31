@class NSMutableDictionary;

@interface BRCDownloadVersionsBatchOperation : BRCTransferBatchOperation {
    NSMutableDictionary *_readers;
}

@property (copy) id /* block */ perDownloadCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)createActivity;
- (void)addDownload:(id)a0;
- (void)cancelReaderID:(id)a0;
- (id)actionPrettyName;
- (void)addReaderID:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSyncContext:(id)a0 forNonLocalVersion:(BOOL)a1;
- (void)mainWithTransfers:(id)a0;
- (void)sendTransferCompletionCallBack:(id)a0 error:(id)a1;
- (id)transferredObjectsPrettyName;

@end
