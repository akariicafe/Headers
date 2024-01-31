@interface PassKitUI.AccountBalanceHistory : NSObject <PKAccountServiceObserver, PKForegroundActiveArbiterObserver> {
    void /* unknown type, empty encoding */ _balances;
    void /* unknown type, empty encoding */ _dateRange;
    void /* unknown type, empty encoding */ range;
    void /* unknown type, empty encoding */ accountService;
    void /* unknown type, empty encoding */ activeState;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ maxDataPoint;
}

- (id)init;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void)accountChanged:(id)a0;
- (void).cxx_destruct;

@end
