@class NSObject, RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

@interface CULiveActionPeerSession : NSObject <CUActivatable> {
    RPCompanionLinkClient *_clinkClient;
}

@property (retain, nonatomic) RPCompanionLinkDevice *destinationDevice;
@property (nonatomic) BOOL speakDisable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)invalidate;
- (void)performRequest:(id)a0 completion:(id /* block */)a1;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setupWithRequest:(id)a0 completion:(id /* block */)a1;

@end
