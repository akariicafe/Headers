@class MPModelForYouRecommendationMusicKitGroupBuilder, ICURLBag, NSDictionary, MPMutableSectionedCollection, MPPropertySet, MPModelStoreBrowseContentItemBuilder;

@interface MPModelForYouRecommendationMusicKitItemBuilder : NSObject {
    struct { BOOL isInitialized; BOOL itemType; BOOL url; BOOL reason; BOOL utterance; BOOL backedByStoreItemMetadata; BOOL album; BOOL playlist; BOOL radioStation; BOOL subgroup; } _requestedItemProperties;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    MPModelForYouRecommendationMusicKitGroupBuilder *_subgroupBuilder;
    ICURLBag *_storeURLBag;
    BOOL _isListenNow;
}

@property (readonly, nonatomic) MPPropertySet *requestedPropertySet;
@property (readonly, nonatomic) NSDictionary *storeItemMetadataResults;
@property (readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems;

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)convertToStoreItemMetadataDictionary:(id)a0;
- (id)initWithRequestedPropertySet:(id)a0 storeItemMetadataResults:(id)a1 flatSectionedItems:(id)a2 storeURLBag:(id)a3 isListenNow:(BOOL)a4;
- (id)modelObjectForRecommendationChildDictionary:(id)a0 parentGroup:(id)a1 subgroupsAccumulator:(id)a2 userIdentity:(id)a3;
- (id)storeItemMetadataWithMusicAPIMetadataDictionary:(id)a0;

@end
