@interface GKSessionGlobals : NSObject {
    unsigned int *_activePIDList;
    unsigned long long _activePIDListSize;
    unsigned long long _activePIDListCount;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)init;
- (void)lock;
- (void)unlock;
- (BOOL)hasActivePID:(unsigned int)a0;
- (void)registerPID:(unsigned int)a0;
- (void)unregisterPID:(unsigned int)a0;

@end
