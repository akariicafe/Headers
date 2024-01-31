@class PSESchemaPSEMediaEntitySimilarity, NSData;

@interface PSESchemaPSEMediaUserFollowupAction : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; unsigned char mediaContentDurationBucket : 1; unsigned char isSameAppUsed : 1; unsigned char isFirstPartyAppUsedForFollowup : 1; unsigned char isAirPlay : 1; unsigned char mediaType : 1; unsigned char isSubscriber : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int mediaContentDurationBucket;
@property (nonatomic) BOOL hasMediaContentDurationBucket;
@property (nonatomic) BOOL isSameAppUsed;
@property (nonatomic) BOOL hasIsSameAppUsed;
@property (nonatomic) BOOL isFirstPartyAppUsedForFollowup;
@property (nonatomic) BOOL hasIsFirstPartyAppUsedForFollowup;
@property (retain, nonatomic) PSESchemaPSEMediaEntitySimilarity *mediaEntitySimilarity;
@property (nonatomic) BOOL hasMediaEntitySimilarity;
@property (nonatomic) BOOL isAirPlay;
@property (nonatomic) BOOL hasIsAirPlay;
@property (nonatomic) int mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL isSubscriber;
@property (nonatomic) BOOL hasIsSubscriber;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAirPlay;
- (void)deleteMediaType;
- (void)deleteIsFirstPartyAppUsedForFollowup;
- (void)deleteIsSameAppUsed;
- (void)deleteIsSubscriber;
- (void)deleteMediaContentDurationBucket;
- (void)deleteMediaEntitySimilarity;
- (void)deleteState;

@end
