@class NSObject, MPModelLibrarySearchRequest;
@protocol OS_dispatch_queue;

@interface MPModelLibrarySearchRequestOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    struct shared_ptr<mlcore::LocalizedSearchQuery> { struct LocalizedSearchQuery *__ptr_; struct __shared_weak_count *__cntrl_; } _runningQuery;
}

@property (copy, nonatomic) MPModelLibrarySearchRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (id)init;
- (void)execute;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;

@end
