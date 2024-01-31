@class SYDocumentWorkflowsClient, NSObject;
@protocol OS_dispatch_queue;

@interface SYDocumentWorkflowsActivityChangeHandler : NSObject {
    NSObject<OS_dispatch_queue> *_retryQueue;
    SYDocumentWorkflowsClient *_client;
}

+ (id)_indexKeyFromUserActivity:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchAttributesForItemsWithIndexKeys:(id)a0 maxRetryCount:(long long)a1 completion:(id /* block */)a2;
- (BOOL)canHandleUserActivityChange:(id)a0 appStateObserver:(id)a1;
- (void)handleActiveUserActivityChange:(id)a0 withCompletion:(id /* block */)a1;

@end
