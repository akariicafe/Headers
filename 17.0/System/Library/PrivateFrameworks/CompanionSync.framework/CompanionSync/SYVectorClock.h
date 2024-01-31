@class NSMutableArray;

@interface SYVectorClock : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *clocks;

+ (void)initialize;
+ (Class)clocksType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSONRepresentation:(id)a0;
- (id)clockForPeerID:(id)a0;
- (id)compactDictionaryRepresentation;
- (BOOL)_setTheory_isEqual:(id)a0;
- (void)addClocks:(id)a0;
- (void)clearClocks;
- (id)clockForPeer:(id)a0;
- (unsigned long long)clockValueForPeer:(id)a0;
- (unsigned long long)clockValueForPeerID:(id)a0;
- (id)clocksAtIndex:(unsigned long long)a0;
- (unsigned long long)clocksCount;
- (BOOL)hasClockForPeer:(id)a0;
- (BOOL)hasClockForPeerID:(id)a0;
- (void)increaseClockForPeer:(id)a0 by:(unsigned long long)a1;
- (void)increaseClockForPeerID:(id)a0 by:(unsigned long long)a1;
- (void)incrementClockForPeer:(id)a0;
- (void)incrementClockForPeerID:(id)a0;
- (void)setClockValue:(unsigned long long)a0 forPeer:(id)a1;
- (void)setClockValue:(unsigned long long)a0 forPeerID:(id)a1;

@end
