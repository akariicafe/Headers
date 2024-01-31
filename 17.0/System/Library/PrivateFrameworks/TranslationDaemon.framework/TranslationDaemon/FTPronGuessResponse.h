@class NSString, NSArray, FTVocToken, NSMutableDictionary, NSData;

@interface FTPronGuessResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct PronGuessResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSString *apg_id;
@property (readonly, nonatomic) FTVocToken *voc_token;
@property (readonly, nonatomic) NSArray *tts_pronunciations;
@property (readonly, nonatomic) NSArray *human_readable_prons;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::PronGuessResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct PronGuessResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct PronGuessResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)human_readable_prons_count;
- (void)human_readable_prons_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)human_readable_prons_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)tts_pronunciations_count;
- (void)tts_pronunciations_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)tts_pronunciations_objectAtIndex:(unsigned long long)a0;

@end
