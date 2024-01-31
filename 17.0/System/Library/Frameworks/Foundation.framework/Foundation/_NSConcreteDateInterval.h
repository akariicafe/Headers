@class NSDate;

@interface _NSConcreteDateInterval : NSDateInterval {
    NSDate *_startDate;
    double _duration;
}

- (id)startDate;
- (id)init;
- (void)dealloc;
- (id)endDate;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (double)duration;
- (id)initWithStartDate:(id)a0 duration:(double)a1;

@end
