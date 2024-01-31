@class WFRuntimeRunnableDataSourceImpl;

@interface WFRuntimeRunnableDataSource : NSObject

@property (retain, nonatomic) WFRuntimeRunnableDataSourceImpl *impl;

+ (id)sharedDataSource;

- (id)init;
- (void).cxx_destruct;
- (void)loadEntriesFor:(Class)a0 parameterKey:(id)a1 limit:(long long)a2 collectionIdentifier:(id)a3 completionHandler:(id /* block */)a4;

@end
