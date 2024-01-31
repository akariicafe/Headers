@class NSString, EKDirectorySearchResultSet, EKDirectoryGroup;

@interface EKGroupExpansionOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
    NSString *_accountID;
    EKDirectoryGroup *_group;
    id /* block */ _completionBlock;
    EKDirectorySearchResultSet *_resultsSet;
}

- (BOOL)isExecuting;
- (void)main;
- (void)start;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)_finishWithError:(id)a0;
- (void)_processResults:(id)a0;
- (id)_processResults:(id)a0 class:(Class)a1;
- (id)initWithSource:(id)a0 group:(id)a1 completionBlock:(id /* block */)a2;

@end
