@class NSString;

@interface HMDBackingStoreFetchArchiveOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id /* block */ fetchResult;
@property (copy) NSString *identifier;

- (id)initWithFetchResult:(id /* block */)a0;
- (void).cxx_destruct;
- (id)mainReturningError;

@end
