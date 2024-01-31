@interface NanoPhotosCore.AsyncOperation : NSOperation {
    void /* unknown type, empty encoding */ stateQueue;
    void /* unknown type, empty encoding */ _state;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL ready;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;

- (BOOL)isExecuting;
- (BOOL)isReady;
- (id)init;
- (void)main;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;

@end
