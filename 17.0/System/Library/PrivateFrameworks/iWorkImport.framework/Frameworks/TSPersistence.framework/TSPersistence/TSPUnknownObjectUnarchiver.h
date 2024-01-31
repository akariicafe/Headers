@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface TSPUnknownObjectUnarchiver : TSPUnarchiver {
    struct shared_ptr<TSP::ArchiveInfo> { struct ArchiveInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _archiveInfo;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *messagesData;
@property (readonly, nonatomic) NSString *packageLocator;

- (const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)message;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<TSP::ArchiveInfo> { struct ArchiveInfo *x0; struct __shared_weak_count *x1; })archiveInfo;
- (BOOL)canValidateReferences;
- (id)initWithIdentifier:(long long)a0 archiveInfo:(struct shared_ptr<TSP::ArchiveInfo> { struct ArchiveInfo *x0; struct __shared_weak_count *x1; })a1 messagesData:(id)a2 packageLocator:(id)a3 hasAlternateMessages:(BOOL)a4 objectDelegate:(id)a5 lazyReferenceDelegate:(id)a6 delegate:(id)a7;
- (id)initWithMessageType:(unsigned int)a0 unarchiveClass:(Class)a1 message:(struct unique_ptr<google::protobuf::Message, std::default_delete<google::protobuf::Message>> { struct __compressed_pair<google::protobuf::Message *, std::default_delete<google::protobuf::Message>> { struct Message *x0; } x0; })a2 identifier:(long long)a3 strongReferences:(struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> { struct __compressed_pair<TSP::IdentifierMap<bool> *, std::default_delete<TSP::IdentifierMap<bool>>> { void *x0; } x0; })a4 messageVersion:(unsigned long long)a5 unknownContent:(id)a6 hasAlternateMessages:(BOOL)a7 objectDelegate:(id)a8 lazyReferenceDelegate:(id)a9 delegate:(id)a10;

@end
