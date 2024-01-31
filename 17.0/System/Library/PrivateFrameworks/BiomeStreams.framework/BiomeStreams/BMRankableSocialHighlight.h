@class BMSocialHighlightContact, NSString, NSArray, NSURL, NSDate, NSDictionary, NSNumber;

@interface BMRankableSocialHighlight : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *groupPhotoPath;
@property (readonly, nonatomic) NSString *highlightIdentifier;
@property (readonly, nonatomic) unsigned long long highlightType;
@property (readonly, nonatomic) NSDate *syndicationDate;
@property (readonly, nonatomic) NSString *sourceBundleId;
@property (readonly, nonatomic) NSArray *applicationIdentifiers;
@property (readonly, nonatomic) NSURL *resourceUrl;
@property (readonly, nonatomic) BMSocialHighlightContact *sender;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *batchIdentifier;
@property (readonly, nonatomic) NSDictionary *calculatedFeatures;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSDate *contentCreationDate;
@property (readonly, nonatomic) NSString *groupPhotoPathDigest;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSNumber *isPrimary;
@property (readonly, nonatomic) NSString *attributionIdentifier;
@property (readonly, nonatomic) NSNumber *rank;
@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) NSNumber *isConversationAutoDonating;
@property (readonly, nonatomic) NSString *originatingDeviceId;
@property (readonly, nonatomic) NSDate *rankingDate;
@property (readonly, nonatomic) NSString *resolvedUrl;
@property (readonly, nonatomic) NSString *clientVariant;
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
- (int)_protoType;
- (unsigned long long)_socialHighlightTypeForProtoType:(int)a0;
- (id)initWithHighlightIdentifier:(id)a0 highlightType:(unsigned long long)a1 syndicationDate:(id)a2 sourceBundleId:(id)a3 applicationIdentifiers:(id)a4 resourceUrl:(id)a5 sender:(id)a6 domainIdentifier:(id)a7 batchIdentifier:(id)a8 calculatedFeatures:(id)a9 clientIdentifier:(id)a10 contentCreationDate:(id)a11 groupPhotoPath:(id)a12 displayName:(id)a13 isPrimary:(id)a14 attributionIdentifier:(id)a15 rank:(id)a16 score:(id)a17 isConversationAutoDonating:(id)a18 originatingDeviceId:(id)a19 rankingDate:(id)a20 resolvedUrl:(id)a21;
- (id)initWithHighlightIdentifier:(id)a0 highlightType:(unsigned long long)a1 syndicationDate:(id)a2 sourceBundleId:(id)a3 applicationIdentifiers:(id)a4 resourceUrl:(id)a5 sender:(id)a6 domainIdentifier:(id)a7 batchIdentifier:(id)a8 calculatedFeatures:(id)a9 clientIdentifier:(id)a10 contentCreationDate:(id)a11 groupPhotoPathDigest:(id)a12 displayName:(id)a13 isPrimary:(id)a14 attributionIdentifier:(id)a15 rank:(id)a16 score:(id)a17 isConversationAutoDonating:(id)a18 originatingDeviceId:(id)a19 rankingDate:(id)a20 resolvedUrl:(id)a21;
- (id)initWithHighlightIdentifier:(id)a0 highlightType:(unsigned long long)a1 syndicationDate:(id)a2 sourceBundleId:(id)a3 applicationIdentifiers:(id)a4 resourceUrl:(id)a5 sender:(id)a6 domainIdentifier:(id)a7 batchIdentifier:(id)a8 calculatedFeatures:(id)a9 clientIdentifier:(id)a10 contentCreationDate:(id)a11 groupPhotoPathDigest:(id)a12 displayName:(id)a13 isPrimary:(id)a14 attributionIdentifier:(id)a15 rank:(id)a16 score:(id)a17 isConversationAutoDonating:(id)a18 originatingDeviceId:(id)a19 rankingDate:(id)a20 resolvedUrl:(id)a21 clientVariant:(id)a22;

@end
