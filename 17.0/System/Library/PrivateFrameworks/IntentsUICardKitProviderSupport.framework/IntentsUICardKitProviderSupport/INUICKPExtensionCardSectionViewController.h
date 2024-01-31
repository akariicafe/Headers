@class NSString;
@protocol CRKCardSectionViewControllingDelegate;

@interface INUICKPExtensionCardSectionViewController : INUICKPSynchronousRemoteViewController <CRKCardSectionViewControlling> {
    id _touchDeliveryPolicyAssertion;
}

@property (weak, nonatomic) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)desiresInteractivity:(id /* block */)a0;
- (void)remoteViewController:(id)a0 requestsHandlingOfIntent:(id)a1;
- (void)remoteViewControllerWillBeginEditing:(id)a0;
- (void)cardEventDidOccur:(unsigned long long)a0 withIdentifier:(id)a1 userInfo:(id)a2;

@end
