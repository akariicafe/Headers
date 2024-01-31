@class NSString, NSArray, NSDate;

@interface HKMedicationScheduleItemQuery : HKQuery <HKMedicationScheduleItemQueryClientInterface> {
    id /* block */ _resultsHandler;
}

@property (readonly, copy, nonatomic) NSDate *fromDate;
@property (readonly, copy, nonatomic) NSDate *toDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
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
- (void)client_deliverScheduleItems:(id)a0 queryUUID:(id)a1;
- (id)initWithFromDate:(id)a0 toDate:(id)a1 identifier:(id)a2 sortDescriptors:(id)a3 resultsHandler:(id /* block */)a4;

@end
