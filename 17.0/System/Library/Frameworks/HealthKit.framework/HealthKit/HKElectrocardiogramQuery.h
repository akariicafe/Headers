@class NSString, HKElectrocardiogram;

@interface HKElectrocardiogramQuery : HKQuery <HKElectrocardiogramQueryClientInterface> {
    HKElectrocardiogram *_electrocardiogram;
    long long _lead;
    id /* block */ _sampleHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;

- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)_enumerateMeasurementsForElectrocardiogram:(id)a0 handler:(id /* block */)a1;
- (void)client_deliverData;
- (id)initWithElectrocardiogram:(id)a0 dataHandler:(id /* block */)a1;
- (id)initWithElectrocardiogram:(id)a0 lead:(long long)a1 dataHandler:(id /* block */)a2;
- (id)initWithElectrocardiogram:(id)a0 sampleHandler:(id /* block */)a1;

@end
