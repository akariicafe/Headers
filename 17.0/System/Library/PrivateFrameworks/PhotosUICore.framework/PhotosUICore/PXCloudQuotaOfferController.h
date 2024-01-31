@class NSString, PXCloudQuotaOfferProvider;

@interface PXCloudQuotaOfferController : PXCloudQuotaController <PXChangeObserver, ICQBannerViewDelegate, PXSettingsKeyObserver> {
    PXCloudQuotaOfferProvider *_offerProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)presentingViewControllerForBannerView:(id)a0;
- (long long)_mockOfferLevel;
- (BOOL)_mockOfferIncludeAssetCounts;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_updateInformationView;

@end
