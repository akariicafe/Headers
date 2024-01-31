@class NSMutableDictionary, NSString, NSArray, NSURL, UIImage, SUUIItemOffer, SUUIStoreIdentifier;
@protocol SUUIArtworkProviding;

@interface SUUIItem : NSObject <SUUICacheCoding, SSMetricsEventFieldProvider> {
    NSString *_editorialBage;
    NSString *_feedUrlString;
}

@property (readonly, nonatomic) NSString *_downloadKind;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } ageBandRange;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSURL *largestArtworkURL;
@property (readonly, nonatomic) id<SUUIArtworkProviding> artworksProvider;
@property (readonly, nonatomic) UIImage *artworkImage;
@property (readonly, nonatomic) NSArray *childItemIdentifiers;
@property (readonly, nonatomic) NSArray *loadedChildItems;
@property (readonly, nonatomic) long long numberOfChildItems;
@property (readonly, nonatomic) unsigned long long deviceFamilies;
@property (readonly, nonatomic, getter=hasPrerenderedArtwork) BOOL prerenderedArtwork;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) NSString *collectionName;
@property (readonly, nonatomic) NSString *editorialBadge;
@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) long long itemKind;
@property (readonly, nonatomic) NSString *itemKindString;
@property (readonly, nonatomic) long long numberOfUserRatings;
@property (readonly, nonatomic) long long parentalControlsRank;
@property (readonly, nonatomic) SUUIItemOffer *primaryItemOffer;
@property (readonly, nonatomic) NSString *productPageURLString;
@property (readonly, nonatomic) NSArray *requiredCapabilities;
@property (copy, nonatomic) SUUIStoreIdentifier *storeIdentifier;
@property (readonly, nonatomic) float userRating;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long versionIdentifier;
@property (readonly, nonatomic) NSString *versionString;
@property (readonly, nonatomic) NSArray *videos;
@property (readonly, nonatomic) BOOL hasInAppPurchases;
@property (readonly, nonatomic) BOOL hasMessagesExtension;
@property (readonly, nonatomic) BOOL isHiddenFromSpringBoard;
@property (readonly, nonatomic) BOOL gameControllerSupported;
@property (readonly, nonatomic) BOOL requiresGameController;
@property (readonly, nonatomic, getter=isNewsstandApp) BOOL newsstandApp;
@property (readonly, nonatomic) long long newsstandBindingEdge;
@property (readonly, nonatomic) long long newsstandBindingType;
@property (readonly, nonatomic) id<SUUIArtworkProviding> newsstandArtworks;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLookupDictionary:(id)a0;
- (void).cxx_destruct;
- (id)lookupDictionary;
- (void)setItemIdentifier:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)setTitle:(id)a0;
- (void)setItemKind:(long long)a0;
- (id)initWithCacheRepresentation:(id)a0;
- (id)valueForMetricsField:(id)a0;
- (id)artworkURLForSize:(long long)a0;
- (void)_setHasInAppPurchases:(BOOL)a0;
- (void)addItemOfferParameterWithName:(id)a0 value:(id)a1;
- (id)childItemForIdentifier:(id)a0;
- (id)initContainerItemWithItem:(id)a0;

@end
