@class NSDateComponents;

@interface _ActivityCurrentValueSummary : HKActivitySummary

@property (nonatomic) long long timeScope;
@property (nonatomic) double collatedSummaryCount;
@property (retain, nonatomic) NSDateComponents *collationDateComponents;

- (void)combineWithActivitySummary:(id)a0;
- (id)_divideQuantity:(id)a0 divisor:(double)a1;
- (id)_maxQuantity:(id)a0 otherQuantity:(id)a1;
- (id)dateComponentsForCalendar:(id)a0;
- (void).cxx_destruct;
- (void)finishCollatingSummaryWithGraphView:(id)a0;
- (id)initWithTimeScope:(long long)a0;
- (id)_addQuantity:(id)a0 toQuantity:(id)a1;

@end
