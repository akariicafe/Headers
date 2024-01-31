@class NSData;

@interface INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext : SISchemaInstrumentationMessage {
    struct { unsigned char isExactMatchPriorSiriContactGivenName : 1; unsigned char isExactMatchPriorSiriContactFamilyName : 1; unsigned char isExactMatchPriorSiriContactDisplayName : 1; unsigned char isExactMatchPriorSiriContactId : 1; unsigned char isExactMatchPriorSiriContactHandleValue : 1; unsigned char interactionDurationInSecBucket : 1; unsigned char potentialRetryIntervalInSecBucket : 1; } _has;
}

@property (nonatomic) BOOL isExactMatchPriorSiriContactGivenName;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactGivenName;
@property (nonatomic) BOOL isExactMatchPriorSiriContactFamilyName;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactFamilyName;
@property (nonatomic) BOOL isExactMatchPriorSiriContactDisplayName;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactDisplayName;
@property (nonatomic) BOOL isExactMatchPriorSiriContactId;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactId;
@property (nonatomic) BOOL isExactMatchPriorSiriContactHandleValue;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactHandleValue;
@property (nonatomic) unsigned int interactionDurationInSecBucket;
@property (nonatomic) BOOL hasInteractionDurationInSecBucket;
@property (nonatomic) unsigned int potentialRetryIntervalInSecBucket;
@property (nonatomic) BOOL hasPotentialRetryIntervalInSecBucket;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteInteractionDurationInSecBucket;
- (void)deleteIsExactMatchPriorSiriContactDisplayName;
- (void)deleteIsExactMatchPriorSiriContactFamilyName;
- (void)deleteIsExactMatchPriorSiriContactGivenName;
- (void)deleteIsExactMatchPriorSiriContactHandleValue;
- (void)deleteIsExactMatchPriorSiriContactId;
- (void)deletePotentialRetryIntervalInSecBucket;

@end
