@class NSMutableArray;

@interface HDCodableMedicationMonthHighlight : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *days;

+ (Class)daysType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addDays:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearDays;
- (id)daysAtIndex:(unsigned long long)a0;
- (unsigned long long)daysCount;

@end
