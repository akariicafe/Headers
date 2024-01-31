@class NSString;
@protocol VKCustomFeatureDataSource;

@interface VKCustomFeatureDataSourceObserverThunk : NSObject <VKCustomFeatureDataSourceObserver> {
    void *_observer;
    struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; id<VKCustomFeatureDataSource> _obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)globalFeaturesDidChangeForDataSource:(id)a0;
- (void)dealloc;
- (void)dataSource:(id)a0 didChangeSceneID:(unsigned char)a1;
- (void)dataSource:(id)a0 featuresDidChangeForRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1;
- (void)clearObserver;
- (id).cxx_construct;
- (id)initWithDataSource:(id)a0 observer:(void *)a1;
- (void).cxx_destruct;
- (void)dataSource:(id)a0 didChangeSceneState:(unsigned char)a1;

@end
