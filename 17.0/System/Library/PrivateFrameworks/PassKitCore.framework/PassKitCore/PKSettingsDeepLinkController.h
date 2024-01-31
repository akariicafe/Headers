@protocol PKSettingsDeepLinkControllerDataSource, PKSettingsDeepLinkControllerDelegate;

@interface PKSettingsDeepLinkController : NSObject {
    id<PKSettingsDeepLinkControllerDataSource> _dataSource;
    id<PKSettingsDeepLinkControllerDelegate> _delegate;
}

- (id)init;
- (void).cxx_destruct;
- (id)_percentEncodeReferrerIdentifier:(id)a0;
- (void)_presentPayLaterPassOrFinancingPlanWithIdenifier:(id)a0 dataSource:(id)a1 delegate:(id)a2;
- (void)_presentTransactionDetailsForTransactionWithIdentifier:(id)a0;
- (void)_presentTransactionDetailsForTransactionWithServiceIdentifier:(id)a0 transactionSourceIdentifier:(id)a1;
- (void)handleDeepLinkResourceDictionary:(id)a0;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;

@end
