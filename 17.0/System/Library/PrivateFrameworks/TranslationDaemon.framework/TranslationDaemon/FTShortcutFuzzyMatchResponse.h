@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTShortcutFuzzyMatchResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ShortcutFuzzyMatchResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *utterance;
@property (readonly, nonatomic) NSArray *shortcut_score_pairs;
@property (readonly, nonatomic) int return_code;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ShortcutFuzzyMatchResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ShortcutFuzzyMatchResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)shortcut_score_pairs_count;
- (void)shortcut_score_pairs_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)shortcut_score_pairs_objectAtIndex:(unsigned long long)a0;

@end
