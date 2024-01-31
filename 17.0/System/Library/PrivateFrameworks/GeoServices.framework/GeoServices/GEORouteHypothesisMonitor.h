@class GEOETAUpdater, GEOMapRegion, GEOLocation, NSMutableArray, NSString, GEOComposedWaypoint, GEORouteMatch, GEODirectionsRequestFeedback, GEORouteHypothesizerAnalyticsStore, NSObject, geo_isolater, GEORouteAttributes, NSData, GEOComposedETARoute, GEORouteHypothesis, GEOComposedRoute, GEONavdClientInfo, GEOCommonOptions, GEOMapServiceTraits, NSDate, GEODirectionsRequest;
@protocol OS_dispatch_group;

@interface GEORouteHypothesisMonitor : NSObject <GEOETAUpdaterDelegate, NSSecureCoding> {
    id /* block */ _handler;
    GEOLocation *_originLocation;
    int _transportType;
    GEOLocation *_lastLocation;
    NSObject<OS_dispatch_group> *_etaUpdaterDispatchGroup;
    GEOETAUpdater *_liveETAUpdater;
    GEOComposedETARoute *_liveETARoute;
    GEOCommonOptions *_commonOptions;
    GEOMapServiceTraits *_traits;
    GEORouteHypothesizerAnalyticsStore *_analyticsStore;
    GEONavdClientInfo *_clientInfo;
    GEOComposedRoute *_route;
    geo_isolater *_requestIsolater;
    GEODirectionsRequest *_currentRequest;
    BOOL _needReroute;
    NSMutableArray *_rerouteEntries;
    GEORouteMatch *_routeMatch;
    GEOLocation *_lastMatchedLocation;
    BOOL _hasArrived;
    BOOL _isTraveling;
    double _travelScore;
    GEOMapRegion *_arrivalMapRegion;
    NSString *_traceName;
    NSData *_sessionState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *routeName;
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback;
@property (readonly, nonatomic) BOOL supportsLiveTraffic;
@property (readonly, nonatomic) BOOL supportsDirections;
@property (readonly, nonatomic) GEOComposedWaypoint *source;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) NSDate *arrivalDate;
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) GEORouteHypothesis *hypothesis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithSource:(id)a0 toDestination:(id)a1 traceName:(id)a2 traits:(id)a3 routeAttributes:(id)a4 clientInfo:(id)a5;
+ (id)routeAttributesForTransportType:(int)a0 withArrivalDate:(id)a1;
+ (id)serverFormattedStringFormatter;
+ (void)setServerFormattedStringFormatter:(id)a0;
+ (void)setUserPreferencesProvider:(id)a0;
+ (id)userPreferencesProvider;

- (void)stopMonitoring;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isNavigating;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)_showDebugAlert;
- (void)callHandlerIvar;
- (void)recordETAUpdatesAfterEventStart;
- (void)_executeBlockAccessingCurrentRequest:(id /* block */)a0;
- (void)_fetchETAWithRouteMatch:(id)a0;
- (BOOL)_hasInitialRoute;
- (BOOL)_isNavigatingToDestination;
- (id)_newETAUpdater;
- (void)_recalculateETAWithRouteMatch:(id)a0;
- (void)_receivedRouteResponse:(id)a0 forLocation:(id)a1 isReroute:(BOOL)a2;
- (void)_requestNewRouteFromLocation:(id)a0 usualRouteData:(id)a1;
- (void)_routeRequestFailed:(id)a0;
- (BOOL)_shouldUpdateETAForRouteMatch:(id)a0;
- (void)_updateLocation:(id)a0 allowServer:(BOOL)a1;
- (void)_updateRouteMatchETAAndTravelState;
- (void)_updateScoreForLocation:(id)a0;
- (void)cancelCurrentRequest;
- (void)checkRouteForLocation:(id)a0;
- (void)clientDisplayedUINotification:(unsigned long long)a0;
- (void)etaUpdater:(id)a0 receivedETATrafficUpdateResponse:(id)a1 etaRoute:(id)a2;
- (void)etaUpdater:(id)a0 receivedError:(id)a1;
- (void)etaUpdater:(id)a0 willSendETATrafficUpdateRequest:(id)a1;
- (void)etaUpdaterReceivedInvalidRoute:(id)a0 newRoute:(id)a1 incidentsOnRoute:(id)a2 incidentsOffRoute:(id)a3;
- (void)etaUpdaterRequestCompleted:(id)a0;
- (void)etaUpdaterUpdatedETA:(id)a0;
- (id)initWithSource:(id)a0 toDestination:(id)a1 traceName:(id)a2 traits:(id)a3 routeAttributes:(id)a4 clientInfo:(id)a5;
- (id)navDestination;
- (id)routeMatchForLocation:(id)a0;
- (void)travelStateChanged;
- (void)updateLocation:(id)a0 allowServer:(BOOL)a1 hypothesisHandler:(id /* block */)a2;

@end
