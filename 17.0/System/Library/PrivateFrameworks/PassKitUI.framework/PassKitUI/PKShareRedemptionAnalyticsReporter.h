@interface PKShareRedemptionAnalyticsReporter : PKSharingAnalyticsReporter

@property (nonatomic) long long accessPassType;

- (id)init;
- (void)sendEvent:(id)a0;
- (void)_sendEventForPage:(unsigned long long)a0 button:(unsigned long long)a1 eventType:(id)a2 specifics:(id)a3;
- (id)initWithSessionToken:(id)a0;
- (void)sendAuthenticationEventForSuccess:(BOOL)a0 specifics:(id)a1;
- (void)sendEventForPage:(unsigned long long)a0 button:(unsigned long long)a1 specifics:(id)a2;
- (void)sendEventForPage:(unsigned long long)a0 error:(id)a1 specifics:(id)a2;
- (void)sendEventForPage:(unsigned long long)a0 specifics:(id)a1;

@end
