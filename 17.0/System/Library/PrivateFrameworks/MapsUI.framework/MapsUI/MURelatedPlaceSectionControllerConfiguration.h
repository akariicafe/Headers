@class GEOTrailHead, GEORelatedPlaceModuleConfiguration, GEORelatedPlaceList;

@interface MURelatedPlaceSectionControllerConfiguration : NSObject

@property (retain, nonatomic) GEORelatedPlaceModuleConfiguration *moduleConfiguration;
@property (readonly, nonatomic) GEORelatedPlaceList *relatedPlaceList;
@property (readonly, nonatomic) long long dataSource;
@property (readonly, nonatomic) GEOTrailHead *trailHead;
@property (nonatomic) BOOL suppressSeeAllButton;
@property (readonly, nonatomic) unsigned long long numInlineItems;
@property (nonatomic) BOOL suppressItemSelection;

- (void).cxx_destruct;
- (id)initWithTrailHead:(id)a0;
- (id)initWithDataSource:(long long)a0 relatedPlaceList:(id)a1 trailHead:(id)a2;
- (id)initWithRelatedPlaceList:(id)a0;

@end
