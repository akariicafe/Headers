@class NSString;
@protocol SESDCKSessionPassthroughDelegate, SESDCKSessionDelegate;

@interface SESDCKSession : SESSession <SESDCKSessionCallbackInterface>

@property (weak, nonatomic) id<SESDCKSessionDelegate> delegate;
@property (weak, nonatomic) id<SESDCKSessionPassthroughDelegate> passthroughDelegate;
@property (readonly, nonatomic) NSString *aid;
@property (readonly, nonatomic) NSString *activeKeyIdentifier;
@property (readonly, nonatomic) BOOL supportsSecureRanging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getVehicleReports:(id *)a0;
+ (id)pauseRangingForReaderIdentifier:(id)a0 durationInSec:(id)a1;
+ (id)requestAssertionForKeyID:(id)a0 withOptions:(id)a1 error:(id *)a2;
+ (id)resumeRangingForReaderIdentifier:(id)a0;
+ (id)newInstance;

- (id)setActiveKey:(id)a0;
- (void)endSession;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)setAuthorization:(id)a0;
- (id)cancelRKEFunction:(id)a0;
- (id)sendRKEFunction:(id)a0 action:(id)a1 authorization:(id)a2;
- (void)sendRKEFunction:(id)a0 action:(id)a1 authorization:(id)a2 completion:(id /* block */)a3;
- (void)didStartSession:(id)a0;
- (id)disableBluetooth:(BOOL)a0;
- (BOOL)sendPassthroughMessage:(id)a0 error:(id *)a1;
- (id)setSecureElementToken:(id)a0;
- (id)vehicleState;
- (id)cancelRKEAction:(unsigned long long)a0;
- (void)didEndUnexpectedly:(id)a0;
- (void)didReceivePassthroughMessage:(id)a0;
- (id)getRKEActionsInProgress;
- (BOOL)getSignedMessage:(id)a0 authorization:(id)a1 reply:(id /* block */)a2;
- (BOOL)sendPassthroughMessage:(id)a0 reply:(id /* block */)a1;
- (id)sendRKEAction:(unsigned long long)a0 authorization:(id)a1;
- (BOOL)sendSignedPassthroughMessage:(id)a0 authorization:(id)a1 reply:(id /* block */)a2;

@end
