@class NSArray, NSError, geo_isolater, VGVehicle;

@interface MNRouteAttributes : GEORouteAttributes <NSSecureCoding, NSCopying> {
    NSArray *_latLngs;
    BOOL _forceUpdate;
    VGVehicle *_vehicle;
    NSError *_vgError;
    geo_isolater *_vehicleIsolator;
    NSArray *_lprRules;
    NSError *_lprError;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasResolvedRules;

+ (void)_loadLPRRulesForWaypoints:(id)a0 forceUpdate:(BOOL)a1 queue:(id)a2 completion:(id /* block */)a3;

- (BOOL)shouldRetryForError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)buildRouteAttributes:(id)a0 queue:(id)a1 result:(id /* block */)a2;
- (void)buildRouteAttributes:(id)a0 result:(id /* block */)a1;
- (void)buildRouteAttributesForETAUpdateRequest:(id)a0 queue:(id)a1 result:(id /* block */)a2;
- (id)initWithAttributes:(id)a0 waypoints:(id)a1;
- (id)vehicle;
- (void)_loadRulesIfNecessaryWithVehicle:(id)a0 queue:(id)a1 finishedHandler:(id /* block */)a2;
- (void)_populateRouteAttributesWithVehicle:(id)a0 finishedHandler:(id /* block */)a1;
- (void)_resolveSelectedVehicle:(id /* block */)a0;
- (id)initWithAttributes:(id)a0 latLngs:(id)a1;

@end
