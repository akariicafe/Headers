@class NSData;

@interface CAARSchemaCAARProactiveFeatures : SISchemaInstrumentationMessage {
    struct { unsigned char isAppInTopOneRelevance : 1; unsigned char isAppInTopFiveRelevance : 1; unsigned char isAppInTopTenRelevance : 1; unsigned char isIntentInTopOneRelevance : 1; unsigned char isIntentInTopFiveRelevance : 1; unsigned char isIntentInTopTenRelevance : 1; unsigned char appRelevanceScore : 1; unsigned char intentRelevanceScore : 1; } _has;
}

@property (nonatomic) BOOL isAppInTopOneRelevance;
@property (nonatomic) BOOL hasIsAppInTopOneRelevance;
@property (nonatomic) BOOL isAppInTopFiveRelevance;
@property (nonatomic) BOOL hasIsAppInTopFiveRelevance;
@property (nonatomic) BOOL isAppInTopTenRelevance;
@property (nonatomic) BOOL hasIsAppInTopTenRelevance;
@property (nonatomic) BOOL isIntentInTopOneRelevance;
@property (nonatomic) BOOL hasIsIntentInTopOneRelevance;
@property (nonatomic) BOOL isIntentInTopFiveRelevance;
@property (nonatomic) BOOL hasIsIntentInTopFiveRelevance;
@property (nonatomic) BOOL isIntentInTopTenRelevance;
@property (nonatomic) BOOL hasIsIntentInTopTenRelevance;
@property (nonatomic) double appRelevanceScore;
@property (nonatomic) BOOL hasAppRelevanceScore;
@property (nonatomic) double intentRelevanceScore;
@property (nonatomic) BOOL hasIntentRelevanceScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsIntentInTopOneRelevance;
- (void)deleteIsIntentInTopTenRelevance;
- (void)deleteAppRelevanceScore;
- (void)deleteIntentRelevanceScore;
- (void)deleteIsAppInTopFiveRelevance;
- (void)deleteIsAppInTopOneRelevance;
- (void)deleteIsAppInTopTenRelevance;
- (void)deleteIsIntentInTopFiveRelevance;

@end
