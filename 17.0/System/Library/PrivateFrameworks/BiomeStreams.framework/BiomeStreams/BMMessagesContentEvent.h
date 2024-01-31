@class NSString, NSArray, BMContentAttachment, BMNamedHandle, NSURL;

@interface BMMessagesContentEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMCommunicationsAccountContentEvent, BMStringContentContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) BMNamedHandle *fromHandle;
@property (readonly, nonatomic) NSArray *toHandles;
@property (readonly, nonatomic) NSString *suggestedNickname;
@property (readonly, nonatomic) NSString *suggestedPhotoPath;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSArray *accountHandles;
@property (readonly, nonatomic) NSString *accountType;
@property (readonly, nonatomic) BMContentAttachment *attachment;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSArray *ccHandles;
@property (readonly, nonatomic) NSArray *bccHandles;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)init;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)json;
- (void).cxx_destruct;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 absoluteTimestamp:(double)a2 conversationId:(id)a3 fromHandle:(id)a4 toHandles:(id)a5 suggestedNickname:(id)a6 suggestedPhotoPath:(id)a7 content:(id)a8 accountIdentifier:(id)a9 accountHandles:(id)a10 accountType:(id)a11 attachment:(id)a12 URL:(id)a13;
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 absoluteTimestamp:(double)a2 conversationId:(id)a3 fromHandle:(id)a4 toHandles:(id)a5 suggestedNickname:(id)a6 suggestedPhotoPath:(id)a7 content:(id)a8 accountIdentifier:(id)a9 accountHandles:(id)a10 accountType:(id)a11 attachment:(id)a12 URL:(id)a13 contentProtection:(id)a14;
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 personaId:(id)a2 absoluteTimestamp:(double)a3 conversationId:(id)a4 fromHandle:(id)a5 toHandles:(id)a6 suggestedNickname:(id)a7 suggestedPhotoPath:(id)a8 content:(id)a9 accountIdentifier:(id)a10 accountHandles:(id)a11 accountType:(id)a12 attachment:(id)a13 URL:(id)a14 contentProtection:(id)a15;

@end
