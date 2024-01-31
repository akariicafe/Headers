@class NSString, MNTracePlayerTimelineStream, MNTrace, GEOObserverHashTable, MNLocation, MNTracePlayerScheduler, MNTracePlayerETAUpdater, MNSessionUpdateManager, NSMutableArray;

@interface MNTracePlayer : NSObject <MNTracePlayerSchedulerDelegate, MNTimeProvider> {
    double _traceStartTimestamp;
    GEOObserverHashTable *_observers;
    MNTracePlayerScheduler *_scheduler;
    MNTracePlayerTimelineStream *_locationStream;
    MNLocation *_lastReportedLocation;
    MNTracePlayerETAUpdater *_etaUpdater;
    MNTracePlayerTimelineStream *_etaUpdatesStream;
    MNTracePlayerTimelineStream *_networkEventsStream;
    NSMutableArray *_processedWaypointEvents;
}

@property (readonly, nonatomic) MNTrace *trace;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) double position;
@property (readonly, nonatomic) double duration;
@property (nonatomic) double speedMultiplier;
@property (nonatomic) BOOL shouldUpdateRouteWhenJumping;
@property (nonatomic) BOOL shouldPlayNetworkEvents;
@property (nonatomic) BOOL shouldPlayETARequests;
@property (readonly, nonatomic) MNSessionUpdateManager *sessionUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double currentTime;

- (id)initWithPath:(id)a0;
- (void)pause;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)start;
- (void)unregisterObserver:(id)a0;
- (void)stop;
- (void)resume;
- (void).cxx_destruct;
- (id)_changeRouteRowForTimestamp:(double)a0;
- (void)_createTimelineStreams;
- (id)_directionsRowForChangeRouteRow:(id)a0;
- (unsigned long long)_directionsRowIndexBeforeTimestamp:(double)a0;
- (id)_etauRowForChangeRouteRow:(id)a0;
- (id)_locationRowBeforeTimestamp:(double)a0;
- (id)_locationWithCurrentDate:(id)a0;
- (id)_routeForRouteChangeRow:(id)a0;
- (id)guidanceEventNearTimestamp:(double)a0;
- (id)initWithPath:(id)a0 outError:(id *)a1;
- (id)initWithTrace:(id)a0;
- (void)jumpToBookmarkAtIndex:(unsigned long long)a0;
- (void)jumpToLocationAtIndex:(unsigned long long)a0;
- (void)jumpToTime:(double)a0;
- (BOOL)requestDirectionsNearTimestamp:(double)a0 withHandler:(id /* block */)a1;
- (void)skipByTimeInterval:(double)a0;
- (void)startAtLocationIndex:(unsigned long long)a0;
- (void)tracePlayerScheduler:(id)a0 didUpdatePosition:(double)a1;

@end
