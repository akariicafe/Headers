@class NSString, MNArrivalUpdater, GEORouteMatcher;

@interface MNSteppingLocationTracker : MNLocationTracker <MNArrivalUpdaterDelegate> {
    GEORouteMatcher *_routeMatcher;
    MNArrivalUpdater *_arrivalUpdater;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLocation:(id)a0;
- (void).cxx_destruct;
- (int)transportType;
- (void)stopTracking;
- (id)_matchedLocationForLocation:(id)a0;
- (void)arrivalUpdater:(id)a0 didUpdateArrivalInfo:(id)a1;
- (void)arrivalUpdaterDidArrive:(id)a0 atEndOfLegAtIndex:(unsigned long long)a1;
- (id)initWithNavigationSession:(id)a0;
- (id)matchedLocationForLocation:(id)a0;
- (void)resetForTracePlayerAtLocation:(id)a0;
- (void)startTrackingWithInitialLocation:(id)a0 targetLegIndex:(unsigned long long)a1;

@end
