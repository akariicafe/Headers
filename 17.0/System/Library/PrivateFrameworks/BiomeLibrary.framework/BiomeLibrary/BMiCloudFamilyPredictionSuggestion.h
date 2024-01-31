@class NSString;

@interface BMiCloudFamilyPredictionSuggestion : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *heuristicFamilyRelation;
@property (readonly, nonatomic) double score;
@property (nonatomic) BOOL hasScore;
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
- (id)initWithHeuristicFamilyRelation:(id)a0 score:(id)a1;

@end
