@class HDQuantityDatum;

@interface _HDSeriesQuantityDataAggregationState : HDDataAggregationState

@property (readonly, nonatomic) HDQuantityDatum *lastDatum;
@property (readonly, nonatomic) long long length;

- (void).cxx_destruct;

@end
