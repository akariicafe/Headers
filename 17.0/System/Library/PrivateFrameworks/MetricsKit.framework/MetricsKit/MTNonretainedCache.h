@class NSMutableDictionary;

@interface MTNonretainedCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;

- (id)init;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectForKeyedSubscript:(id)a0 creation:(id /* block */)a1;

@end
