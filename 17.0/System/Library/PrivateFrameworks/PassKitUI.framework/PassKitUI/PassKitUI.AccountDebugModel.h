@interface PassKitUI.AccountDebugModel : NSObject <PKAccountServiceObserver, PKDashboardTransactionFetcherDelegate> {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ transactionSource;
    void /* unknown type, empty encoding */ paymentDataProvider;
    void /* unknown type, empty encoding */ _cardAccount;
    void /* unknown type, empty encoding */ _inProgress;
    void /* unknown type, empty encoding */ _status;
    void /* unknown type, empty encoding */ _transactionGroups;
    void /* unknown type, empty encoding */ _runningBalance;
    void /* unknown type, empty encoding */ _statements;
    void /* unknown type, empty encoding */ _ckTransactions;
    void /* unknown type, empty encoding */ _ckRewards;
    void /* unknown type, empty encoding */ _cardTransactions;
    void /* unknown type, empty encoding */ _invalidBalanceIncrements;
    void /* unknown type, empty encoding */ transactionFetcher;
    void /* unknown type, empty encoding */ accountService;
}

- (id)init;
- (void).cxx_destruct;
- (void)transactionsChanged:(id)a0;

@end
