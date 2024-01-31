@class NSMutableDictionary, __end_cap_, __end_;

@interface TSUIndexedStringStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> { id *__value_; } x1; } _stringByIndex;
    NSMutableDictionary *_indexByString;
}

- (unsigned long long)indexForString:(id)a0;
- (id)init;
- (unsigned long long)count;
- (id).cxx_construct;
- (id)stringForIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
