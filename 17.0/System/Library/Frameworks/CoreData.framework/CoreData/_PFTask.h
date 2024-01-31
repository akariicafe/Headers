@interface _PFTask : NSObject {
    int _cd_rc;
    void *_task;
    void *arguments;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } condition;
    int isFinishedFlag;
}

- (id)retain;
- (void)dealloc;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (id)initWithFunction:(void /* function */ *)a0 withArgument:(void *)a1 andPriority:(int)a2;
- (BOOL)_isDeallocating;
- (oneway void)release;

@end
