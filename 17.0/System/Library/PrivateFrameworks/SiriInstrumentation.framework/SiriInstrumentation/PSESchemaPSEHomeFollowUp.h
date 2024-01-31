@class NSString, NSData;

@interface PSESchemaPSEHomeFollowUp : SISchemaInstrumentationMessage {
    struct { unsigned char followUpType : 1; unsigned char followUpSource : 1; unsigned char isFollowUpInSameContainerAsSiriRequest : 1; unsigned char followUpDayOfWeek : 1; unsigned char followUpHourOfDay : 1; unsigned char followUpDurationSinceSiriRequestInSeconds : 1; } _has;
}

@property (nonatomic) int followUpType;
@property (nonatomic) BOOL hasFollowUpType;
@property (nonatomic) int followUpSource;
@property (nonatomic) BOOL hasFollowUpSource;
@property (copy, nonatomic) NSString *followUpAccessoryType;
@property (nonatomic) BOOL hasFollowUpAccessoryType;
@property (nonatomic) BOOL isFollowUpInSameContainerAsSiriRequest;
@property (nonatomic) BOOL hasIsFollowUpInSameContainerAsSiriRequest;
@property (nonatomic) unsigned int followUpDayOfWeek;
@property (nonatomic) BOOL hasFollowUpDayOfWeek;
@property (nonatomic) unsigned int followUpHourOfDay;
@property (nonatomic) BOOL hasFollowUpHourOfDay;
@property (nonatomic) unsigned int followUpDurationSinceSiriRequestInSeconds;
@property (nonatomic) BOOL hasFollowUpDurationSinceSiriRequestInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFollowUpAccessoryType;
- (void)deleteFollowUpDayOfWeek;
- (void)deleteFollowUpDurationSinceSiriRequestInSeconds;
- (void)deleteFollowUpHourOfDay;
- (void)deleteFollowUpSource;
- (void)deleteFollowUpType;
- (void)deleteIsFollowUpInSameContainerAsSiriRequest;

@end
