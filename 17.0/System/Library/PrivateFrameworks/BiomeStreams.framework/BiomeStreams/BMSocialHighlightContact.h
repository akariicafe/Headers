@class NSString;

@interface BMSocialHighlightContact : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) BOOL isSignificant;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) BOOL isMe;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 isSignificant:(BOOL)a1 isMe:(BOOL)a2;

@end
