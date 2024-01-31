@class SIRINLUEXTERNALTurnInput, NSMutableArray;

@interface SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCurrentTurn;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurn;
@property (retain, nonatomic) NSMutableArray *previousTurns;

+ (Class)previousTurnsType;

- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPreviousTurns:(id)a0;
- (void)clearPreviousTurns;
- (id)previousTurnsAtIndex:(unsigned long long)a0;
- (unsigned long long)previousTurnsCount;

@end
