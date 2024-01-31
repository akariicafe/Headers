@class NSMutableArray;

@interface GEOLogMsgEventMarcoLiteUsage : PBCodable <NSCopying> {
    NSMutableArray *_usageStates;
    unsigned int _totalNavTime;
    int _vioTrigger;
    struct { unsigned char has_totalNavTime : 1; unsigned char has_vioTrigger : 1; } _flags;
}

@property (nonatomic) BOOL hasTotalNavTime;
@property (nonatomic) unsigned int totalNavTime;
@property (retain, nonatomic) NSMutableArray *usageStates;
@property (nonatomic) BOOL hasVioTrigger;
@property (nonatomic) int vioTrigger;

+ (BOOL)isValid:(id)a0;
+ (Class)usageStatesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsVioTrigger:(id)a0;
- (void)addUsageStates:(id)a0;
- (void)clearUsageStates;
- (id)usageStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)usageStatesCount;
- (id)vioTriggerAsString:(int)a0;

@end
