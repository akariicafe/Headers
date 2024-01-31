@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTStartBatchRecoverRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartBatchRecoverRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSArray *apg_ids;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::StartBatchRecoverRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartBatchRecoverRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartBatchRecoverRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)apg_ids_count;
- (void)apg_ids_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)apg_ids_objectAtIndex:(unsigned long long)a0;

@end
