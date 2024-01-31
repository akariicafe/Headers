@interface TSPDatabaseUnarchiver : TSPUnarchiver

@property (readonly, nonatomic) unsigned long long preUFFVersion;

- (void *)filterIdentifiers:(const void *)a0;
- (BOOL)canValidateReferences;
- (id)initWithMessageType:(unsigned int)a0 unarchiveClass:(Class)a1 message:(struct unique_ptr<google::protobuf::Message, std::default_delete<google::protobuf::Message>> { struct __compressed_pair<google::protobuf::Message *, std::default_delete<google::protobuf::Message>> { struct Message *x0; } x0; })a2 identifier:(long long)a3 strongReferences:(struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> { struct __compressed_pair<TSP::IdentifierMap<bool> *, std::default_delete<TSP::IdentifierMap<bool>>> { void *x0; } x0; })a4 databaseVersion:(unsigned long long)a5 objectDelegate:(id)a6 lazyReferenceDelegate:(id)a7 delegate:(id)a8;
- (id)initWithMessageType:(unsigned int)a0 unarchiveClass:(Class)a1 message:(struct unique_ptr<google::protobuf::Message, std::default_delete<google::protobuf::Message>> { struct __compressed_pair<google::protobuf::Message *, std::default_delete<google::protobuf::Message>> { struct Message *x0; } x0; })a2 identifier:(long long)a3 strongReferences:(struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> { struct __compressed_pair<TSP::IdentifierMap<bool> *, std::default_delete<TSP::IdentifierMap<bool>>> { void *x0; } x0; })a4 messageVersion:(unsigned long long)a5 unknownContent:(id)a6 hasAlternateMessages:(BOOL)a7 objectDelegate:(id)a8 lazyReferenceDelegate:(id)a9 delegate:(id)a10;

@end
