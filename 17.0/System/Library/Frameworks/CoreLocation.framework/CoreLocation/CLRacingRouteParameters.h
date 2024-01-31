@class CLRacingRouteState, NSArray, CLRouteBoundingBox, CLRacingRouteVariables;

@interface CLRacingRouteParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *routeMatrixIndexVec;
@property (readonly, copy, nonatomic) CLRacingRouteVariables *racingRouteVariables;
@property (readonly, copy, nonatomic) CLRacingRouteState *startPointOnCurrentRoute;
@property (readonly, copy, nonatomic) CLRacingRouteState *startPointOnReferenceRoute;
@property (readonly, copy, nonatomic) CLRacingRouteState *lastOnRouteDataPoint;
@property (readonly, copy, nonatomic) CLRacingRouteState *lastProjectedDataPoint;
@property (readonly, copy, nonatomic) CLRouteBoundingBox *routeBoundingBox;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRouteMatrixIndexVec:(id)a0 racingRouteVariables:(id)a1 startPointOnCurrentRoute:(id)a2 startPointOnReferenceRoute:(id)a3 lastOnRouteDataPoint:(id)a4 lastProjectedDataPoint:(id)a5 routeBoundingBox:(id)a6;

@end
