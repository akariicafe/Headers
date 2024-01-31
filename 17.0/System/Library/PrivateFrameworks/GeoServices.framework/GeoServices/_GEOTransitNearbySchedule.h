@class NSArray, NSString;

@interface _GEOTransitNearbySchedule : NSObject <GEOTransitNearbySchedule>

@property (readonly, nonatomic) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nearbyScheduleCategoriesFromSchedule:(id)a0 departureSequenceContainers:(id)a1 scheduledDepartureSequences:(id)a2 incidents:(id)a3;

- (void).cxx_destruct;
- (id)initWithNearbySchedule:(id)a0 departureSequenceContainers:(id)a1 scheduledDepartureSequences:(id)a2 incidents:(id)a3 stopInfo:(id)a4;

@end
