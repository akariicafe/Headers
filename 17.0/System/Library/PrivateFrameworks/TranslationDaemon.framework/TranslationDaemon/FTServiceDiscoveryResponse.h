@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTServiceDiscoveryResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ServiceDiscoveryResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSArray *zk_node;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::ServiceDiscoveryResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ServiceDiscoveryResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ServiceDiscoveryResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)zk_node_count;
- (void)zk_node_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)zk_node_objectAtIndex:(unsigned long long)a0;

@end
