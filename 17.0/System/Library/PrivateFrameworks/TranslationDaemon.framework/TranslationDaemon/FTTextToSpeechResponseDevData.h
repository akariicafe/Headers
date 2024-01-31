@class NSString, FTQSSVersionInfo, NSMutableDictionary, NSData;

@interface FTTextToSpeechResponseDevData : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechResponseDevData { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *log;
@property (readonly, nonatomic) FTQSSVersionInfo *server_info;
@property (readonly, nonatomic) BOOL has_click;
@property (readonly, nonatomic) NSString *worker_process_type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechResponseDevData> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechResponseDevData { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechResponseDevData { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
