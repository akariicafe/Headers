@class NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKMedicationExposableDoseEventControl : NSObject <_HKXPCExportable, HKMedicationExposableDoseEventControlClientInterface>

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)unitTest_noOpWithCompletion:(id /* block */)a0;
- (void)deleteDoseEventWithPersistentUUID:(id)a0 completion:(id /* block */)a1;
- (void)doseEventsForDateInterval:(id)a0 medicationIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)writeDoseEvents:(id)a0 completion:(id /* block */)a1;

@end
