@class NSString, NSArray, NSMutableDictionary, FTRecognitionSausage, NSData;

@interface FTKeywordFinderResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct KeywordFinderResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) FTRecognitionSausage *corrected_sausage;
@property (readonly, nonatomic) NSArray *n_best_list;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::KeywordFinderResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct KeywordFinderResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct KeywordFinderResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)n_best_list_count;
- (void)n_best_list_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)n_best_list_objectAtIndex:(unsigned long long)a0;

@end
