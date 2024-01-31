@interface BMBasketExtractor : NSObject

@property BOOL shouldStop;
@property (readonly, nonatomic) double samplingInterval;

- (id)extractBasketsFromEvents:(id)a0 itemTypes:(id)a1;
- (id)extractBasketsFromEvents:(id)a0 withTemporalFeatures:(BOOL)a1;
- (id)extractDatedBasketsFromEvents:(id)a0 itemTypes:(id)a1;
- (id)extractTemporalItemsFromDate:(id)a0;
- (id)initWithSamplingInterval:(double)a0;
- (id)slotForHourOfDay:(id)a0;
- (id)slotForHourOfDay:(id)a0 slotDuration:(id)a1;
- (void)terminateEarly;

@end
