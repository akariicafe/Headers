@class NSMutableArray, NSString, VUIMediaAPIClient, VUIMediaAPIResponseMetadata, NSURLRequest, NSNumber;

@interface VUIFamilySharingMediaEntitiesDataSource : VUIMediaEntitiesDataSource

@property (retain, nonatomic) VUIMediaAPIClient *mediaClient;
@property (retain, nonatomic) NSURLRequest *urlRequest;
@property (retain, nonatomic) VUIMediaAPIResponseMetadata *responseMetadata;
@property (retain, nonatomic) NSNumber *desiredBatchSize;
@property (retain, nonatomic) NSMutableArray *processedEntities;
@property (nonatomic) BOOL loadingNextBatch;
@property (nonatomic) BOOL fetchAllEntities;
@property (nonatomic) unsigned long long numberOfEntitiesProcessedInBatch;
@property (retain, nonatomic) NSNumber *resultLimit;
@property (nonatomic) BOOL shouldCoalesceEpisodesToShows;
@property (nonatomic) BOOL shouldCoalesceEpisodesToSeasons;
@property (nonatomic) BOOL shouldGroupBySeason;
@property (nonatomic) BOOL orderEpisodesByEpisodeNumber;
@property (retain, nonatomic) NSString *seasonIdentifierFilter;

- (void).cxx_destruct;
- (void)_applyContentRestrictionsFilter;
- (id)_addSeasonNumber:(id)a0 toCollectionSeasonNumbers:(id)a1;
- (void)_appendNextOffsetToURLRequest;
- (void)_applyContentRestrictionsFilterToGroupings;
- (id)_applyContentRestrictionsFilterToMediaEntities:(id)a0;
- (void)_coalesceEpisodesToSeasonsFromParsedEntities:(id)a0;
- (void)_coalesceEpisodesToShowsFromParsedEntities:(id)a0;
- (id /* block */)_episodeOrderingComparator;
- (void)_filterEntitiesBySeasonIdentifierIfNecessary;
- (void)_filterGroupingsBySeasonIdentifierIfNecessary;
- (id)_getEntityInProcessedEntitiesWithIdentifier:(id)a0;
- (id)_getGroupingFrom:(id)a0 groupingIdentifier:(id)a1;
- (id)_getLimitFromURLRequest;
- (void)_groupEpisodesbySeason:(id)a0;
- (BOOL)_grouping:(id)a0 containsMediaEntity:(id)a1;
- (BOOL)_hasNextBatch;
- (BOOL)_isAllowedToShowMediaItem:(id)a0;
- (void)_limitEntitiesReturnedIfNecessary;
- (id)_mediaCollectionWithAMSMediaItem:(id)a0;
- (void)_orderEpisodesIfNecessary;
- (void)_orderEpisodesInGroupings;
- (void)_orderSeasonsBySeasonNumber;
- (BOOL)_processedEntitiesContainsEntityWithIdentifier:(id)a0;
- (id)_updateOffsetQueryItemForQueryItems:(id)a0;
- (id)initWithNSURLRequest:(id)a0;
- (void)loadNextEntityBatch;
- (void)startFetch;

@end
