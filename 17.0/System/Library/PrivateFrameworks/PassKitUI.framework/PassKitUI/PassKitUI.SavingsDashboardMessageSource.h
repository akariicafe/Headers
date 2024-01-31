@interface PassKitUI.SavingsDashboardMessageSource : NSObject <PKDiscoveryObserver, PKPaymentDataProviderDelegate> {
    void /* unknown type, empty encoding */ _messages;
    void /* unknown type, empty encoding */ localMessages;
    void /* unknown type, empty encoding */ engagementMessages;
    void /* unknown type, empty encoding */ engagementMessagePendingDismissalIds;
    void /* unknown type, empty encoding */ updateLocalMessagePublisher;
    void /* unknown type, empty encoding */ updateEngagementMessagePublisher;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ iconSize;
    void /* unknown type, empty encoding */ transactionProvider;
    void /* unknown type, empty encoding */ accountService;
    void /* unknown type, empty encoding */ discoveryService;
    void /* unknown type, empty encoding */ presentActionSheet;
    void /* unknown type, empty encoding */ _presentContactSupport;
    void /* unknown type, empty encoding */ accountModel;
    void /* unknown type, empty encoding */ fccStepUpModel;
    void /* unknown type, empty encoding */ rdfiTransferCompleted;
    void /* unknown type, empty encoding */ messageIdentifierAccountStatus;
    void /* unknown type, empty encoding */ messageIdentifierFCCStepUpCompletion;
    void /* unknown type, empty encoding */ messageIdentifierAccountAPYUpdate;
    void /* unknown type, empty encoding */ messageIdentifierSavingsInterest;
    void /* unknown type, empty encoding */ messageIdentifierAccountNegativeBalance;
    void /* unknown type, empty encoding */ messageIdentifierTransferCash;
    void /* unknown type, empty encoding */ messageIdentifierHold;
}

- (id)init;
- (void)dealloc;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void).cxx_destruct;
- (void)discoveryService:(id)a0 dialogRequestsChangedForPlacement:(id)a1;
- (void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(id)a0;

@end
