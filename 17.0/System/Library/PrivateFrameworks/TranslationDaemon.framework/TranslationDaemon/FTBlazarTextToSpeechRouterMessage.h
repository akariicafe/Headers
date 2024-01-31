@class FTTextToSpeechResponse, NSMutableDictionary, FTTextToSpeechRequest, NSData, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTBlazarTextToSpeechRouterMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BlazarTextToSpeechRouterMessage { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long session_message_type;
@property (readonly, nonatomic) FTTextToSpeechRequest *session_messageAsFTTextToSpeechRequest;
@property (readonly, nonatomic) FTTextToSpeechResponse *session_messageAsFTTextToSpeechResponse;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_immutableClassForType:(long long)a0;
+ (long long)session_message_typeForImmutableObject:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::BlazarTextToSpeechRouterMessage> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BlazarTextToSpeechRouterMessage { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BlazarTextToSpeechRouterMessage { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
