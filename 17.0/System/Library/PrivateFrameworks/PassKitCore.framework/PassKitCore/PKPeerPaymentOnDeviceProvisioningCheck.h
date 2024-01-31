@interface PKPeerPaymentOnDeviceProvisioningCheck : NSObject

+ (BOOL)_hasPeerPaymentPassProvisionedForAccount:(id)a0 passLibraryDataProvider:(id)a1;
+ (id)_peerPaymentPassForAccount:(id)a0 passLibraryDataProvider:(id)a1;
+ (BOOL)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)a0;
+ (BOOL)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)a0 passLibraryDataProvider:(id)a1;

@end
