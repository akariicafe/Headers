@class NSURL, NSObject;

@interface SNLPSSUMatcher : NSObject {
    struct unique_ptr<snlp::ssu::matcher::SSUMatcher, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { struct __compressed_pair<snlp::ssu::matcher::SSUMatcher *, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { struct SSUMatcher *__value_; } __ptr_; } _cppMatcher;
}

@property (readonly, nonatomic) NSObject *_systemEventLock;
@property (readonly) NSURL *cacheDirectoryURL;

+ (struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { struct __hash_node_base<std::__hash_node<std::string, void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::hash<std::string>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::equal_to<std::string>> { float x0; } x3; } x0; })_loadAppShortcutAlwaysTriggeredAllowList;
+ (id)matcherWithDirectories:(id)a0 initializeModelsPreemptively:(BOOL)a1 error:(id *)a2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)performFullCacheUpdateWithUserShortcuts:(id)a0 applicationInfos:(id)a1 error:(id *)a2;
- (id)_initWithCacheDirectoryURL:(id)a0 cppMatcher:(struct unique_ptr<snlp::ssu::matcher::SSUMatcher, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { struct __compressed_pair<snlp::ssu::matcher::SSUMatcher *, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { struct SSUMatcher *x0; } x0; })a1;
- (BOOL)_performFullCacheUpdateInnerWithUserShortcuts:(id)a0 applicationInfos:(id)a1 error:(id *)a2;
- (BOOL)deregisterApp:(id)a0 error:(id *)a1;
- (BOOL)handleUserShortcutsDatabaseChanged:(id)a0 error:(id *)a1;
- (BOOL)performFullCacheUpdate:(id)a0 error:(id *)a1;
- (BOOL)registerApp:(id)a0 error:(id *)a1;
- (id)responseForRequest:(id)a0 error:(id *)a1;

@end
