@class VKSharedResources, NSMapTable;

@interface VKSharedResourcesManager : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    VKSharedResources *_sharedResources;
    NSMapTable *_tilegroupIdentifierToResources;
}

+ (void)removeResourceUser;
+ (id)sharedManager;
+ (id)sharedResourcesCreateIfNil:(BOOL)a0 addResourceUser:(BOOL)a1;
+ (id)sharedResources;

- (id)init;
- (void)_removeResourceUser;
- (BOOL)hasResources;
- (id)resourcesCreateIfNil:(BOOL)a0 addResourceUser:(BOOL)a1;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
