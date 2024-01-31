@class NSMutableDictionary, FTTextToSpeechSpeechFeatureResponse, NSData, FTTextToSpeechSpeechFeatureRequest, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTTtsTextToSpeechSpeechFeatureMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TtsTextToSpeechSpeechFeatureMessage { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long session_message_type;
@property (readonly, nonatomic) FTTextToSpeechSpeechFeatureRequest *session_messageAsFTTextToSpeechSpeechFeatureRequest;
@property (readonly, nonatomic) FTTextToSpeechSpeechFeatureResponse *session_messageAsFTTextToSpeechSpeechFeatureResponse;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_immutableClassForType:(long long)a0;
+ (long long)session_message_typeForImmutableObject:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::TtsTextToSpeechSpeechFeatureMessage> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TtsTextToSpeechSpeechFeatureMessage { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TtsTextToSpeechSpeechFeatureMessage { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
