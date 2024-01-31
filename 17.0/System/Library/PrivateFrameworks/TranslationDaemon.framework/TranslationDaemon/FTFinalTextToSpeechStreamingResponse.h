@class NSString, FTTextToSpeechResponseDevData, NSMutableDictionary, NSData;

@interface FTFinalTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct FinalTextToSpeechStreamingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSString *stream_id;
@property (readonly, nonatomic) int total_pkt_number;
@property (readonly, nonatomic) FTTextToSpeechResponseDevData *dev_data;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::FinalTextToSpeechStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct FinalTextToSpeechStreamingResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct FinalTextToSpeechStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
