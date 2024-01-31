@class NSData, NSMutableDictionary;

@interface FTResetServerEndpointer : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ResetServerEndpointer { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long speech_packet_count;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::ResetServerEndpointer> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ResetServerEndpointer { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ResetServerEndpointer { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
