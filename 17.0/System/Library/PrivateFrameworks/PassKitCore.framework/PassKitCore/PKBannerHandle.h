@class BSServiceConnection, NSString, NSArray, PKBannerHandleState, PKBannerHandleRequest, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, BSServiceConnectionClient;

@interface PKBannerHandle : NSObject <PKBannerService_Client, PKInvalidatable> {
    PKBannerHandleRequest *_request;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_messageTracker;
    NSObject<OS_dispatch_group> *_initialStateUpdateTracker;
    _Atomic BOOL _invalidated;
    BOOL _started;
    BOOL _posted;
    BOOL _detached;
    BOOL _finished;
    PKBannerHandleState *_state;
    id /* block */ _completion;
    BSServiceConnection<BSServiceConnectionClient> *_connection;
    NSArray *_attributes;
}

@property (retain) PKBannerHandleState *state;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createHandleForRequest:(id)a0 queue:(id)a1;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (oneway void)detachWithFinished:(id)a0 reply:(id /* block */)a1;
- (void)displayWithCompletion:(id /* block */)a0;

@end
