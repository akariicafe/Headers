@class NSURLResponse;

@interface ISURLRequestPerformance : NSObject {
    double _finishTime;
    double _receivedResponseTime;
    double _renderBeginTime;
    double _renderEndTime;
}

@property (nonatomic) double startTime;
@property (copy, nonatomic) NSURLResponse *URLResponse;
@property (readonly, nonatomic) double finishInterval;
@property (readonly, nonatomic) double receivedResponseInterval;
@property (readonly, nonatomic) double renderBeginInterval;
@property (readonly, nonatomic) double renderEndInterval;

- (void)dealloc;
- (void)setFinishTime:(double)a0;
- (void)setReceivedResponseTime:(double)a0;
- (void)setRenderBeginTime:(double)a0;
- (void)setRenderFinishTime:(double)a0;

@end
