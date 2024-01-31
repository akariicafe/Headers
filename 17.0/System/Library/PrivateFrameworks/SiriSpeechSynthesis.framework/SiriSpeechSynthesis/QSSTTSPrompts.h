@class NSArray, NSData, NSMutableDictionary;

@interface QSSTTSPrompts : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TTSPrompts { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *prompts;
@property (readonly, nonatomic) NSData *prompts_v2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TTSPrompts> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSPrompts { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSPrompts { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (void)prompts_v2:(id /* block */)a0;

@end
