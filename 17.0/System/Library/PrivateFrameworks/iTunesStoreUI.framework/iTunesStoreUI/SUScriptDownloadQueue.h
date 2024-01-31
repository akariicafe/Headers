@class NSArray, NSString, SUDownloadManager, SSPreorderManager, SUClientInterface;

@interface SUScriptDownloadQueue : SUScriptObject <SSDownloadManagerObserver, SSPreorderManagerObserver> {
    SUClientInterface *_clientInterface;
    SUDownloadManager *_downloadManager;
    SSPreorderManager *_preorderManager;
    NSString *_queueType;
}

@property (readonly) NSArray *downloads;
@property (readonly) NSString *queueType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (void)downloadManager:(id)a0 downloadStatesDidChange:(id)a1;
- (void)checkQueue;
- (void)downloadManagerDownloadsDidChange:(id)a0;
- (id)_className;
- (id)attributeKeys;
- (void)finalizeForWebScript;
- (void)preorderManagerPreordersDidChange:(id)a0;
- (id)scriptAttributeKeys;
- (void)_tearDownQueues;
- (void)_setupManagersWithClientInterface:(id)a0 queueType:(id)a1;
- (id)initWithQueueType:(id)a0 clientInterface:(id)a1;

@end
