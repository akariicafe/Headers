@class NSString, PKAccountRewardsTierSummary, NSArray;

@interface PKRewardsSummaryChartBarConfiguration : NSObject <PKSegmentedBarConfiguration> {
    NSArray *_tierAmounts;
}

@property (readonly, nonatomic) PKAccountRewardsTierSummary *summary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isReady;
- (double)totalValue;
- (void).cxx_destruct;
- (long long)numberOfSegments;
- (id)initWithSummary:(id)a0;
- (unsigned long long)_rewardsTierForIndex:(long long)a0;
- (id)_valueAtIndex:(long long)a0;
- (id)colorForSegmentAtIndex:(long long)a0;
- (double)valueForSegmentAtIndex:(long long)a0;

@end
