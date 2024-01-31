@class NSUUID, NSDateInterval;

@interface RTTripSegmentFeatures : NSObject

@property (nonatomic) unsigned long long transitionIndex;
@property (retain, nonatomic) NSUUID *tripId;
@property (nonatomic) long long mode;
@property (retain, nonatomic) NSDateInterval *dateInterval;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTransitionIndex:(unsigned long long)a0 tripId:(id)a1 mode:(long long)a2 dateInterval:(id)a3;

@end
