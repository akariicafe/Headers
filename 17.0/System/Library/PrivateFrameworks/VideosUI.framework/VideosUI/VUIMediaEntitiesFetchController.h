@class NSArray, VUIMediaEntityFetchResponse;
@protocol VUIMediaEntitiesFetchControllerDelegate;

@interface VUIMediaEntitiesFetchController : VUIMediaLibraryFetchController

@property (copy, nonatomic) NSArray *requests;
@property (copy, nonatomic) NSArray *responses;
@property (weak, nonatomic) id<VUIMediaEntitiesFetchControllerDelegate> delegate;
@property (readonly, nonatomic) VUIMediaEntityFetchResponse *response;

- (void).cxx_destruct;
- (void)cancelFetch;
- (void)_didCompleteFetchOperation:(id)a0;
- (id)_fetchOperationForFetchReason:(long long)a0;
- (void)_handleContentsChangeFetchControllerOperationDidComplete:(id)a0;
- (void)_handleManualFetchControllerOperationDidComplete:(id)a0;
- (void)_notifyDelegateWithBlock:(id /* block */)a0;
- (void)_notifyFetchRequests:(id)a0 didCompleteWithResult:(id)a1;
- (void)_notifyFetchRequests:(id)a0 didFailWithError:(id)a1;
- (BOOL)_updateResponseWithResult:(id)a0 replaceContentsOnNilChanges:(BOOL)a1;
- (id)initWithMediaLibrary:(id)a0;
- (id)initWithMediaLibrary:(id)a0 fetchRequests:(id)a1;

@end
