@class NSString;

@interface HDHRCardioFitnessStoreServer : HDStandardTaskServer <HDDiagnosticObject, HKHRCardioFitnessStoreServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (id)diagnosticDescription;
- (void)connectionInvalidated;
- (BOOL)_insertSampleWithLocalSource:(id)a0 error:(id *)a1;
- (BOOL)_saveCardioFitnessNotificationWithValue:(id)a0 threshold:(id)a1 startDate:(id)a2 endDate:(id)a3 options:(unsigned long long)a4 error:(id *)a5;
- (void)remote_saveCardioFitnessAlertWithValue:(id)a0 threshold:(id)a1 startDate:(id)a2 endDate:(id)a3 options:(unsigned long long)a4 completion:(id /* block */)a5;

@end
