@class NSMutableDictionary;

@interface EKImageCache : NSObject {
    NSMutableDictionary *_cache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)persistentImageForSourceID:(id)a0 identifier:(id)a1;
- (void)uncacheImage:(id)a0;
- (void)updateToCachedVersionOrCacheImage:(id)a0;

@end
