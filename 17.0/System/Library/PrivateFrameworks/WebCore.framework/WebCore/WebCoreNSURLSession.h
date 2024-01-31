@class NSString, NSOperationQueue, NSURLSessionConfiguration, NSObject;
@protocol OS_dispatch_queue, NSURLSessionTaskDelegate;

@interface WebCoreNSURLSession : NSObject {
    struct RefPtr<WebCore::PlatformMediaResourceLoader, WTF::RawPtrTraits<WebCore::PlatformMediaResourceLoader>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResourceLoader>> { struct PlatformMediaResourceLoader *m_ptr; } _loader;
    struct WeakObjCPtr<id<NSURLSessionDelegate>> { id m_weakReference; } _delegate;
    struct RetainPtr<NSOperationQueue> { void *m_ptr; } _queue;
    struct RetainPtr<NSString> { void *m_ptr; } _sessionDescription;
    struct HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTableTraits> { struct HashTable<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _dataTasks;
    struct HashSet<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::DefaultHash<RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTableTraits> { struct HashTable<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::SecurityOrigin>, WTF::IdentityExtractor, WTF::DefaultHash<RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _origins;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } _dataTasksLock;
    BOOL _invalidated;
    struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } _nextTaskIdentifier;
    struct OSObjectPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *m_ptr; } _internalQueue;
    unsigned char _corsResults;
    struct RefPtr<WebCore::RangeResponseGenerator, WTF::RawPtrTraits<WebCore::RangeResponseGenerator>, WTF::DefaultRefDerefTraits<WebCore::RangeResponseGenerator>> { struct RangeResponseGenerator *m_ptr; } _rangeResponseGenerator;
}

@property (readonly) void *loader;
@property (retain) id<NSURLSessionTaskDelegate> delegate;
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (copy) NSString *sessionDescription;
@property (readonly) BOOL didPassCORSAccessChecks;

- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)delegate;
- (void)getTasksWithCompletionHandler:(id /* block */)a0;
- (id)uploadTaskWithStreamedRequest:(id)a0;
- (id)delegateQueue;
- (id)downloadTaskWithRequest:(id)a0;
- (id)uploadTaskWithRequest:(id)a0 fromData:(id)a1;
- (id).cxx_construct;
- (void)getAllTasksWithCompletionHandler:(id /* block */)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)configuration;
- (id)dataTaskWithURL:(id)a0;
- (id)dataTaskWithRequest:(id)a0;
- (void)finishTasksAndInvalidate;
- (id)downloadTaskWithURL:(id)a0;
- (void)setDelegate:(id)a0;
- (id)downloadTaskWithResumeData:(id)a0;
- (void)invalidateAndCancel;
- (id)uploadTaskWithRequest:(id)a0 fromFile:(id)a1;
- (void)resetWithCompletionHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)streamTaskWithHostName:(id)a0 port:(long long)a1;
- (id)streamTaskWithNetService:(id)a0;
- (void *)loader;
- (void)sendH2Ping:(id)a0 pongHandler:(id /* block */)a1;
- (void)addDelegateOperation:(void *)a0;
- (BOOL)didPassCORSAccessChecks;
- (id)initWithResourceLoader:(void *)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (BOOL)isCrossOrigin:(const void *)a0;
- (void *)rangeResponseGenerator;
- (void)task:(id)a0 addSecurityOrigin:(void *)a1;
- (void)task:(id)a0 didReceiveCORSAccessCheckResult:(BOOL)a1;
- (void)taskCompleted:(id)a0;

@end
