@class NSString, ICQUICloudStorageOffersManager, UINavigationController;

@interface ICQUILegacyPurchaseFlowController : NSObject <ICQUICloudStorageOffersManagerDelegate> {
    ICQUICloudStorageOffersManager *_offerManager;
    UINavigationController *_navController;
    id /* block */ _flowCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)manager:(id)a0 didCompleteWithError:(id)a1;
- (void)manager:(id)a0 loadDidFailWithError:(id)a1;
- (void)managerDidCancel:(id)a0;
- (void)beginFlowWithPresenter:(id)a0 action:(id)a1 completion:(id /* block */)a2;

@end
