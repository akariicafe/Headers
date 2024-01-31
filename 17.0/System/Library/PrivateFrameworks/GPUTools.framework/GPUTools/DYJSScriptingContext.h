@class NSString, JSVirtualMachine, JSContext;

@interface DYJSScriptingContext : NSObject {
    struct unordered_map<const char *, OpaqueJSValue *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSValue *>>> { struct __hash_table<std::__hash_value_type<const char *, OpaqueJSValue *>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::hash<const char *>, std::equal_to<const char *>>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::equal_to<const char *>, std::hash<const char *>>, std::allocator<std::__hash_value_type<const char *, OpaqueJSValue *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSValue *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::hash<const char *>, std::equal_to<const char *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSValue *>, std::equal_to<const char *>, std::hash<const char *>>> { float __value_; } __p3_; } __table_; } _cache;
    struct unordered_map<const char *, OpaqueJSString *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSString *>>> { struct __hash_table<std::__hash_value_type<const char *, OpaqueJSString *>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::hash<const char *>, std::equal_to<const char *>>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::equal_to<const char *>, std::hash<const char *>>, std::allocator<std::__hash_value_type<const char *, OpaqueJSString *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, OpaqueJSString *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::hash<const char *>, std::equal_to<const char *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, OpaqueJSString *>, std::equal_to<const char *>, std::hash<const char *>>> { float __value_; } __p3_; } __table_; } _stringCache;
    struct OpaqueJSValue { } *_globalObject;
    NSString *_filename;
}

@property (readonly, nonatomic) JSVirtualMachine *virtualMachine;
@property (readonly, nonatomic) JSContext *context;
@property (copy, nonatomic) id /* block */ exceptionHandler;

+ (id)sharedContext;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)getValue:(id)a0;
- (void)setValues:(id)a0;
- (void).cxx_destruct;
- (void)_clearCache;
- (void)allocNewContext;
- (id)setValue:(id)a0 value:(id)a1;
- (struct OpaqueJSValue { } *)createArrayRef:(id)a0;
- (struct OpaqueJSString { } *)_cachedStringFromString:(const char *)a0;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })_jsStringToString:(struct OpaqueJSString { } *)a0;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })_jsValueToString:(struct OpaqueJSValue { } *)a0;
- (double)callFunction:(id)a0 withArguments:(id)a1;
- (double)callGlobalFunction:(const char *)a0;
- (BOOL)evaluteScript:(id)a0 scriptURL:(id)a1;
- (double)getGlobalDouble:(const char *)a0;
- (id)getGlobalJSONObject:(const char *)a0;
- (void)setGlobalDouble:(const char *)a0 value:(double)a1;
- (BOOL)setGlobalJSONObject:(const char *)a0 value:(id)a1;
- (void)setRawArrayValues:(id)a0 withUint32Values:(unsigned int *)a1 andNumCounters:(unsigned long long)a2;
- (void)setRawArrayValues:(id)a0 withUint64Values:(unsigned long long *)a1 andNumCounters:(unsigned long long)a2;

@end
