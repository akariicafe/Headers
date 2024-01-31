@class NSString;

@interface MTFeedUpdateMetricsAction : NSObject

@property (class, nonatomic, readonly) NSString *error;
@property (class, nonatomic, readonly) NSString *finishedWithoutURL;
@property (class, nonatomic, readonly) NSString *notificationReceived;
@property (class, nonatomic, readonly) NSString *notificationScheduled;
@property (class, nonatomic, readonly) NSString *notificationTapped;
@property (class, nonatomic, readonly) NSString *podcastDataSource;
@property (class, nonatomic, readonly) NSString *notificationSetRetryFlag;
@property (class, nonatomic, readonly) NSString *notificationScheduledViaCarousel;
@property (class, nonatomic, readonly) NSString *pageParser;
@property (class, nonatomic, readonly) NSString *parser;
@property (class, nonatomic, readonly) NSString *fetchFeedsExpectedToUpdate;
@property (class, nonatomic, readonly) NSString *processCarouselTask;

- (id)init;
- (void).cxx_destruct;

@end
