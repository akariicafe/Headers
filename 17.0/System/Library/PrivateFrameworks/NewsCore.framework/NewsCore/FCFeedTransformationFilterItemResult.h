@interface FCFeedTransformationFilterItemResult : NSObject

@property (readonly, nonatomic) id item;
@property (nonatomic, getter=isFiltered) BOOL filtered;
@property (nonatomic) unsigned long long filteredReasons;

- (id)initWithItem:(id)a0 filtered:(BOOL)a1 filteredReasons:(unsigned long long)a2;
- (void).cxx_destruct;

@end
