@interface AXSDTimeStamp : NSObject {
    double _duration;
    double _time;
}

@property (readonly) double duration;
@property (readonly) double time;

- (id)initWithResult:(id)a0;
- (id)initWithTime:(double)a0 andDuration:(double)a1;

@end
