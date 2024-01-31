@class NSString;

@interface OverlayLayerDataSourceRenderTargetSizeObserver : NSObject <MDRenderTargetSizeObserver> {
    struct CGSize { double width; double height; } _size;
    struct read_write_lock { struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock; } _mtx;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
