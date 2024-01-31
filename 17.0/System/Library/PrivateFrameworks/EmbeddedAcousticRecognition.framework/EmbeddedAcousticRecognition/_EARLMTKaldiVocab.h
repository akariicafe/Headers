@class NSString;

@interface _EARLMTKaldiVocab : NSObject {
    unsigned long long _bosIndex;
    unsigned long long _eosIndex;
    unsigned long long _unkIndex;
    NSString *_eosToken;
    struct unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> { struct __hash_table<std::__hash_value_type<std::string, unsigned long>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, unsigned long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>>> { float __value_; } __p3_; } __table_; } _w2i;
}

+ (void)initialize;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)vocabSize;
- (id)initWithContentsOfUrl:(id)a0 outError:(id *)a1;
- (unsigned long long)beginOfSentenceIndex;
- (unsigned long long)endOfSentenceIndex;
- (id)endOfSentenceToken;
- (unsigned long long)indexForWord:(id)a0;
- (unsigned long long)unknownWordIndex;

@end
