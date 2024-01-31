@class _PKProvisioningSEStorageManager;

@interface PKProvisioningSEStorageManager : NSObject {
    _PKProvisioningSEStorageManager *_manager;
}

- (void)deleteReservation:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)reserveStorageForAppletTypes:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)debugPerformSECleanup:(id /* block */)a0;
- (void)debugReservationDescriptions:(id /* block */)a0;
- (id)initWithWebService:(id)a0;

@end
