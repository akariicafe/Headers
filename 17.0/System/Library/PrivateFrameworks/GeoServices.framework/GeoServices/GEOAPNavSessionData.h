@class NSUUID;

@interface GEOAPNavSessionData : NSObject <NSSecureCoding> {
    double _startTime;
    double _accumulatedNavTime;
    BOOL _isPaused;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *routeId;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) BOOL isEV;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) double legStartTime;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)clearNavSession;
- (double)accumulatedSessionDurationAt:(double)a0;
- (void)endNavWithRouteId:(id)a0 at:(double)a1;
- (BOOL)isCurrentRouteId:(id)a0;
- (void)pauseNavWithRouteId:(id)a0 at:(double)a1;
- (void)rerollAt:(double)a0;
- (void)resumeNavWithRouteId:(id)a0 at:(double)a1;
- (void)startNavWithRouteId:(id)a0 isEV:(BOOL)a1 at:(double)a2;

@end
