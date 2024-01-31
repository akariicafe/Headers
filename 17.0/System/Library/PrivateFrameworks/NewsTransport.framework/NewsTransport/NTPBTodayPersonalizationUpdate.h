@class NSMutableArray;

@interface NTPBTodayPersonalizationUpdate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *events;

+ (Class)eventsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addEvents:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearEvents;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
