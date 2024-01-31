@class NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface BWIOSurfacePoller : NSObject {
    NSObject<OS_dispatch_source> *_pollingTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _trackedSurfacesLock;
    NSMutableArray *_trackedSurfaces;
}

+ (void)trackSurface:(struct __IOSurface { } *)a0 useCountIsZeroHandler:(id /* block */)a1;

- (id)init;
- (void)dealloc;

@end
