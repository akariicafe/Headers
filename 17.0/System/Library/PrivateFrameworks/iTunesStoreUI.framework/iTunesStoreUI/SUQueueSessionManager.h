@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SUQueueSessionManager : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_downloadManagers;
    NSMutableArray *_preorderManagers;
}

- (id)init;
- (void)dealloc;
- (void)_endQueueSession:(id)a0 fromArray:(id)a1;
- (id)_queueSessionWithDownloadKinds:(id)a0 fromArray:(id)a1;
- (id)_queueSessionWithManagerOptions:(id)a0 fromArray:(id)a1;
- (id)_queueSessionWithQueue:(id)a0 fromArray:(id)a1;
- (id)beginDownloadManagerSessionForDownloadKind:(id)a0;
- (id)beginDownloadManagerSessionWithDownloadKinds:(id)a0;
- (id)beginDownloadManagerSessionWithManagerOptions:(id)a0;
- (id)beginPreorderManagerSessionWithItemKinds:(id)a0;
- (void)endDownloadManagerSessionForManager:(id)a0;
- (void)endPreorderManagerSessionWithManager:(id)a0;

@end
