@class NSData, NSString;

@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    void *_parent;
    long long _expectedContentSize;
    struct RetainPtr<NSData> { void *m_ptr; } _data;
    BOOL _complete;
    struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _requests;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } _dataLock;
}

@property (readonly) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void).cxx_destruct;
- (void)enqueueRequest:(id)a0;
- (id)initWithParent:(void *)a0;
- (void)resourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;
- (void)fulfillRequest:(id)a0;
- (BOOL)canFulfillRequest:(id)a0;
- (void)fulfillPendingRequests;
- (void)setExpectedContentSize:(long long)a0;
- (void)updateData:(id)a0 complete:(BOOL)a1;

@end
