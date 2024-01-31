@class CAMPreciseTimer, CAMViewfinderViewController;
@protocol CAMViewfinderActionIntervalometerDelegate;

@interface CAMViewfinderActionIntervalometer : NSObject

@property (nonatomic) long long _remaining;
@property (readonly, nonatomic) CAMPreciseTimer *_timer;
@property (readonly, nonatomic) CAMViewfinderViewController *_viewfinderViewController;
@property (readonly, weak, nonatomic) id<CAMViewfinderActionIntervalometerDelegate> delegate;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) long long maximumCount;
@property (readonly, nonatomic) unsigned long long successfullActionCount;

- (id)init;
- (void)manuallyGenerateRequest;
- (void)startGeneratingRequests;
- (void).cxx_destruct;
- (void)_attemptViewfinderActions;
- (id)initWithDelegate:(id)a0 interval:(double)a1 delay:(double)a2 maximumCount:(long long)a3 viewfinderViewController:(id)a4;
- (void)stopAttemptingActions;

@end
