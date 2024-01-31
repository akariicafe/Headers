@class NSNumber;

@interface MTRSubscribeParams : MTRReadParams

@property (copy, nonatomic) NSNumber *keepPreviousSubscriptions;
@property (copy, nonatomic) NSNumber *autoResubscribe;
@property (nonatomic, getter=shouldReplaceExistingSubscriptions) BOOL replaceExistingSubscriptions;
@property (nonatomic, getter=shouldResubscribeAutomatically) BOOL resubscribeAutomatically;
@property (copy, nonatomic) NSNumber *minInterval;
@property (copy, nonatomic) NSNumber *maxInterval;
@property (nonatomic, getter=shouldReportEventsUrgently) BOOL reportEventsUrgently;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMinInterval:(id)a0 maxInterval:(id)a1;
- (void)toReadPrepareParams:(void *)a0;

@end
