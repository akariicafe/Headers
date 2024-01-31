@class NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface _GEOURLManifestListener : NSObject {
    NSMutableArray *_handlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

+ (id)sharedListener;

- (id)init;
- (void)_finish:(BOOL)a0;
- (void)waitForManifestWithCallback:(id)a0;
- (void).cxx_destruct;

@end
