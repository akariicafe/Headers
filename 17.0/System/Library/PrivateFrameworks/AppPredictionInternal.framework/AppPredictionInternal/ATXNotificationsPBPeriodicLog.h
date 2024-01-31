@class NSString, NSMutableArray;

@interface ATXNotificationsPBPeriodicLog : PBCodable <NSCopying> {
    struct { unsigned char periodEnd : 1; unsigned char periodStart : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) BOOL hasPeriodStart;
@property (nonatomic) unsigned long long periodStart;
@property (nonatomic) BOOL hasPeriodEnd;
@property (nonatomic) unsigned long long periodEnd;
@property (retain, nonatomic) NSMutableArray *dataUnits;

+ (Class)dataUnitType;

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
- (void)addDataUnit:(id)a0;
- (void)clearDataUnits;
- (id)dataUnitAtIndex:(unsigned long long)a0;
- (unsigned long long)dataUnitsCount;

@end
