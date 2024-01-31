@class IDSService;

@interface SKPseudonyms : NSObject

@property (retain, nonatomic) IDSService *service;

- (id)initWithIDSService:(id)a0;
- (id)pseudonymsForMaskedURI:(id)a0 matchingProperties:(id)a1;
- (id)pseudonymForPseudonymURI:(id)a0;
- (id)pseudonymsForMaskedURI:(id)a0;
- (id)pseudonymPropertiesWithFeatureID:(id)a0 scopeID:(id)a1 expiryDurationInSeconds:(double)a2;
- (void).cxx_destruct;
- (void)provisionPseudonymForURI:(id)a0 withProperties:(id)a1 requestProperties:(id)a2 completion:(id /* block */)a3;
- (void)provisionPseudonymWithProperties:(id)a0 requestProperties:(id)a1 completion:(id /* block */)a2;
- (void)provisionPseudonymForURI:(id)a0 withProperties:(id)a1 completion:(id /* block */)a2;
- (void)provisionPseudonymWithProperties:(id)a0 completion:(id /* block */)a1;
- (id)pseudonymPropertiesWithFeatureID:(id)a0 expiryDurationInSeconds:(double)a1;
- (void)renewPseudonym:(id)a0 forUpdatedDuration:(double)a1 completion:(id /* block */)a2;
- (void)revokePseudonym:(id)a0 completion:(id /* block */)a1;
- (id)propertiesWithUpdatedServices:(id)a0;

@end
