@class NSMapTable, NSOperationQueue, NSOperation, NSObject;
@protocol OS_dispatch_group;

@interface MPModelStoreBrowseRequestOperation : MPStoreModelRequestOperation {
    BOOL _didInitializeTimeoutIntervalAdditions;
    BOOL _errorReportingDisabled;
    NSOperation *_individualPendingNestedRequestOperation;
    NSObject<OS_dispatch_group> *_nestedRequestOperationsGroup;
    NSOperationQueue *_nestedRequestsOperationQueue;
    unsigned long long _requestType;
    NSMapTable *_sectionsToPendingNestedRequestOperations;
    double _timeoutIntervalAdditions;
}

- (void)execute;
- (void).cxx_destruct;
- (void)cancel;
- (id)_nestedRequestsOperationQueue;
- (void)_produceCarPlayResponseWithParser:(id)a0 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)a1 completion:(id /* block */)a2;
- (void)_produceRegularResponseWithParser:(id)a0 completion:(id /* block */)a1;
- (void)_produceResponseWithParser:(id)a0 results:(id)a1 changeDetails:(id)a2 completion:(id /* block */)a3;
- (double)adjustTimeoutInterval:(double)a0;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)a0 error:(id *)a1;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;

@end
