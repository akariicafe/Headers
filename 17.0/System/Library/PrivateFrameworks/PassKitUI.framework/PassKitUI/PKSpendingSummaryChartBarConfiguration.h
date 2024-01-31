@class NSString, NSArray, PKSpendingSummary;

@interface PKSpendingSummaryChartBarConfiguration : NSObject <PKSegmentedBarConfiguration> {
    NSArray *_orderedCategories;
}

@property (readonly, nonatomic) PKSpendingSummary *summary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isReady;
- (double)totalValue;
- (void).cxx_destruct;
- (long long)numberOfSegments;
- (id)initWithSummary:(id)a0;
- (id)_categoryAtIndex:(long long)a0;
- (void)_configureWithSummary:(id)a0;
- (id)colorForSegmentAtIndex:(long long)a0;
- (double)valueForSegmentAtIndex:(long long)a0;

@end
