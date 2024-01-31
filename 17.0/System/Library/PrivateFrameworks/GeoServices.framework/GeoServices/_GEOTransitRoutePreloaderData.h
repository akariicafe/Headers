@class _GEOTransitPreloadCamera, NSMutableSet, NSMutableArray, GEOTileKeyList;

@interface _GEOTransitRoutePreloaderData : NSObject

@property (retain, nonatomic) GEOTileKeyList *tilesLoadingOrLoaded;
@property (retain, nonatomic) GEOTileKeyList *tilesReceived;
@property (retain, nonatomic) GEOTileKeyList *tilesMissed;
@property (retain, nonatomic) NSMutableSet *placecardsReceived;
@property (retain, nonatomic) NSMutableSet *placecardsMissed;
@property (retain, nonatomic) NSMutableArray *preloadBatches;
@property (nonatomic) unsigned long long currentBatchGeneration;
@property (retain, nonatomic) _GEOTransitPreloadCamera *camera;

- (id)init;
- (void).cxx_destruct;

@end
