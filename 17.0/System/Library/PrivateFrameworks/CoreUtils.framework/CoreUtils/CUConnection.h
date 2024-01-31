@class NSString, CUEndpoint, NSObject;
@protocol OS_dispatch_queue;

@interface CUConnection : NSObject <CUMessageable> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) CUEndpoint *peerEndpoint;

- (id)init;
- (void)dealloc;
- (void)_invalidated;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)deregisterEventID:(id)a0;
- (void)deregisterRequestID:(id)a0;
- (void)registerEventID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)sendEventID:(id)a0 event:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)sendRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;

@end
