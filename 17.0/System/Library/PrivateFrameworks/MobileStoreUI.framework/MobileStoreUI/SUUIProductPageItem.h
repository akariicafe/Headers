@class NSMutableDictionary, NSString, NSArray, NSURL, SUUIItemContentRating, SUUIDeveloperInfo, SUUIStoreNotes;

@interface SUUIProductPageItem : SUUIItem {
    NSArray *_childItemIdentifiers;
    NSMutableDictionary *_loadedChildItems;
}

@property (readonly, nonatomic) NSURL *artistPageURL;
@property (readonly, nonatomic) SUUIItemContentRating *contentRating;
@property (readonly, nonatomic) NSString *copyrightString;
@property (readonly, nonatomic) SUUIDeveloperInfo *developerInfo;
@property (readonly, nonatomic) NSArray *inAppPurchases;
@property (readonly, nonatomic) NSString *installationRequirementsDescription;
@property (readonly, nonatomic) NSString *itemDescription;
@property (readonly, nonatomic) NSString *lastUpdateDateString;
@property (readonly, nonatomic) NSString *licenseAgreementURLString;
@property (readonly, nonatomic) NSArray *parentBundleItemIdentifiers;
@property (readonly, nonatomic) NSString *privacyPolicyURLString;
@property (readonly, nonatomic) NSString *regularPriceString;
@property (readonly, nonatomic) NSArray *releaseNotes;
@property (readonly, nonatomic) NSString *reviewsURLString;
@property (readonly, nonatomic) NSArray *screenshots;
@property (readonly, nonatomic) NSArray *secondaryContentRatings;
@property (readonly, nonatomic) NSString *sellerName;
@property (readonly, nonatomic) NSString *shortenedProductPageURLString;
@property (readonly, nonatomic) SUUIStoreNotes *storeNotes;
@property (readonly, nonatomic) long long supportedFeatures;
@property (readonly, nonatomic) unsigned long long supportedGameCenterFeatures;
@property (readonly, nonatomic) NSString *supportURLString;
@property (readonly, nonatomic) NSString *updateDescription;

- (id)initWithLookupDictionary:(id)a0;
- (void).cxx_destruct;
- (void)_setInAppPurchases:(id)a0;
- (void)_setVersionHistory:(id)a0;
- (id)childItemForIdentifier:(id)a0;
- (id)childItemIdentifiers;
- (id)loadedChildItems;
- (long long)numberOfChildItems;

@end
