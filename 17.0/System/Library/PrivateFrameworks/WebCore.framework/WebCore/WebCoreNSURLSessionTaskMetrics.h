@class NSArray;

@interface WebCoreNSURLSessionTaskMetrics : NSObject {
    struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> { void *m_ptr; } _transactionMetrics;
}

@property (readonly, copy) NSArray *transactionMetrics;

- (void)dealloc;
- (id)transactionMetrics;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithMetrics:(void *)a0;

@end
