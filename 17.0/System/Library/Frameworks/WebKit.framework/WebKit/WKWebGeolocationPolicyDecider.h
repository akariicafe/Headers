@interface WKWebGeolocationPolicyDecider : NSObject {
    struct RetainPtr<NSObject<OS_dispatch_queue> *> { void *m_ptr; } _diskDispatchQueue;
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } _sites;
    struct Deque<std::unique_ptr<PermissionRequest>, 0UL> { unsigned long long m_start; unsigned long long m_end; struct VectorBuffer<std::unique_ptr<PermissionRequest>, 0UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } m_buffer; } _challenges;
    struct unique_ptr<PermissionRequest, std::default_delete<PermissionRequest>> { struct __compressed_pair<PermissionRequest *, std::default_delete<PermissionRequest>> { struct PermissionRequest *__value_; } __ptr_; } _activeChallenge;
}

+ (id)sharedPolicyDecider;

- (id)init;
- (void)clearCache;
- (void)dealloc;
- (void)_save;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addChallengeCount:(long long)a0 forToken:(id)a1 requestingURL:(id)a2;
- (void)_executeNextChallenge;
- (long long)_getChallengeCountFromHistoryForToken:(id)a0 requestingURL:(id)a1;
- (id)_siteFile;
- (id)_siteFileInContainerDirectory:(id)a0 creatingIntermediateDirectoriesIfNecessary:(BOOL)a1;
- (void)decidePolicyForGeolocationRequestFromOrigin:(const void *)a0 requestingURL:(id)a1 view:(id)a2 listener:(id)a3;
- (void)_finishActiveChallenge:(BOOL)a0;
- (void)_loadWithCompletionHandler:(id /* block */)a0;

@end
