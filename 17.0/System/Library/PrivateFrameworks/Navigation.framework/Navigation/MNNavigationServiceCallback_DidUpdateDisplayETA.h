@class MNBatteryChargeInfo, MNDisplayETAInfo, MNRouteDistanceInfo;

@interface MNNavigationServiceCallback_DidUpdateDisplayETA : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNBatteryChargeInfo *batteryChargeInfo;
@property (retain, nonatomic) MNDisplayETAInfo *displayETAInfo;
@property (retain, nonatomic) MNRouteDistanceInfo *routeDistanceInfo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;

@end
