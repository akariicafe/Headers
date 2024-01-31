@class NSString;

@interface BMPortraitTopic : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int algorithm;
@property (readonly, nonatomic) double decayRate;
@property (nonatomic) BOOL hasDecayRate;
@property (readonly, nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) NSString *osBuild;
@property (readonly, nonatomic) int assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
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
- (id)initWithIdentifier:(id)a0 algorithm:(int)a1 decayRate:(id)a2 score:(id)a3 osBuild:(id)a4 assetVersion:(id)a5;

@end
