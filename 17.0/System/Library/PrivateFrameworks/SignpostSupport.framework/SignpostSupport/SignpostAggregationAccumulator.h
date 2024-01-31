@class NSDictionary, NSMutableDictionary;

@interface SignpostAggregationAccumulator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *mutableSignatureToAccumulatorEntry;
@property (readonly, nonatomic) NSDictionary *signatureToAccumulatorEntry;
@property (readonly, nonatomic) BOOL includeRawIntervals;

- (id)init;
- (void).cxx_destruct;
- (void)handleInterval:(id)a0;
- (id)initWithIncludeRawIntervals:(BOOL)a0;

@end
