@class NSString;

@interface GKChallengeEventHandlerUIDelegate : NSObject <GKChallengeEventHandlerUIDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showLocallyCompletedBannerForIssuingPlayer:(id)a0 challenge:(id)a1 handler:(id /* block */)a2;
- (void)showReceivedBannerForIssuingPlayer:(id)a0 challenge:(id)a1 handler:(id /* block */)a2;
- (void)showRemotelyCompletedBannerForReceivingPlayer:(id)a0 challenge:(id)a1 handler:(id /* block */)a2;

@end
