@interface PKSubcredentialPairingAnalyticsReporter : NSObject

+ (void)beginSubcredentialPairingSessionWithReferralSource:(unsigned long long)a0 brandId:(id)a1 page:(long long)a2;
+ (void)endSubcredentialPairingSession;
+ (void)sendButtonPressWithButtonTag:(long long)a0 page:(long long)a1;
+ (void)sendOutcome:(BOOL)a0 errorMessage:(id)a1 page:(long long)a2;
+ (void)sendViewDidAppearWithPage:(long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
