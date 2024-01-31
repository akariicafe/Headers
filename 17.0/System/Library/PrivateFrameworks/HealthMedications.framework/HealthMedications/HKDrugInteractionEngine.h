@class NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKDrugInteractionEngine : NSObject <_HKXPCExportable, HKDrugInteractionEngineClientInterface>

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
- (void)interactionClassForLifestyleFactor:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)interactionClassesForConceptWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)interactionClassesForMedication:(id)a0 completion:(id /* block */)a1;
- (void)interactionResultForFirstMedication:(id)a0 secondMedication:(id)a1 completion:(id /* block */)a2;
- (void)interactionResultForMedication:(id)a0 lifestyleFactor:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)interactionResultsForInteractionClasses:(id)a0 completion:(id /* block */)a1;
- (void)interactionResultsForMedications:(id)a0 lifestyleFactors:(id)a1 completion:(id /* block */)a2;
- (void)numberOfInteractionsForConceptWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)numberOfInteractionsForMedication:(id)a0 completion:(id /* block */)a1;

@end
