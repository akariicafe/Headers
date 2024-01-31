@class PKWorldRegion, NSObject, NSMutableSet, PKSearchService, NSMutableArray, NSHashTable;
@protocol OS_dispatch_queue;

@interface PKWorldRegionUpdater : NSObject {
    PKSearchService *_searchService;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockRegionsToGeocode;
    NSMutableArray *_regionsToGeocode;
    NSMutableSet *_regionIdentifiersToGeocode;
    NSMutableSet *_regionsFailedToGeocode;
    PKWorldRegion *_currentRegionToGeocode;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockObservers;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)_beginReverseGeocodingIfPossible;
- (id)initWithSearchService:(id)a0;
- (void)updateCoordinatesForWorldRegionIfNeeded:(id)a0;

@end
