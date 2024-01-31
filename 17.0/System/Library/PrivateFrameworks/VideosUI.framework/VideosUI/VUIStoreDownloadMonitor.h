@class SSDownload, NSString, SSDownloadManager, TVPStateMachine, NSMutableArray;

@interface VUIStoreDownloadMonitor : NSObject <SSDownloadManagerObserver>

@property (retain, nonatomic) SSDownloadManager *downloadManager;
@property (retain, nonatomic) SSDownload *download;
@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)downloadManager:(id)a0 downloadStatesDidChange:(id)a1;
- (void).cxx_destruct;
- (void)downloadManagerDownloadsDidChange:(id)a0;
- (void)_registerStateMachineHandlers;
- (id)initWithDownload:(id)a0 downloadManager:(id)a1;
- (void)waitForDownloadToBecomePlayableWithCompletion:(id /* block */)a0;

@end
