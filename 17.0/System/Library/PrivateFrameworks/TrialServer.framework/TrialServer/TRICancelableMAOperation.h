@class _PASLock;

@interface TRICancelableMAOperation : NSObject <TRIFetchOpCanceling> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) BOOL isCanceled;

- (void)setCurrentAsset:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)addSemaphore:(id)a0;

@end
