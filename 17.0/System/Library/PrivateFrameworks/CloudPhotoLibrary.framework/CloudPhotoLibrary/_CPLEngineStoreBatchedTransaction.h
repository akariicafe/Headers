@class CPLTransaction;

@interface _CPLEngineStoreBatchedTransaction : NSObject {
    CPLTransaction *_dirty;
}

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_releaseDirty;

@end
