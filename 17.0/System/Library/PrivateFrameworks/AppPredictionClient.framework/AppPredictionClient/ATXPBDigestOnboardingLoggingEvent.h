@class NSString, NSMutableArray;

@interface ATXPBDigestOnboardingLoggingEvent : PBCodable <NSCopying> {
    struct { unsigned char timeTaken : 1; unsigned char digestOnboardingOutcome : 1; unsigned char entrySource : 1; unsigned char finalUIShown : 1; unsigned char didSelectShowMore : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;
@property (nonatomic) BOOL hasEntrySource;
@property (nonatomic) int entrySource;
@property (nonatomic) BOOL hasDigestOnboardingOutcome;
@property (nonatomic) int digestOnboardingOutcome;
@property (nonatomic) BOOL hasFinalUIShown;
@property (nonatomic) int finalUIShown;
@property (nonatomic) BOOL hasTimeTaken;
@property (nonatomic) double timeTaken;
@property (nonatomic) BOOL hasDidSelectShowMore;
@property (nonatomic) BOOL didSelectShowMore;
@property (retain, nonatomic) NSMutableArray *deliveryTimes;

+ (Class)deliveryTimesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsDigestOnboardingOutcome:(id)a0;
- (int)StringAsEntrySource:(id)a0;
- (int)StringAsFinalUIShown:(id)a0;
- (void)addDeliveryTimes:(id)a0;
- (void)clearDeliveryTimes;
- (id)deliveryTimesAtIndex:(unsigned long long)a0;
- (unsigned long long)deliveryTimesCount;
- (id)digestOnboardingOutcomeAsString:(int)a0;
- (id)entrySourceAsString:(int)a0;
- (id)finalUIShownAsString:(int)a0;

@end
