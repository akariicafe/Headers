@class NSError;

@interface HAP2AccessoryServerPairingDriverMFiCertWorkItem : HAP2AccessoryServerPairingDriverWorkItem

@property (retain, nonatomic) NSError *cancelError;

+ (id)checkCertificate;

- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)runForPairingDriver:(id)a0;

@end
