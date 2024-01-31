@class CPLTransaction, NSString, NSThread, CPLEngineWriteTransactionBlocker, NSError, CPLEngineStore, NSMutableArray;

@interface CPLEngineStoreTransaction : NSObject {
    NSThread *_currentThread;
    BOOL _forWrite;
    NSMutableArray *_cleanupBlocks;
    CPLTransaction *_dirty;
}

@property (retain, nonatomic) CPLEngineWriteTransactionBlocker *blocker;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) CPLEngineStore *store;

- (void)dealloc;
- (id)redactedDescription;
- (BOOL)canWrite;
- (void)addCleanupBlock:(id /* block */)a0;
- (BOOL)_forWrite;
- (BOOL)canRead;
- (void)_transactionDidFinish;
- (id)description;
- (void).cxx_destruct;
- (void)_transactionWillBeginOnThread:(id)a0;
- (id)initForWrite:(BOOL)a0 store:(id)a1 identifier:(id)a2 description:(id)a3;
- (void)_releaseDirty;
- (BOOL)do:(id /* block */)a0;

@end
