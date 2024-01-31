@class NSString, RTMapsSupportManager, NSObject;
@protocol OS_dispatch_queue;

@interface RTPredictedLocationOfInterestProviderMaps : NSObject <RTPredictedLocationOfInterestProvider>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresRoutineEnablement;
- (void)fetchNextPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedExitDatesWithCriteria:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (id)initWithMapsSupportManager:(id)a0;
- (id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryRouteFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 historyEntryRoutes:(id)a3;
- (id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryPlaceDisplayFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 historyEntryPlaceDisplays:(id)a3;
- (void).cxx_destruct;
- (void)fetchPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;

@end
