@class NSArray, MKMapItem, NSDate;

@interface MKETAResponse : NSObject

@property (retain, nonatomic) NSDate *expectedArrivalDate;
@property (retain, nonatomic) NSDate *expectedDepartureDate;
@property (readonly, nonatomic, getter=_sortedETAs) NSArray *sortedETAs;
@property (readonly, nonatomic) MKMapItem *source;
@property (readonly, nonatomic) MKMapItem *destination;
@property (readonly, nonatomic) double expectedTravelTime;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) unsigned long long transportType;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)_transportType:(int)a0;
- (id)initWithSource:(id)a0 destination:(id)a1 expectedTravelTime:(double)a2 distance:(double)a3 sortedETAs:(id)a4;

@end
