@class NSString, BMTextUnderstandingPoemAnalyticsFeatures;

@interface BMTextUnderstandingPoemAnalytics : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *visualIdentifier;
@property (readonly, nonatomic) BOOL prediction;
@property (nonatomic) BOOL hasPrediction;
@property (readonly, nonatomic) BOOL named;
@property (nonatomic) BOOL hasNamed;
@property (readonly, nonatomic) BOOL shadowMatch;
@property (nonatomic) BOOL hasShadowMatch;
@property (readonly, nonatomic) double threshold;
@property (nonatomic) BOOL hasThreshold;
@property (readonly, nonatomic) double predictionConfidence;
@property (nonatomic) BOOL hasPredictionConfidence;
@property (readonly, nonatomic) BOOL onboarding;
@property (nonatomic) BOOL hasOnboarding;
@property (readonly, nonatomic) NSString *nameMegadomeIdentifier;
@property (readonly, nonatomic) int nameSource;
@property (readonly, nonatomic) BMTextUnderstandingPoemAnalyticsFeatures *features;
@property (readonly, nonatomic) BOOL accepted;
@property (nonatomic) BOOL hasAccepted;
@property (readonly, nonatomic) BOOL rejected;
@property (nonatomic) BOOL hasRejected;
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
- (id)initWithVisualIdentifier:(id)a0 prediction:(id)a1 named:(id)a2 shadowMatch:(id)a3 threshold:(id)a4 predictionConfidence:(id)a5 onboarding:(id)a6 nameMegadomeIdentifier:(id)a7 nameSource:(int)a8 features:(id)a9 accepted:(id)a10 rejected:(id)a11;

@end
