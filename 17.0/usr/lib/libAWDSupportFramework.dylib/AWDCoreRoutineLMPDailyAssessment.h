@interface AWDCoreRoutineLMPDailyAssessment : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char dailyEvents : 1; unsigned char eventsWithLMPLocation : 1; unsigned char eventsWithLocation : 1; unsigned char eventsWithMaybeLocation : 1; unsigned char visitLMPLocation : 1; unsigned char visitLocation : 1; unsigned char visitMaybeLocation : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDailyEvents;
@property (nonatomic) int dailyEvents;
@property (nonatomic) BOOL hasEventsWithLocation;
@property (nonatomic) int eventsWithLocation;
@property (nonatomic) BOOL hasEventsWithMaybeLocation;
@property (nonatomic) int eventsWithMaybeLocation;
@property (nonatomic) BOOL hasEventsWithLMPLocation;
@property (nonatomic) int eventsWithLMPLocation;
@property (nonatomic) BOOL hasVisitLocation;
@property (nonatomic) int visitLocation;
@property (nonatomic) BOOL hasVisitMaybeLocation;
@property (nonatomic) int visitMaybeLocation;
@property (nonatomic) BOOL hasVisitLMPLocation;
@property (nonatomic) int visitLMPLocation;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
