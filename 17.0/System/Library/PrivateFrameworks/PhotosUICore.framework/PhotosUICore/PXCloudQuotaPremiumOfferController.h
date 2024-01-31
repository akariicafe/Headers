@class NSString, PXCloudQuotaPremiumOfferProvider;

@interface PXCloudQuotaPremiumOfferController : PXCloudQuotaController <PXChangeObserver, ICQTileViewDelegate> {
    PXCloudQuotaPremiumOfferProvider *_premiumOfferProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)tileView:(id)a0 performAction:(long long)a1 parameters:(id)a2;
- (void)updateTileView;
- (void).cxx_destruct;
- (id)presentingViewControllerForTileView:(id)a0;
- (void)_updateInformationView;

@end
