@class NSTimer, NSMutableSet, NSHashTable;
@protocol GEOMapServiceTicket;

@interface GEOTransitVehicleUpdateRequester : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updatersLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processedTripIdsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inflightTripIdsLock;
    NSMutableSet *_inflightTripIds;
    id<GEOMapServiceTicket> _ticket;
    NSTimer *_updateTimer;
    double _requestInterval;
    unsigned long long _maxRetries;
    unsigned long long _numRetries;
}

@property (readonly, nonatomic) NSHashTable *updaters;
@property (readonly, nonatomic) NSMutableSet *processedTripIds;

+ (id)sharedInstance;

- (id)initPrivate;
- (void).cxx_destruct;
- (void)_processTripIds;
- (void)_cancelRequestIfNeeded;
- (void)_cancelUpdateTimer;
- (void)_handleMapItems:(id)a0 error:(id)a1 forTripIDs:(id)a2;
- (void)_purgeAllObjects;
- (void)_removeTripIdsIfApplicable:(id)a0;
- (void)_scheduleUpdateTimerWithInterval:(double)a0;
- (void)_sendRequestForTripIds:(id)a0;
- (id)_tripIdsForUpdaters:(id)a0 filteredTripIDs:(BOOL *)a1;
- (void)mockProcessedIds:(id)a0;
- (void)registerVehicleUpdater:(id)a0;
- (void)unregisterVehicleUpdater:(id)a0;

@end
