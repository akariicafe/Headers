@class AMSAcknowledgePrivacyTask;

@interface PSFitnessPlusAnalyticsConsentCoordinator : NSObject {
    AMSAcknowledgePrivacyTask *_acknowledgePrivacyTask;
}

- (id)init;
- (void).cxx_destruct;
- (void)setAnalyticsConsent:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)fetchAnalyticsConsent;
- (void)fetchSubscriptionStatusWithCompletion:(id /* block */)a0;

@end
