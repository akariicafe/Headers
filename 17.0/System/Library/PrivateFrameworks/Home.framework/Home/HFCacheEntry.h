@interface HFCacheEntry : NSObject

@property (readonly, nonatomic) id key;
@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) unsigned long long cost;

- (id)description;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 object:(id)a1 cost:(unsigned long long)a2;

@end
