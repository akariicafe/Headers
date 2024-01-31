@class NSMutableArray, PDPeerPaymentWebServiceCoordinator, NSString, NSObject, PDPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDDeviceRegistrationServiceCoordinator : NSObject <PDPaymentWebServiceCoordinatorDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_registrationTasks;
}

@property (readonly, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator;
@property (readonly, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_createTransactionAndPerformDeviceRegistrationWithRegistrationTask:(id)a0;
- (void)_canAutomaticallyRegisterWithWebService:(id)a0 completion:(id /* block */)a1;
- (void)performDeviceRegistrationForReason:(id)a0 brokerURL:(id)a1 action:(long long)a2 forceApplePayRegister:(BOOL)a3 forcePeerPaymentRegister:(BOOL)a4 completion:(id /* block */)a5;
- (void)_peerPaymentRegisterWithURL:(id)a0 paymentWebService:(id)a1 forceRegister:(BOOL)a2 completion:(id /* block */)a3;
- (void)_performDeviceRegistrationWithRegistrationTask:(id)a0 completion:(id /* block */)a1;
- (void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)a0 context:(id)a1 error:(id)a2;
- (id)initWithPaymentWebServiceCoordinator:(id)a0 peerPaymentWebServiceCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)paymentWebServiceCoordinatorWebServiceDidChange:(id)a0;
- (void)_handlePaymentWebServiceContextChanged;
- (BOOL)_shouldAttemptPeerPaymentRegistrationForce:(BOOL)a0;
- (void)notePasscodeChanged;

@end
