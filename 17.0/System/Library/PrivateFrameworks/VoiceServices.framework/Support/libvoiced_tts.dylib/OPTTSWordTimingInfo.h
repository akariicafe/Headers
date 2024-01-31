@class NSString, NSMutableDictionary, NSData;

@interface OPTTSWordTimingInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct WordTimingInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *word;
@property (readonly, nonatomic) unsigned int sample_idx;
@property (readonly, nonatomic) unsigned int offset;
@property (readonly, nonatomic) unsigned int length;
@property (readonly, nonatomic) float timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::WordTimingInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct WordTimingInfo { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct WordTimingInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
