@class NSObject, RPCompanionLinkDevice, NSMutableArray, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface RTTRemoteCall : RTTCall {
    NSMutableArray *_devices;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) RPCompanionLinkDevice *pairedCallDevice;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)isLocallyHosted;
- (void)removeDevice:(id)a0;
- (void)addDevice:(id)a0;
- (id)initWithCall:(id)a0;
- (void)callDidReceiveText:(id)a0 forUtterance:(id)a1;
- (void)resetRapportClientAndInvalidate:(BOOL)a0;
- (id)responseForRequest:(id)a0 options:(id)a1;
- (void)sendCallIDChallengeToDevice:(id)a0;
- (void)sendCallIDChallengeToDeviceId:(id)a0;
- (void)sendString:(id)a0;
- (void)setupRapportClient;
- (void)updateCallWithRemoteFailure;

@end
