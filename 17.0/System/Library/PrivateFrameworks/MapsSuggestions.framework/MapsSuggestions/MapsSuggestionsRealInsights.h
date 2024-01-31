@class MapsSuggestionsRoutineRelevanceScoreProvider, NSString, NSXPCConnection, MapsSuggestionsPortraitRelevanceScoreProvider, MapsSuggestionsPortrait, NSObject, MapsSuggestionsFwdGeocodingRelevanceScoreProvider, MapsSuggestionsRelevanceScorer;
@protocol MapsSuggestionsInsightsUpdates, OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsRealInsights : NSObject <MapsSuggestionsSignalPipelineUpdateProxy, MapsSuggestionsInsights> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
    MapsSuggestionsFwdGeocodingRelevanceScoreProvider *_fwdGeoCodingRoutineScoreProvider;
    MapsSuggestionsRoutineRelevanceScoreProvider *_routineScoreProvider;
    MapsSuggestionsPortraitRelevanceScoreProvider *_portraitScoreProvider;
    MapsSuggestionsPortrait *_portrait;
    MapsSuggestionsRelevanceScorer *_relevanceScorer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsInsightsUpdates> insightUpdatesDelegate;
@property (readonly, nonatomic) NSString *uniqueName;

- (id)signalPackForDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (char)currentTripWithHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initFromResourceDepot:(id)a0;
- (char)signalPackForDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;
- (void)preload;
- (id).cxx_construct;
- (char)futureTripsWithHandler:(id /* block */)a0;
- (BOOL)userHasAPaymentCard;
- (BOOL)userHasAnUpcomingTrip;
- (id)signalPackForDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void).cxx_destruct;
- (BOOL)userIsCurrentlyInATrip;
- (BOOL)isTransitUser;
- (char)signalPackForDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;
- (char)signalPackForHereWithHandler:(id /* block */)a0;
- (id)confidenceScoresForMapItems:(id)a0;
- (id)signalPackForHere;
- (BOOL)userHasATransitCard;
- (double)isTouristHere;
- (BOOL)userHasAnExpressPaymentCard;
- (BOOL)isTransitUserHere;
- (id)confidenceScoresForContacts:(id)a0 addresses:(id)a1;
- (void)signalPackUpdated:(id)a0;

@end
