@class NSString, NSMutableDictionary;

@interface OZFxPlugAPIManager : NSObject <PROAPIAccessing> {
    NSMutableDictionary *_apis;
    struct PCRecursiveMutex { void /* function */ **_vptr$PCMutex; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _Mutex; } _mutex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)apiForProtocol:(id)a0;
- (void)registerAPIObject:(id)a0 forProtocol:(id)a1 version:(unsigned int)a2;
- (void)unregisterAPIForProtocol:(id)a0;

@end
