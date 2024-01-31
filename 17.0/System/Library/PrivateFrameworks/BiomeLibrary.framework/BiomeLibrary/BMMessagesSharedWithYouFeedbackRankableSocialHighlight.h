@class NSString, NSArray, BMMessagesSharedWithYouFeedbackRankableSocialHighlightContact;

@interface BMMessagesSharedWithYouFeedbackRankableSocialHighlight : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *highlightIdentifier;
@property (readonly, nonatomic) int highlightType;
@property (readonly, nonatomic) double syndicationSecondsSinceReferenceDate;
@property (nonatomic) BOOL hasSyndicationSecondsSinceReferenceDate;
@property (readonly, nonatomic) NSString *sourceBundleID;
@property (readonly, nonatomic) NSArray *applicationIdentifiers;
@property (readonly, nonatomic) NSString *resourceURL;
@property (readonly, nonatomic) BMMessagesSharedWithYouFeedbackRankableSocialHighlightContact *sender;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *batchIdentifier;
@property (readonly, nonatomic) NSArray *calculatedFeatures;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) double contentCreationSecondsSinceReferenceDate;
@property (nonatomic) BOOL hasContentCreationSecondsSinceReferenceDate;
@property (readonly, nonatomic) NSString *groupPhotoPathDigest;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isPrimary;
@property (nonatomic) BOOL hasIsPrimary;
@property (readonly, nonatomic) NSString *attributionIdentifier;
@property (readonly, nonatomic) unsigned int rank;
@property (nonatomic) BOOL hasRank;
@property (readonly, nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL isConversationAutoDonating;
@property (nonatomic) BOOL hasIsConversationAutoDonating;
@property (readonly, nonatomic) NSString *originatingDeviceId;
@property (readonly, nonatomic) double rankingSecondsSinceReferenceDate;
@property (nonatomic) BOOL hasRankingSecondsSinceReferenceDate;
@property (readonly, nonatomic) NSString *resolvedUrl;
@property (readonly, nonatomic) NSString *clientVariant;
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
- (id)_applicationIdentifiersJSONArray;
- (id)_calculatedFeaturesJSONArray;
- (id)initWithHighlightIdentifier:(id)a0 highlightType:(int)a1 syndicationSecondsSinceReferenceDate:(id)a2 sourceBundleID:(id)a3 applicationIdentifiers:(id)a4 resourceURL:(id)a5 sender:(id)a6 domainIdentifier:(id)a7 batchIdentifier:(id)a8 calculatedFeatures:(id)a9 clientIdentifier:(id)a10 contentCreationSecondsSinceReferenceDate:(id)a11 groupPhotoPathDigest:(id)a12 displayName:(id)a13 isPrimary:(id)a14 attributionIdentifier:(id)a15 rank:(id)a16 score:(id)a17 isConversationAutoDonating:(id)a18 originatingDeviceId:(id)a19 rankingSecondsSinceReferenceDate:(id)a20 resolvedUrl:(id)a21 clientVariant:(id)a22;

@end
