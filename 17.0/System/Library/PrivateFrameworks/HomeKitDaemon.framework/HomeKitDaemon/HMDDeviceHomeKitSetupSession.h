@class HMDXPCClientConnection;

@interface HMDDeviceHomeKitSetupSession : HMFObject

@property (getter=isFirstResidentForHome) BOOL firstResidentForHome;
@property BOOL hasFailedRelayAttempt;
@property (readonly) BOOL shouldRelayRequest;
@property (readonly, weak) HMDXPCClientConnection *clientConnection;

- (void).cxx_destruct;
- (id)initWithFirstResidentForHome:(BOOL)a0 clientConnection:(id)a1;
- (void)markHasFailedRelayAttempt;

@end
