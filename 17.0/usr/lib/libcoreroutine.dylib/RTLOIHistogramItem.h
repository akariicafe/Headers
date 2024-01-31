@class RTLocationOfInterest;

@interface RTLOIHistogramItem : NSObject

@property (retain, nonatomic) RTLocationOfInterest *locationOfInterest;
@property (nonatomic) double timeOfStay;
@property (nonatomic) double probability;
@property (nonatomic) long long numOfEvents;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLocationOfInterest:(id)a0 timeOfStay:(double)a1 andNumOfEvents:(long long)a2;

@end
