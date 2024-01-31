@class CATRemoteConnection;

@interface CATRemoteConnectionTrustDecision : NSObject {
    CATRemoteConnection *mConnection;
    _Atomic BOOL mHasResponded;
}

@property (readonly) id trust;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 trust:(struct __SecTrust { } *)a1;
- (void)respondWithDecisionToAllowUntrustedConnection:(BOOL)a0;

@end
