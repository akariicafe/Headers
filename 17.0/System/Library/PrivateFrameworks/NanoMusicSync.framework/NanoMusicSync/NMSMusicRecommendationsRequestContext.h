@class MPModelForYouRecommendationsResponse, NSArray, NSSet, NSOrderedSet, NMSMutableMediaSyncInfo, MPModelStoreBrowseResponse, NSMutableOrderedSet, NSMapTable, MPModelResponse;

@interface NMSMusicRecommendationsRequestContext : NSObject {
    NSMutableOrderedSet *_recentMusicModelObjects;
    NSMapTable *_modelObjectSectionMap;
}

@property (nonatomic) unsigned long long minimumNumberOfRecentMusicModelObjects;
@property (retain, nonatomic) MPModelResponse *heavyRotationResponse;
@property (retain, nonatomic) MPModelResponse *libraryRecentMusicResponse;
@property (retain, nonatomic) MPModelResponse *starterPackResponse;
@property (retain, nonatomic) NSArray *importedObjects;
@property (readonly, nonatomic) unsigned long long numberOfRecentMusicModelObjects;
@property (readonly, nonatomic) NSSet *modelObjects;
@property (readonly, nonatomic) NSOrderedSet *recommendations;
@property (retain, nonatomic) MPModelForYouRecommendationsResponse *forYouResponse;
@property (retain, nonatomic) MPModelStoreBrowseResponse *editorialBrowseResponse;
@property (retain, nonatomic) MPModelResponse *lookupResponse;
@property (readonly, nonatomic) NMSMutableMediaSyncInfo *importedStoreContainerItemMappings;

- (void)_processItem:(id)a0 section:(id)a1 identifier:(id)a2;
- (BOOL)_hasDownloadableSongsForModelObject:(id)a0;
- (BOOL)_recentMusicContainsModelObject:(id)a0;
- (void).cxx_destruct;
- (void)_processResponsesIfNeeded;

@end
