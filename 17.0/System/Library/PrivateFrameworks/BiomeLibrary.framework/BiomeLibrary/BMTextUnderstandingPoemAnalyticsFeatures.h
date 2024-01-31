@class NSString;

@interface BMTextUnderstandingPoemAnalyticsFeatures : BMEventBase <BMStoreData>

@property (readonly, nonatomic) long long numOfFacesInMessages;
@property (nonatomic) BOOL hasNumOfFacesInMessages;
@property (readonly, nonatomic) long long numOfFacesOnDevice;
@property (nonatomic) BOOL hasNumOfFacesOnDevice;
@property (readonly, nonatomic) long long numOfNamedFacesOnDevice;
@property (nonatomic) BOOL hasNumOfNamedFacesOnDevice;
@property (readonly, nonatomic) long long numOfConversationThreads;
@property (nonatomic) BOOL hasNumOfConversationThreads;
@property (readonly, nonatomic) long long numOfNamedEntityMentions;
@property (nonatomic) BOOL hasNumOfNamedEntityMentions;
@property (readonly, nonatomic) long long numOfSenderMentions;
@property (nonatomic) BOOL hasNumOfSenderMentions;
@property (readonly, nonatomic) long long numOfReceiverMentions;
@property (nonatomic) BOOL hasNumOfReceiverMentions;
@property (readonly, nonatomic) long long numOfPronounMentions;
@property (nonatomic) BOOL hasNumOfPronounMentions;
@property (readonly, nonatomic) long long numOfImagesShared;
@property (nonatomic) BOOL hasNumOfImagesShared;
@property (readonly, nonatomic) long long numOfLinguisticMentions;
@property (nonatomic) BOOL hasNumOfLinguisticMentions;
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
- (BOOL)isEqual:(id)a0;
- (id)initWithNumOfFacesInMessages:(id)a0 numOfFacesOnDevice:(id)a1 numOfNamedFacesOnDevice:(id)a2 numOfConversationThreads:(id)a3 numOfNamedEntityMentions:(id)a4 numOfSenderMentions:(id)a5 numOfReceiverMentions:(id)a6 numOfPronounMentions:(id)a7 numOfImagesShared:(id)a8 numOfLinguisticMentions:(id)a9;

@end
