@class NSString;

@interface BMMessagesSharedWithYouFeedbackRankableSocialHighlightContact : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BOOL isSignificant;
@property (nonatomic) BOOL hasIsSignificant;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) BOOL isMe;
@property (nonatomic) BOOL hasIsMe;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIsSignificant:(id)a0 handle:(id)a1 isMe:(id)a2;

@end
