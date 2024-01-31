@class NSMutableArray;

@interface ML3UpdateSiriIndexOperation : ML3DatabaseOperation

@property (readonly, nonatomic) NSMutableArray *donators;

- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)_execute:(id *)a0;
- (void)_enumerateUserIDsWithBlock:(id /* block */)a0;
- (BOOL)_performFullIndexToRevision:(long long)a0 withDatasetStream:(id)a1;
- (BOOL)_performIncrementalIndexToRevision:(long long)a0 withDatasetStream:(id)a1;

@end
