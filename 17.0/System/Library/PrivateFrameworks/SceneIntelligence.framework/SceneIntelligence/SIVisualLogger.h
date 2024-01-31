@class NSSet;

@interface SIVisualLogger : NSObject {
    struct VZDestination { } *_fileDestination;
    struct VZDestination { } *_networkDestination;
    struct unordered_map<const char *, VZSubLogger *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, VZSubLogger *>>> { struct __hash_table<std::__hash_value_type<const char *, VZSubLogger *>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, VZSubLogger *>, std::hash<const char *>, std::equal_to<const char *>>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, VZSubLogger *>, std::equal_to<const char *>, std::hash<const char *>>, std::allocator<std::__hash_value_type<const char *, VZSubLogger *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, VZSubLogger *>, std::hash<const char *>, std::equal_to<const char *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, VZSubLogger *>, std::equal_to<const char *>, std::hash<const char *>>> { float __value_; } __p3_; } __table_; } _vlSubloggerMap;
}

@property (readonly, nonatomic) struct VZLogger { } *internalVisualLoggerRef;
@property (readonly, nonatomic) NSSet *registeredSubloggers;

+ (id)sharedLogger;
+ (id)frameworkPrefix;
+ (id)_discoverSubloggers;
+ (id)defaultLogPath;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_disableAllLogs;
- (BOOL)logIOSurface:(struct __IOSurface { } *)a0 at:(double)a1 sublogger:(id)a2 name:(id)a3;
- (id)_arrayOfNumbersToData:(id)a0 valueType:(unsigned long long *)a1;
- (BOOL)_stopLoggingToFile;
- (BOOL)_stopLoggingToHost;
- (struct Ref<const VZDataInfo *> { struct shared_ptr<const void> { void *x0; struct __shared_weak_count *x1; } x0; })createDataInfoAt:(double)a0 name:(id)a1;
- (void)enableLogger:(id)a0;
- (BOOL)isLoggerEnabled:(id)a0;
- (void)logAndReleaseError:(struct __CFError { } *)a0;
- (BOOL)logBinaryData:(id)a0 at:(double)a1 sublogger:(id)a2 name:(id)a3;
- (BOOL)logDictionary:(id)a0 at:(double)a1 sublogger:(id)a2 name:(id)a3;
- (BOOL)logNumber:(id)a0 at:(double)a1 sublogger:(id)a2 name:(id)a3;
- (BOOL)logNumbers:(id)a0 at:(double)a1 sublogger:(id)a2 name:(id)a3;
- (BOOL)logPixelBuffer:(struct __CVBuffer { } *)a0 at:(double)a1 sublogger:(id)a2 name:(id)a3;
- (BOOL)startLoggingToFile:(id)a0;
- (BOOL)startLoggingToFile:(id)a0 synchronously:(BOOL)a1;
- (BOOL)startLoggingToHost:(id)a0;
- (BOOL)stopAndDisableLogging;

@end
