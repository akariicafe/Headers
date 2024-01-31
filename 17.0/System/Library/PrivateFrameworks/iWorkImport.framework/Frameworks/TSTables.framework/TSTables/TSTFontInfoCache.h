@class NSMapTable, NSMutableArray;

@interface TSTFontInfoCache : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resolvedTextStyleLock;
    struct unordered_map<unsigned long, TSTFontInfoCacheEntry *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSTFontInfoCacheEntry *>>> { struct __hash_table<std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, std::hash<unsigned long>, std::equal_to<unsigned long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSTFontInfoCacheEntry *>, std::equal_to<unsigned long>, std::hash<unsigned long>>> { float __value_; } __p3_; } __table_; } _cache;
}

@property (retain, nonatomic) NSMapTable *propertyMapToTextStyleMap;
@property (retain, nonatomic) NSMutableArray *strongReferences;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)p_didReceiveMemoryWarning:(id)a0;
- (void)p_didEnterBackground:(id)a0;
- (id)fontInfoForTextStyle:(id)a0;
- (id)fontInfoForTextStyle:(id)a0 withString:(id)a1;
- (id)resolvedTextStyleWithPropertyMap:(id)a0;

@end
