@class GEOApplicationAuditToken, GEOTileLoader, NSObject;
@protocol OS_dispatch_queue;

@interface _GEOMapFeatureAccessRequestParameters : NSObject

@property (retain, nonatomic) GEOTileLoader *tileLoader;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) BOOL allowNetworkTileLoad;
@property (nonatomic) BOOL flipNegativeTravelDirectionRoads;
@property (nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice;
@property (nonatomic) BOOL allowStaleData;
@property (nonatomic) BOOL preferStaleData;
@property (nonatomic) BOOL joinAllRoadsByMuid;
@property (nonatomic) BOOL cachedTilesCallbackImmediately;
@property (nonatomic) BOOL allowOfflineData;

- (void).cxx_destruct;

@end
