@class CAMPreciseTimer, CAMCaptureRequest;
@protocol CAMCaptureRequestIntervalometerDelegate;

@interface CAMCaptureRequestIntervalometer : NSObject

@property (nonatomic) long long remaining;
@property (readonly, nonatomic) CAMPreciseTimer *_timer;
@property (copy, nonatomic) CAMCaptureRequest *prototypeRequest;
@property (readonly, weak, nonatomic) id<CAMCaptureRequestIntervalometerDelegate> delegate;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) long long maximumCount;

- (id)init;
- (void)manuallyGenerateRequest;
- (void)_generateRequestForDelegate;
- (void)startGeneratingRequests;
- (void).cxx_destruct;
- (void)stopGeneratingRequests;
- (id)initWithDelegate:(id)a0 interval:(double)a1 delay:(double)a2 maximumCount:(long long)a3;

@end
