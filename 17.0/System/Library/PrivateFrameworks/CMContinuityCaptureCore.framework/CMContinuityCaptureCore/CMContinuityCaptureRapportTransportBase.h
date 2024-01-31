@class NSString, CMContinuityCaptureTransportRapportDevice, NSObject;
@protocol OS_dispatch_queue, ContinuityCaptureTaskDelegate;

@interface CMContinuityCaptureRapportTransportBase : NSObject <TSClockManagerClient, CMContinuityCaptureTransportMessaging> {
    NSObject<OS_dispatch_queue> *_queue;
    id<ContinuityCaptureTaskDelegate> _delegate;
    CMContinuityCaptureTransportRapportDevice *_device;
    unsigned long long _clockIdentifier;
    id /* block */ _incomingStreamRequestHandler;
}

@property (copy) id /* block */ incomingStreamRequestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setTaskDelegate:(id)a0;
- (void)sendMessage:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)_bindClock:(unsigned long long)a0 peerAddress:(id)a1 retries:(long long)a2 completion:(id /* block */)a3;
- (void)_enqueueResponse:(id)a0 identifier:(id)a1;
- (void)createTimeSyncClockWithPeerAddress:(id)a0 completion:(id /* block */)a1;
- (void)disposeTimeSyncClock;
- (void)enqueueResponse:(id)a0 identifier:(id)a1;
- (id)initWithRapportDevice:(id)a0 queue:(id)a1 taskDelegate:(id)a2;
- (void)invalidateCurrentSession:(id /* block */)a0;
- (void)resetDevice:(id)a0;

@end
