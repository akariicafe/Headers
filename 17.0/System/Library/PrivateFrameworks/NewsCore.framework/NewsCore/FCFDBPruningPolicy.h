@class FCFeedRange;

@interface FCFDBPruningPolicy : NSObject

@property (readonly, copy, nonatomic) FCFeedRange *feedRangeToPrune;

- (void).cxx_destruct;
- (id)initWithMaxAgeToPersist:(double)a0;
- (id)initWithMaxOrderToPrune:(unsigned long long)a0;

@end
