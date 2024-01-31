@class NSMapTable;

@interface GEORPLegacyProblemRequester : NSObject {
    NSMapTable *_pendingRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingRequestsLock;
}

+ (id)sharedRequester;

- (id)init;
- (void)dealloc;
- (void)cancelRequest:(id)a0;
- (void).cxx_destruct;
- (void)startStatusRequest:(id)a0 finished:(id /* block */)a1 networkActivity:(id /* block */)a2 error:(id /* block */)a3;
- (void)startSubmissionRequest:(id)a0 finished:(id /* block */)a1 networkActivity:(id /* block */)a2 error:(id /* block */)a3;

@end
