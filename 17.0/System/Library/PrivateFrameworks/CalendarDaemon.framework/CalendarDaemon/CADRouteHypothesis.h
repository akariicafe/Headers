@class NSString, NSDate;

@interface CADRouteHypothesis : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int transportType;
@property (readonly, copy, nonatomic) NSDate *conservativeDepartureDate;
@property (readonly, nonatomic) double conservativeTravelTime;
@property (readonly, copy, nonatomic) NSDate *suggestedDepartureDate;
@property (readonly, nonatomic) double estimatedTravelTime;
@property (readonly, copy, nonatomic) NSDate *aggressiveDepartureDate;
@property (readonly, nonatomic) double aggressiveTravelTime;
@property (readonly, copy, nonatomic) NSString *routeName;
@property (readonly, nonatomic) BOOL supportsLiveTraffic;
@property (readonly, nonatomic) unsigned long long currentTrafficDensity;
@property (readonly, copy, nonatomic) NSString *trafficDensityDescription;
@property (readonly, nonatomic) long long travelState;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTransportType:(int)a0 conservativeDepartureDate:(id)a1 conservativeTravelTime:(double)a2 suggestedDepartureDate:(id)a3 estimatedTravelTime:(double)a4 aggressiveDepartureDate:(id)a5 aggressiveTravelTime:(double)a6 routeName:(id)a7 supportsLiveTraffic:(BOOL)a8 currentTrafficDensity:(unsigned long long)a9 trafficDensityDescription:(id)a10 travelState:(long long)a11;

@end
