@class NSMutableArray;

@interface BWIOSurfaceTracking : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _trackedSurfacesLock;
    NSMutableArray *_trackedSurfaces;
}

+ (void)initialize;
+ (void)noteSurfaceIDInUse:(unsigned int)a0 byClient:(id)a1;
+ (void)noteSurfaceIDNoLongerInUse:(unsigned int)a0 byClient:(id)a1;
+ (void)trackPixelBuffer:(struct __CVBuffer { } *)a0 surfaceUseCountIsZeroHandler:(id /* block */)a1;

- (id)init;
- (void)dealloc;

@end
