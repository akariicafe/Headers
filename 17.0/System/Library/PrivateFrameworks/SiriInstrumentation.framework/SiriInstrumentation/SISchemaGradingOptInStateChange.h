@class NSString, NSData;

@interface SISchemaGradingOptInStateChange : SISchemaTopLevelUnionType {
    struct { unsigned char prevOptInState : 1; unsigned char newOptInState : 1; unsigned char source : 1; unsigned char epochEventTimestampInSeconds : 1; } _has;
}

@property (nonatomic) int prevOptInState;
@property (nonatomic) BOOL hasPrevOptInState;
@property (nonatomic) int newOptInState;
@property (nonatomic) BOOL hasNewOptInState;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) BOOL hasReason;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (nonatomic) unsigned long long epochEventTimestampInSeconds;
@property (nonatomic) BOOL hasEpochEventTimestampInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (int)getAnyEventType;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deleteEpochEventTimestampInSeconds;
- (void)deleteNewOptInState;
- (void)deletePrevOptInState;
- (void)deleteSource;
- (void)deleteSystemBuild;

@end
