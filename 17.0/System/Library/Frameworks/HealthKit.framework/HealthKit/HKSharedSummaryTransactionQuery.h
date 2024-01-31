@class NSString;

@interface HKSharedSummaryTransactionQuery : HKQuery <HKSharedSummaryTransactionQueryClientInterface> {
    id /* block */ _initialHandler;
    BOOL _initialHandlerCalled;
}

@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;

- (void)queue_deliverError:(id)a0;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)client_deliverTransactions:(id)a0 query:(id)a1;

@end
