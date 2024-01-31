@class NSString, NSMutableDictionary, NSMutableArray;

@interface PKPaymentSetupProductModel : NSObject {
    NSMutableDictionary *_paymentSetupProducts;
    NSMutableArray *_allSections;
}

@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;

- (id)init;
- (id)allSections;
- (id)description;
- (void).cxx_destruct;
- (void)setAllSections:(id)a0;
- (id)_paymentSetupProductsWithPartners:(id)a0 products:(id)a1 existingPaymentSetupProducts:(id)a2;
- (void)_updatePaymentSetupProduct:(id)a0 displayName:(id)a1 localizedDescription:(id)a2 partnerDictionary:(id)a3 productIdentifier:(id)a4 paymentOptions:(id)a5 termsURL:(id)a6 provisioningMethods:(id)a7 readerModeMetadata:(id)a8 requiredFields:(id)a9 imageAssets:(id)a10 minimumOSVersion:(id)a11 region:(id)a12 regionData:(id)a13 hsa2Requirement:(id)a14 suppressPendingPurchases:(id)a15 supportedTransitNetworkIdentifiers:(id)a16 onboardingItems:(id)a17 actionBaseURL:(id)a18 productState:(id)a19 minimumProductAge:(id)a20 maximumProductAge:(id)a21 minimumTargetUserSupportedAge:(id)a22 associatedStoreIdentifiers:(id)a23 appLaunchURL:(id)a24 regionIdentifier:(id)a25 type:(id)a26 localizedNotificationTitle:(id)a27 localizedNotificationMessage:(id)a28 discoveryCardIdentifier:(id)a29 clientInfo:(id)a30 searchTerms:(id)a31 featureIdentifier:(id)a32;
- (void)addCarKeyCategory;
- (void)addManualEntrySection:(id /* block */)a0;
- (id)allSetupProducts;
- (id)availableProductsForFeatureIdentifier:(unsigned long long)a0;
- (id)availableProductsForProductIdentifiers:(id)a0;
- (id)filteredPaymentSetupProductModel:(id)a0 mobileCarrierRegion:(id)a1 deviceRegion:(id)a2 cardOnFiles:(id)a3;
- (id)productForProductIdentifier:(id)a0;
- (id)productsForFeatureIdentifier:(unsigned long long)a0;
- (id)productsForProductIdentifiers:(id)a0;
- (void)removeCarKeyCategory;
- (void)removePaymentSetupProducts:(id)a0;
- (void)setPaymentSetupProducts:(id)a0;
- (id)setupProductsOfType:(unsigned long long)a0;
- (void)updatePaymentSetupProducts:(id)a0;
- (void)updateWithPaymentSetupProductsResponse:(id)a0 productsFilter:(id /* block */)a1 sectionsFilter:(id /* block */)a2;

@end
