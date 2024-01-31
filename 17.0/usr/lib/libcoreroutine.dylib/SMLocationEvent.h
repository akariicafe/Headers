@class CLLocation;

@interface SMLocationEvent : NSObject

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) double distance;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 distance:(double)a1;

@end
