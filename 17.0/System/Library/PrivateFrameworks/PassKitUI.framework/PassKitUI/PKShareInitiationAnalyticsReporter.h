@class PKPass;

@interface PKShareInitiationAnalyticsReporter : PKSharingAnalyticsReporter {
    PKPass *_pass;
}

- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithPass:(id)a0;
- (id)_initWithPass:(id)a0 sessionToken:(id)a1 reuseExistingSession:(BOOL)a2;
- (void)_sendEventForPage:(unsigned long long)a0 button:(unsigned long long)a1 eventType:(id)a2 specifics:(id)a3;
- (id)initWithPass:(id)a0 reuseExistingSession:(BOOL)a1;
- (id)initWithPass:(id)a0 sessionToken:(id)a1;
- (void)sendAuthenticationEventForSuccess:(BOOL)a0 specifics:(id)a1;
- (void)sendDoneEventWithDidShare:(BOOL)a0 error:(id)a1 specifics:(id)a2;
- (void)sendEventForPage:(unsigned long long)a0 button:(unsigned long long)a1 specifics:(id)a2;
- (void)sendEventForPage:(unsigned long long)a0 specifics:(id)a1;

@end
