@protocol _UITextAttributeDefaults;

@interface _UIMutableTextAttributeDictionary : NSMutableDictionary

@property (retain, nonatomic) id<_UITextAttributeDefaults> fallback;

+ (id)alloc;
+ (id)new;

- (BOOL)usesFallbackForKey:(id)a0;
- (void)setIgnoresFallback:(BOOL)a0 forKey:(id)a1;
- (id)initWithDictionary:(id)a0 fallback:(id)a1;
- (id)sparseDictionary;
- (id)initWithFallback:(id)a0;
- (BOOL)ignoresFallbackForKey:(id)a0;

@end
