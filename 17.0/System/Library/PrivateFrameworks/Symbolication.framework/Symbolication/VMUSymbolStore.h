@class VMUDebugTimer, NSString, NSMutableDictionary, NSData, VMUProcessObjectGraph, NSXMLParser;

@interface VMUSymbolStore : NSObject <NSSecureCoding, NSXMLParserDelegate> {
    VMUDebugTimer *_debugTimer;
    struct unordered_map<std::string, std::unordered_set<unsigned long long>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<unsigned long long>>>> { struct __hash_table<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::equal_to<std::string>, std::hash<std::string>>> { float __value_; } __p3_; } __table_; } _addressesGroupedByUuid;
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> { struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<unsigned long long>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<unsigned long long>> { float __value_; } __p3_; } __table_; } _addressesTracker;
    NSData *_signature;
    BOOL _resymbolicatedSuccessfully;
    NSMutableDictionary *_resymbolicationUUIDs;
    BOOL _debugStore;
    NSString *parsedResult;
    NSString *parsedKey;
    NSString *parsedValue;
    NSXMLParser *xmlParser;
    unsigned long long backtraceSample;
    unsigned long long binarySection;
    unsigned long long globalVariable;
    unsigned long long mallocStackLogging;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) VMUProcessObjectGraph *graph;
@property (readonly, nonatomic) struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } symbolicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_createSymbolicatorSignature;
- (void)addAddress:(unsigned long long)a0 origin:(int)a1;
- (BOOL)_getDsymPathsForUUIDs:(id)a0 andReportProgress:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_createResymbolicatedSignature;
- (BOOL)_refillSymbolOwnersWithDataAndReportProgress:(id)a0;
- (void)_groupAddressTrackerByUuid;
- (void)_extractAddressesFromSymbolicator;
- (id).cxx_construct;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0 debugTimer:(id)a1;
- (BOOL)_readContentsOfDsymFile:(id)a0 error:(id *)a1;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)_flagSymbolOwnersForResymbolication;
- (BOOL)resymbolicateWithDsymPath:(id)a0 libraryNames:(id)a1 all:(BOOL)a2 progress:(id)a3 showDebugInfo:(BOOL)a4 error:(id *)a5;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)addBacktrace:(id)a0 origin:(int)a1;

@end
