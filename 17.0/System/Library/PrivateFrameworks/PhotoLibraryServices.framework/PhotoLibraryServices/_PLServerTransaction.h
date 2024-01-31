@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (void)dealloc;
- (void)pushChangeScopesBatch;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (void)popChangeScopesBatch;
- (void)addChangeScopes:(id)a0;
- (void)abortTransaction;
- (id)changeScopes;
- (void).cxx_destruct;
- (void)_enqueueChangeScopes:(id)a0;
- (id)generateChangeScopesDescription;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)a0;
- (BOOL)isClientTransaction;

@end
