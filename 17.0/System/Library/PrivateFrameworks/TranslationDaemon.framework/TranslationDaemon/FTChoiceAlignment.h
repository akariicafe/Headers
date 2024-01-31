@class NSArray, NSMutableDictionary, NSData;

@interface FTChoiceAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ChoiceAlignment { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *post_itn_choice_indices;
@property (readonly, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignments;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::ChoiceAlignment> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ChoiceAlignment { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ChoiceAlignment { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)post_itn_choice_indices_count;
- (void)post_itn_choice_indices_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)post_itn_choice_indices_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)pre_itn_token_to_post_itn_char_alignments_count;
- (void)pre_itn_token_to_post_itn_char_alignments_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)pre_itn_token_to_post_itn_char_alignments_objectAtIndex:(unsigned long long)a0;

@end
