@class NSString;

@interface BMMLSEPeopleSuggestionsMetricsStore : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) double reciprocalRank;
@property (nonatomic) BOOL hasReciprocalRank;
@property (readonly, nonatomic) unsigned int reciprocalRankDefinitionVersion;
@property (nonatomic) BOOL hasReciprocalRankDefinitionVersion;
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
- (id)initWithEventIdentifier:(id)a0 model:(id)a1 reciprocalRank:(id)a2 reciprocalRankDefinitionVersion:(id)a3;

@end
