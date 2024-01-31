@class NSMutableDictionary;

@interface _LocalizedImageCache : NSObject {
    NSMutableDictionary *_cache;
}

- (void)_localeChanged;
- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)imageForKey:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0 forKey:(id)a1;

@end
