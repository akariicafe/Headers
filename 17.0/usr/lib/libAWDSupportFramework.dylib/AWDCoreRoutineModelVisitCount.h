@class NSMutableArray;

@interface AWDCoreRoutineModelVisitCount : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char count : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *visits;

+ (Class)visitsType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addVisits:(id)a0;
- (void)clearVisits;
- (id)visitsAtIndex:(unsigned long long)a0;
- (unsigned long long)visitsCount;

@end
