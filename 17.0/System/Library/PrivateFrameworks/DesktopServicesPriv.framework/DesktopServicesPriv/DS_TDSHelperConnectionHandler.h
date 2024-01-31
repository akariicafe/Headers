@interface DS_TDSHelperConnectionHandler : NSObject {
    void *_helper;
    struct TDSMutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } fMutex; } _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithHelper:(void *)a0;
- (void)clearHelper;
- (void)handleHelperEvent:(id)a0;

@end
