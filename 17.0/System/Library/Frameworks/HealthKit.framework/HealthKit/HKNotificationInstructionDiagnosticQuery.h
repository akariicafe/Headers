@class NSString, NSMutableArray;

@interface HKNotificationInstructionDiagnosticQuery : HKQuery <HKNotificationInstructionDiagnosticQueryClientInterface> {
    id /* block */ _queue_resultsHandler;
    NSMutableArray *_queue_resultsPendingDelivery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;

- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)client_deliverNotificationInstructions:(id)a0 clearPending:(BOOL)a1 isFinalBatch:(BOOL)a2 queryUUID:(id)a3;
- (id)initWithResultsHandler:(id /* block */)a0;

@end
