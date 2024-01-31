@class VKSharedResources, VKInternalIconManager, NSObject;
@protocol OS_dispatch_source;

@interface VKIconManager : NSObject {
    VKSharedResources *_sharedResources;
    VKInternalIconManager *_iconManager;
    BOOL _usingSingletonIconManager;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    NSObject<OS_dispatch_source> *_iconManagerReleaseSource;
    unsigned int _iconManagerTimerID;
}

+ (id)sharedManager;

- (void)purge;
- (id)init;
- (void)dealloc;
- (id)imageForName:(id)a0 contentScale:(float)a1 sizeGroup:(long long)a2 modifiers:(id)a3;
- (id)imageForStyleAttributes:(id)a0 withStylesheetName:(id)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (unsigned int)styleAttributeTransitTypeKey;
- (id).cxx_construct;
- (id)imageForIconID:(unsigned int)a0 contentScale:(float)a1 sizeGroup:(long long)a2 modifiers:(id)a3;
- (BOOL)isCachingAtlases;
- (void).cxx_destruct;
- (id)imageForKey:(unsigned int)a0 value:(unsigned int)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (id)imageForStyleAttributes:(id)a0 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; })a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (void)setIsCachingAtlases:(BOOL)a0;
- (unsigned int)darkVariant;
- (id)_internalIconManager;
- (unsigned int)trafficIncidentTypeKey;
- (id)imageForImageSourceKey:(id)a0;
- (id)imageForDataID:(unsigned int)a0 text:(id)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;

@end
