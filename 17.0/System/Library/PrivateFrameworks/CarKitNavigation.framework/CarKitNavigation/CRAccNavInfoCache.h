@class NSMutableDictionary;

@interface CRAccNavInfoCache : NSObject <NSFastEnumeration>

@property (readonly, nonatomic) NSMutableDictionary *accNavInfo;
@property (readonly, nonatomic) unsigned long long countLimit;
@property (readonly, nonatomic) unsigned long long count;

- (id)indexes;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCountLimit:(unsigned long long)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;

@end
