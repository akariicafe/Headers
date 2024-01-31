@interface HMDBackingStoreCacheFetchZonesOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id /* block */ fetchResult;

- (id)initWithFetchResult:(id /* block */)a0;
- (void).cxx_destruct;
- (id)mainReturningError;

@end
