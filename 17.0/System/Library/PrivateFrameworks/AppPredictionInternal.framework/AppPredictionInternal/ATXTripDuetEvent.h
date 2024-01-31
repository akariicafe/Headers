@interface ATXTripDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) unsigned long long origin;
@property (readonly, nonatomic) unsigned long long destination;
@property (readonly, nonatomic) double durationAtOrigin;

- (unsigned long long)rtLocationToBMSemanticLocation:(long long)a0;
- (id)initWithCurrentContextStoreValues;
- (BOOL)isEqualToATXTripDuetEvent:(id)a0;
- (id)convertToUpcomingCommuteEventWithWindowDuration:(double)a0;
- (id)identifier;
- (id)initWithCurrentContextStoreValuesWithOriginLOI:(id)a0 ignoreBeforeDate:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithOrigin:(unsigned long long)a0 destination:(unsigned long long)a1 durationAtOrigin:(double)a2 startDate:(id)a3 endDate:(id)a4;

@end
