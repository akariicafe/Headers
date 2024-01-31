@class NSData, NSOrderedSet, NMSMutableMediaSyncInfo;

@interface NMSMusicRecommendationsResponse : NSObject

@property (readonly, nonatomic) NSData *cachedData;
@property (readonly, nonatomic) NSOrderedSet *recommendations;
@property (readonly, nonatomic) NMSMutableMediaSyncInfo *importedStoreContainerItemMappings;

- (void).cxx_destruct;
- (id)initWithCachedData:(id)a0 importedStoreContainerItemMappings:(id)a1 recommendations:(id)a2;

@end
