@class NSString, NSArray, NSDate;

@interface HKMedicationClusterQuery : HKQuery <HKMedicationClusterQueryClientInterface> {
    long long _queryType;
    long long _limit;
    NSArray *_scanResult;
    NSString *_machineReadableCode;
    long long _codeAttributeType;
    NSArray *_textSearchTokens;
    NSArray *_existingMedications;
    NSDate *_sinceDate;
    id /* block */ _resultsHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;

- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (void)queue_populateConfiguration:(id)a0;
- (void)client_deliverResults:(id)a0 queryUUID:(id)a1;
- (id)initForCHRImportWithExistingMedications:(id)a0 sinceDate:(id)a1 limit:(long long)a2 resultsHandler:(id /* block */)a3;
- (id)initWithMachineReadableCode:(id)a0 codeAttributeType:(long long)a1 resultsHandler:(id /* block */)a2;
- (id)initWithScanResult:(id)a0 limit:(long long)a1 resultsHandler:(id /* block */)a2;
- (id)initWithTextSearchTokens:(id)a0 limit:(long long)a1 resultsHandler:(id /* block */)a2;

@end
