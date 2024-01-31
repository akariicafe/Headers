@class NSArray, NSMutableDictionary, NSData, FTRecognitionSausage;

@interface FTRecognitionResult : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionResult { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTRecognitionSausage *pre_itn;
@property (readonly, nonatomic) FTRecognitionSausage *post_itn;
@property (readonly, nonatomic) NSArray *pre_itn_nbest_choices;
@property (readonly, nonatomic) NSArray *post_itn_nbest_choices;
@property (readonly, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;
@property (readonly, nonatomic) NSArray *choice_alignments;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::RecognitionResult> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionResult { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionResult { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)choice_alignments_count;
- (void)choice_alignments_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)choice_alignments_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)post_itn_nbest_choices_count;
- (void)post_itn_nbest_choices_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)post_itn_nbest_choices_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)pre_itn_nbest_choices_count;
- (void)pre_itn_nbest_choices_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)pre_itn_nbest_choices_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)pre_itn_token_to_post_itn_char_alignment_count;
- (void)pre_itn_token_to_post_itn_char_alignment_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)pre_itn_token_to_post_itn_char_alignment_objectAtIndex:(unsigned long long)a0;

@end
