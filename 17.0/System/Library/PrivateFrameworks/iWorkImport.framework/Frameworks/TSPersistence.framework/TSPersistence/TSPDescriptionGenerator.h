@class NSMutableDictionary, NSMutableOrderedSet, TSPObjectContext, NSObject;
@protocol OS_dispatch_queue;

@interface TSPDescriptionGenerator : NSObject {
    TSPObjectContext *_context;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableOrderedSet *_components;
    struct map<long long, TSP::DescriptionPrinterMessage, std::less<long long>, std::allocator<std::pair<const long long, TSP::DescriptionPrinterMessage>>> { struct __tree<std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::__map_value_compare<long long, std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::less<long long>>, std::allocator<std::__value_type<long long, TSP::DescriptionPrinterMessage>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long long, TSP::DescriptionPrinterMessage>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::less<long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _messageMap;
    NSMutableDictionary *_objects;
    NSMutableDictionary *_uuidMap;
    NSMutableDictionary *_inverseUUIDMap;
    NSMutableDictionary *_dataMap;
    id /* block */ _objectIdentifierForUUIDHandler;
    id /* block */ _printerCustomPropertiesHandler;
    id /* block */ _dataIdentifierHandler;
    id /* block */ _digestHandler;
}

+ (id)directoryForDocumentUUID:(id)a0 versionUUID:(id)a1;
+ (BOOL)dumpMessagesForDocumentURL:(id)a0 supportURL:(id)a1 decryptionKey:(id)a2 toURL:(id)a3;
+ (id)filenameForPackageIdentifier:(unsigned char)a0;

- (id)init;
- (id).cxx_construct;
- (void)addComponent:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)initWithContext:(id)a0 options:(unsigned long long)a1;
- (void *)_messageAlternateMapFromArchivableContent:(id)a0;
- (void *)_strongReferencesFromArchiver:(id)a0;
- (void)addArchiver:(id)a0;
- (void)addMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 withStrongReferencesMap:(void *)a1 forObjectIdentifier:(long long)a2;
- (void)addUUIDMapEntriesForComponent:(id)a0;
- (id)descriptionForIdentifier:(long long)a0;
- (BOOL)dumpComponentMessages:(id)a0 printNewLine:(BOOL)a1 withPrinter:(void *)a2 outputStream:(void *)a3;
- (BOOL)dumpMessagesForDocumentUUID:(id)a0 versionUUID:(id)a1 packageIdentifier:(unsigned char)a2;
- (BOOL)dumpMessagesToFilePath:(id)a0;
- (void)performPrintOperationBlock:(id /* block */)a0;
- (void)processPackageMetadataMessage:(struct shared_ptr<google::protobuf::Message> { struct Message *x0; struct __shared_weak_count *x1; })a0;

@end
