@class STStatusBarDataEntry;

@interface STUIStatusBarDataAggregatorUpdate : NSObject

@property (retain, nonatomic) STStatusBarDataEntry *entry;
@property (nonatomic) BOOL animated;

+ (id)updateWithEntry:(id)a0;

- (void).cxx_destruct;

@end
