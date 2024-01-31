@protocol CPAnalyticsEventProtocol;

@interface _PXAnalyticsSlideshowInfo : NSObject

@property (retain, nonatomic) id<CPAnalyticsEventProtocol> startEvent;
@property (retain, nonatomic) id<CPAnalyticsEventProtocol> endEvent;
@property (readonly, nonatomic) id<CPAnalyticsEventProtocol> lastPauseEvent;
@property (readonly, nonatomic) double timePaused;
@property (readonly, nonatomic) long long pauseCount;
@property (nonatomic) long long signpostID;
@property (nonatomic) long long appSuspensionCount;

- (void).cxx_destruct;
- (void)pauseWithEvent:(id)a0;
- (void)unpauseWithEvent:(id)a0;

@end
