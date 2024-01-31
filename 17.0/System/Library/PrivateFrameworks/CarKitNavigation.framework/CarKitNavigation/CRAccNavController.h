@class NSUUID, CRAccNavRouteGuidance, CRAccNavInfoCache, CRAccNavComponent;
@protocol CRAccNavControllerDelegate;

@interface CRAccNavController : NSObject

@property (retain, nonatomic) CRAccNavRouteGuidance *routeGuidance;
@property (retain, nonatomic) CRAccNavInfoCache *sentManeuvers;
@property (retain, nonatomic) CRAccNavInfoCache *sentLaneGuidances;
@property (readonly, nonatomic) CRAccNavComponent *component;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, weak, nonatomic) id<CRAccNavControllerDelegate> delegate;

- (void)reset;
- (id)description;
- (void).cxx_destruct;
- (void)delegateUpdatedLaneGuidance:(id)a0;
- (void)delegateUpdatedLaneGuidances;
- (void)delegateUpdatedManeuver:(id)a0;
- (void)delegateUpdatedManeuvers;
- (void)delegateUpdatedRouteGuidance;
- (id)initWithComponent:(id)a0 delegate:(id)a1;
- (void)resendInfo;
- (void)_sendNavInfoFromIndex:(id)a0 fromSource:(id)a1 cache:(id)a2;
- (void)sendInfo;
- (void)sendLaneGuidances;
- (void)sendManeuvers;

@end
