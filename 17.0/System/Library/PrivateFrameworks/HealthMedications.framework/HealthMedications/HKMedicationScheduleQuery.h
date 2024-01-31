@class NSString, NSArray;

@interface HKMedicationScheduleQuery : HKQuery <HKMedicationScheduleQueryClientInterface> {
    id /* block */ _resultsHandler;
    NSArray *_sortDescriptors;
    unsigned long long _limit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;

- (void)queue_validate;
- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)client_deliverSchedules:(id)a0 queryUUID:(id)a1;
- (id)initWithPredicate:(id)a0 limit:(unsigned long long)a1 sortDescriptors:(id)a2 resultsHandler:(id /* block */)a3;

@end
