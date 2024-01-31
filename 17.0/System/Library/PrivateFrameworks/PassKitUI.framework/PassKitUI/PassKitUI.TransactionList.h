@interface PassKitUI.TransactionList : NSObject <PKDashboardTransactionFetcherDelegate, PKForegroundActiveArbiterObserver> {
    void /* unknown type, empty encoding */ _rows;
    void /* unknown type, empty encoding */ _yearlyGroups;
    void /* unknown type, empty encoding */ activeState;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ transactionFetcher;
    void /* unknown type, empty encoding */ iconGenerator;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ _filter;
}

- (id)init;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void).cxx_destruct;
- (void)transactionsChanged:(id)a0;

@end
