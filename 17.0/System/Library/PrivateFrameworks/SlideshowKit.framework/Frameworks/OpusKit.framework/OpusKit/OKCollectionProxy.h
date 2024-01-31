@protocol OKCollectionProxyDataSource;

@interface OKCollectionProxy : NSDictionary

@property (nonatomic) id<OKCollectionProxyDataSource> dataSource;
@property (nonatomic) unsigned long long tag;

- (id)init;
- (void)dealloc;
- (id)keyEnumerator;
- (unsigned long long)count;
- (id)objectAtIndexPath:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;

@end
