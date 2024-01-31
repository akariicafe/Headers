@class NSMutableDictionary;

@interface WFImageCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *backingStore;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (id)init;
- (void)removeAllObjects;
- (struct CGImage { } *)imageForKey:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(struct CGImage { } *)a0 forKey:(id)a1;

@end
