@class NSString, NSArray, BMProactiveHarvestingNamedHandle, NSDate, BMProactiveHarvestingContentAttachment;

@interface BMProactiveHarvestingMessages : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *domainID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSString *suggestedNickname;
@property (readonly, nonatomic) NSString *suggestedPhotoPath;
@property (readonly, nonatomic) NSString *recipients;
@property (readonly, nonatomic) NSString *attachmentURL;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) BMProactiveHarvestingNamedHandle *fromHandle;
@property (readonly, nonatomic) NSArray *toHandles;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *accountType;
@property (readonly, nonatomic) NSArray *accountHandles;
@property (readonly, nonatomic) BMProactiveHarvestingContentAttachment *attachment;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *personaId;
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
- (id)_accountHandlesJSONArray;
- (id)_toHandlesJSONArray;
- (id)initWithUniqueID:(id)a0 domainID:(id)a1 absoluteTimestamp:(id)a2 conversationId:(id)a3 author:(id)a4 suggestedNickname:(id)a5 suggestedPhotoPath:(id)a6 recipients:(id)a7 attachmentURL:(id)a8 content:(id)a9 fromHandle:(id)a10 toHandles:(id)a11 accountIdentifier:(id)a12 accountType:(id)a13 accountHandles:(id)a14 attachment:(id)a15 url:(id)a16 contentProtection:(id)a17 personaId:(id)a18;

@end
