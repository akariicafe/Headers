@class NSString, NSURL, NFNdefTagSession, NSObject, CURetrier;
@protocol OS_dispatch_queue, NFSession;

@interface CUNFCAdvertiser : NSObject <NFNdefTagSessionDelegate> {
    BOOL _invalidateCalled;
    CURetrier *_nfcRetrier;
    NFNdefTagSession *_nfcSession;
    BOOL _nfcStarted;
    NSObject<NFSession> *_nfcTempSession;
}

@property (copy, nonatomic) NSURL *advertisementURI;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ tagStateChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)_invalidateWithError:(id)a0;
- (void)_ensureSessionStarted;
- (void)_ensureSessionStopped;
- (void)_handleSessionStarted:(id)a0 error:(id)a1;
- (void)ndefTagSession:(id)a0 didTagStateChange:(unsigned int)a1;
- (void)ndefTagSessionDidEndUnexpectedly:(id)a0;

@end
