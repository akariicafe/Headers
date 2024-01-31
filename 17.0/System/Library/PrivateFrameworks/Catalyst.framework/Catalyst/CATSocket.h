@class CATEndPoint, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, CATSocketDelegate;

@interface CATSocket : NSObject {
    BOOL mIsInvalid;
    int mState;
}

@property (nonatomic) int nativeSocket;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *socketSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *socketQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *userQueue;
@property (weak, nonatomic) id<CATSocketDelegate> delegate;
@property (readonly, nonatomic) CATEndPoint *localEndPoint;
@property (readonly, nonatomic) CATEndPoint *remoteEndPoint;

- (id)init;
- (void)dealloc;
- (void)suspend;
- (void)invalidate;
- (void)resume;
- (void)delegateDidConnect;
- (void).cxx_destruct;
- (void)socketDidCancel;
- (void)acceptPendingConnection;
- (BOOL)connectToEndPoint:(id)a0 error:(id *)a1;
- (void)delegateDidClose;
- (void)delegateDidFailWithError:(id)a0;
- (void)delegateDidReceiveData:(id)a0;
- (BOOL)delegateShouldAcceptNewSocket:(id)a0;
- (id)initWithNativeSocket:(int)a0;
- (BOOL)listenWithEndPoint:(id)a0 error:(id *)a1;
- (void)populateLocalEndPoint;
- (void)populateRemoteEndPoint;
- (void)socketDidConnect;
- (void)socketDidFailWithError:(id)a0;
- (void)socketDidReceiveData;
- (void)socketDidReceiveEvent;
- (void)socketDidReceiveListeningEvent;

@end
