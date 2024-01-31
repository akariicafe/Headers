@class NSString, NSNumber;

@interface AMSPageRenderMetricsEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *pageId;
@property (retain, nonatomic) NSNumber *pageAppearTime;
@property (retain, nonatomic) NSNumber *pageEndTime;
@property (retain, nonatomic) NSNumber *pageInterruptTime;
@property (retain, nonatomic) NSNumber *pageReappearTime;
@property (retain, nonatomic) NSNumber *pageRequestTime;
@property (retain, nonatomic) NSString *pageType;
@property (retain, nonatomic) NSNumber *pageUserInteractiveTime;
@property (retain, nonatomic) NSString *pageUrl;
@property (retain, nonatomic) NSString *placement;
@property (retain, nonatomic) NSNumber *resourceRequestEndTime;
@property (retain, nonatomic) NSNumber *resourceRequestStartTime;

- (id)init;

@end
