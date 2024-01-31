@class NSMutableArray;

@interface GEOLogMsgEventGridDuration : PBCodable <NSCopying> {
    NSMutableArray *_endStateErrorReasons;
    int _displayType;
    unsigned int _durationMs;
    int _endState;
    int _previousState;
    struct { unsigned char has_displayType : 1; unsigned char has_durationMs : 1; unsigned char has_endState : 1; unsigned char has_previousState : 1; } _flags;
}

@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) BOOL hasEndState;
@property (nonatomic) int endState;
@property (retain, nonatomic) NSMutableArray *endStateErrorReasons;
@property (nonatomic) BOOL hasPreviousState;
@property (nonatomic) int previousState;
@property (nonatomic) BOOL hasDisplayType;
@property (nonatomic) int displayType;

+ (BOOL)isValid:(id)a0;
+ (Class)endStateErrorReasonType;

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
- (int)StringAsDisplayType:(id)a0;
- (int)StringAsEndState:(id)a0;
- (int)StringAsPreviousState:(id)a0;
- (void)addEndStateErrorReason:(id)a0;
- (void)clearEndStateErrorReasons;
- (id)displayTypeAsString:(int)a0;
- (id)endStateAsString:(int)a0;
- (id)endStateErrorReasonAtIndex:(unsigned long long)a0;
- (unsigned long long)endStateErrorReasonsCount;
- (id)previousStateAsString:(int)a0;

@end
