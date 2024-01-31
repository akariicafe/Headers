@class NSString, NSArray, NSMutableDictionary, NSData;

@interface QSSShortcutFuzzyMatchRequest_StringTokenPair : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StringTokenPair { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *raw_string;
@property (readonly, nonatomic) NSArray *tokens;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest_::StringTokenPair> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StringTokenPair { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StringTokenPair { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
