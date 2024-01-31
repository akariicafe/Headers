@class MNActiveRouteInfo;

@interface MNNavigationServiceCallback_DidUpdateBackgroundWalkingRoute : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNActiveRouteInfo *routeInfo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;

@end
