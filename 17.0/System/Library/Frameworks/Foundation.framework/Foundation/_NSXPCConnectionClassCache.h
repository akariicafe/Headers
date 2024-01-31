@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject {
    NSMutableSet *_cache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void)dealloc;

@end
