@interface ARCoachingAnimTime : NSObject {
    double _absoluteTime;
    double _startTime;
    double _oscillatingTime;
    double _delta;
    double _deltaPercentage;
}

@property (nonatomic) double absoluteTime;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (readonly, nonatomic) double oscillatingTime;
@property (readonly, nonatomic) double delta;
@property (readonly, nonatomic) double deltaPercentage;

- (id)init;

@end
