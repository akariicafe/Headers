@interface PPMockRTRoutineManager : NSObject

+ (void)initialize;
+ (id)defaultManager;
+ (void)setMockLocationsOfInterest:(id)a0;

- (id)init;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)a0 endDate:(id)a1 withHandler:(id /* block */)a2;

@end
