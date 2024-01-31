@class NSObject, NSArray, FINode;

@interface DSProvidersObserver : NSObject {
    struct TNodePtr { FINode *fFINode; } fParentNode;
    NSObject *_token;
    NSArray *_providers;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    struct TConditionVariable { struct condition_variable_any { struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __cv_; struct shared_ptr<std::mutex> { struct mutex *__ptr_; struct __shared_weak_count *__cntrl_; } __mut_; } fCondition; int fWaitCount; } _cv;
    BOOL populated;
}

@property (readonly) BOOL firstUpdateReceived;

- (void)startObserving;
- (id)providers;
- (void)stopObserving;
- (void)setProviders:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)blockUntilPopulated;
- (void)collectionSynched;
- (BOOL)populated;
- (id)providersByAddingProviderIfNeeded:(id)a0;
- (void)receivedChanges:(id)a0;

@end
