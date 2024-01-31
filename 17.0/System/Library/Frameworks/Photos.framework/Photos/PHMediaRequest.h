@class NSString, PHProgressContainerForRetryableRequest, PLProgressFollower, PHAsset, NSMutableArray;
@protocol PHMediaRequestDelegate;

@interface PHMediaRequest : NSObject {
    unsigned long long _numRetries;
    _Atomic BOOL _cancelled;
    NSString *_identifierString;
    NSMutableArray *_progresses;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PHProgressContainerForRetryableRequest *_progressContainer;
    PLProgressFollower *_progressFollower;
}

@property (readonly, weak, nonatomic) id<PHMediaRequestDelegate> delegate;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) unsigned long long requestIndex;
@property (readonly, nonatomic) unsigned long long managerID;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) long long contextType;
@property (nonatomic) unsigned long long signpostID;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isSynchronous) BOOL synchronous;
@property (readonly, nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (readonly, nonatomic) long long downloadIntent;
@property (readonly, nonatomic) long long downloadPriority;
@property (nonatomic) BOOL wantsProgress;

- (void)dealloc;
- (void)prepareForRetry;
- (void).cxx_destruct;
- (void)handleAvailabilityChangeForResource:(id)a0 url:(id)a1 info:(id)a2 error:(id)a3;
- (void)startRequest;
- (void)cancel;
- (id)identifierString;
- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 delegate:(id)a5;
- (id)lazyProgressContainer;
- (void)recordMetricsWithMetricsHandler:(id /* block */)a0;
- (id)sendMakeAvailableRequestForResource:(id)a0 reply:(id /* block */)a1;
- (id)sendResourceRepairRequestForResource:(id)a0 errorCodes:(id)a1 reply:(id /* block */)a2;
- (id)sendResourceRepairRequestWithErrorCodes:(id)a0 reply:(id /* block */)a1;

@end
