@class ICURLBag, MPModelForYouRecommendationMusicKitItemBuilder, NSDictionary, NSDateFormatter, MPMutableSectionedCollection, MPPropertySet;

@interface MPModelForYouRecommendationMusicKitGroupBuilder : NSObject {
    struct { unsigned char initialized : 1; unsigned char groupType : 1; unsigned char lastUpdatedDate : 1; unsigned char title : 1; unsigned char subgroups : 1; unsigned char loadAdditionalContentURL : 1; unsigned char hrefURL : 1; unsigned char refreshURL : 1; unsigned char traits : 1; unsigned char displaysAsGridCellInCarPlay : 1; unsigned char displaysAsTitledSectionWithRowsInCarPlay : 1; } _requestedGroupProperties;
    MPModelForYouRecommendationMusicKitItemBuilder *_itemBuilder;
    NSDateFormatter *_lastUpdatedDateFormatter;
    ICURLBag *_storeURLBag;
    BOOL _isListenNow;
}

@property (readonly, nonatomic) MPPropertySet *requestedGroupPropertySet;
@property (readonly, nonatomic) MPPropertySet *requestedItemPropertySet;
@property (readonly, nonatomic) NSDictionary *storeItemMetadataResults;
@property (readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems;

+ (id)allSupportedGroupProperties;
+ (id)allSupportedItemProperties;

- (void).cxx_destruct;
- (id)initWithRequestedGroupPropertySet:(id)a0 requestedItemPropertySet:(id)a1 storeItemMetadataResults:(id)a2 flatSectionedItems:(id)a3 storeURLBag:(id)a4 isListenNow:(BOOL)a5;
- (void)initializeRequestedGroupProperties;
- (id)modelObjectForItemsArray:(id)a0 userIdentity:(id)a1;
- (id)modelObjectForRecentlyPlayedArray:(id)a0 userIdentity:(id)a1;
- (id)modelObjectForRecommendationDictionary:(id)a0 userIdentity:(id)a1;

@end
