@interface KGRangePredicate : NSObject

@property (readonly, nonatomic) unsigned long long comparator;
@property (readonly, nonatomic) id value1;
@property (readonly, nonatomic) id value2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithComparator:(unsigned long long)a0 value1:(id)a1 value2:(id)a2;
- (id)leftParen:(unsigned long long)a0;
- (id)rightParen:(unsigned long long)a0;

@end
