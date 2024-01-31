@class NSArray, NSMutableSet;

@interface VKARWalkingFeatureSet : NSObject {
    struct _retain_ptr<NSArray<VKARWalkingFeature *> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; NSArray *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _features;
    long long _state;
    struct _retain_ptr<NSMutableSet<id<VKARWalkingFeatureSetObserver>> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; NSMutableSet *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _observers;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
}

@property (nonatomic) long long state;
@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) NSArray *features;

- (void)removeObserver:(id)a0;
- (id)initWithFeatures:(id)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addObserver:(id)a0;
- (void)_stateWillChangeFromState:(long long)a0 nextState:(long long)a1;

@end
