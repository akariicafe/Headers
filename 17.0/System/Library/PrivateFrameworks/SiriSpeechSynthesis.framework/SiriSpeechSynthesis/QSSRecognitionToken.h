@class NSString, NSMutableDictionary, NSData;

@interface QSSRecognitionToken : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionToken { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *token_text;
@property (readonly, nonatomic) int start_milli_seconds;
@property (readonly, nonatomic) int end_milli_seconds;
@property (readonly, nonatomic) int silence_start_milli_seconds;
@property (readonly, nonatomic) int confidence;
@property (readonly, nonatomic) BOOL add_space_after;
@property (readonly, nonatomic) NSString *phone_seq;
@property (readonly, nonatomic) NSString *ipa_phone_seq;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::RecognitionToken> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionToken { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionToken { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
