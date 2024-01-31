@interface RTTripSegmentActivityFilter : NSObject

+ (BOOL)isRealModeOfTransportation:(unsigned long long)a0;

- (id)discardFalseTransitionsFromActivities:(id)a0 whileInTransportMode:(unsigned long long)a1 dateInterval:(id)a2 withTimeCushion:(double)a3;
- (id)discardTrivialActivitiesBetweenIdenticalRealActivities:(id)a0;
- (id)findGapMergeOrderFromActivities:(id)a0 dateInterval:(id)a1;
- (id)findIndicesAndDurationForMode:(unsigned long long)a0 activities:(id)a1 dateInterval:(id)a2;
- (double)findTotalDurationForActivity:(unsigned long long)a0 activities:(id)a1 dateInterval:(id)a2;
- (id)forceActivities:(id)a0 toTransportationMode:(unsigned long long)a1 dateInterval:(id)a2;
- (id)forceActivities:(id)a0 withinTransitionInterval:(id)a1 toAutoByConnection:(id)a2;
- (BOOL)isRealModeOfTransportationExisted:(id)a0;
- (id)mergeRepeatedActivities:(id)a0;
- (id)populatePredominantActivity:(id)a0 dateInterval:(id)a1 predominantActivityType:(unsigned long long)a2;
- (id)preventDirectModeSwitchingInActivities:(id)a0 dateInterval:(id)a1;
- (id)removeFalseTransitionsFromActivities:(id)a0 dateInterval:(id)a1 predominantActivityType:(unsigned long long)a2;
- (id)removeNonTransportationModeActivities:(id)a0 dateInterval:(id)a1 vehicleIntervals:(id)a2 predominantActivityType:(unsigned long long)a3;

@end
