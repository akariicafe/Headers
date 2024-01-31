@class NSString;

@interface HKHeartRateSummaryQuery : HKQuery <HKHeartRateSummaryQueryClientInterface> {
    id /* block */ _updateHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;

- (void)queue_validate;
- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)client_deliverSummary:(id)a0 queryUUID:(id)a1;

@end
