@class NSString, NSMutableDictionary, IMDAccountController;

@interface IMDMessageHistoryIDSTransactionLogSyncTask : NSObject <IMDMessageHistorySyncTask> {
    NSString *_className;
}

@property (retain, nonatomic) IMDAccountController *accountController;
@property (retain, nonatomic) NSMutableDictionary *taskGroupedByServiceName;
@property (copy, nonatomic) id /* block */ syncTaskCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id /* block */)_createKnownRecordBlock;
- (id /* block */)_createProcessBatchBlockWithServiceSession:(id)a0;
- (id /* block */)_createSyncCompletionBlockForServiceSession:(id)a0;
- (void)_setupAndBeginSync;
- (id)initWithAccountController:(id)a0;
- (void)startSyncTask:(id /* block */)a0;
- (unsigned long long)syncTaskType;

@end
