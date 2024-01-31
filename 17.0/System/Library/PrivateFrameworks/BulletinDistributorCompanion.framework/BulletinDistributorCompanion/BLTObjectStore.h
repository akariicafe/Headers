@class NSString;

@interface BLTObjectStore : NSObject {
    NSString *_path;
    Class _elementClass;
}

- (id)keys;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithPath:(id)a0 elementClass:(Class)a1;
- (void)storeObject:(id)a0 withKey:(id)a1;

@end
