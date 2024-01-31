@class ARSession, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MDARSessionObserver : NSObject <ARSessionDelegate> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (weak, nonatomic) ARSession *session;
@property (nonatomic) struct ARSessionObserver { void /* function */ **x0; } *observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)session:(id)a0 didUpdateAnchors:(id)a1;
- (void)session:(id)a0 didChangeGeoTrackingStatus:(id)a1;
- (id)initWithObserver:(struct ARSessionObserver { void /* function */ **x0; } *)a0 onQueue:(id)a1;
- (void).cxx_destruct;
- (void)session:(id)a0 didUpdateFrame:(id)a1;

@end
