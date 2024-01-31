@class FTStartPronGuessRequest, FTPronGuessResponse, FTCancelRequest, NSData, NSMutableDictionary, FTAudioPacket, FTFinishAudio, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTApgPronGuessMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ApgPronGuessMessage { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long session_message_type;
@property (readonly, nonatomic) FTStartPronGuessRequest *session_messageAsFTStartPronGuessRequest;
@property (readonly, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (readonly, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (readonly, nonatomic) FTCancelRequest *session_messageAsFTCancelRequest;
@property (readonly, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_immutableClassForType:(long long)a0;
+ (long long)session_message_typeForImmutableObject:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::qss_fb::ApgPronGuessMessage> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ApgPronGuessMessage { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ApgPronGuessMessage { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
