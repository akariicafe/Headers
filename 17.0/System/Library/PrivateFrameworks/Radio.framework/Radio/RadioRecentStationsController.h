@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RadioRecentStationsController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasRefreshed;
    BOOL _hasValidStationGroups;
    NSMutableArray *_pendingRecentStations;
    NSArray *_serverRecentStationGroups;
    NSArray *_stationGroups;
}

@property (readonly, copy, nonatomic) NSArray *stationGroups;
@property (readonly, copy, nonatomic) NSArray *stations;

- (id)init;
- (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(id /* block */)a0;
- (void)_createStationGroups;
- (void)_handleRecentStationsResponse:(id)a0 fromRequest:(id)a1 pendingRecentStations:(id)a2 isInitialCacheLoad:(BOOL)a3;
- (void)_insertPendingRecentStation:(id)a0;
- (id)_newRecentStationsRequest;
- (void)_postStationsDidChangeNotification;
- (void)insertPendingRecentStation:(id)a0;
- (void)insertPendingRecentStationDictionary:(id)a0;
- (void)removePendingRecentStation:(id)a0;

@end
