@interface ObjectCacheByCString : NSObject {
    struct __CFDictionary { } *_dictionary;
}

- (id)init;
- (void)dealloc;
- (id)getObjectForCStringKey:(char *)a0;
- (void)setObject:(id)a0 forCStringKey:(char *)a1;

@end
