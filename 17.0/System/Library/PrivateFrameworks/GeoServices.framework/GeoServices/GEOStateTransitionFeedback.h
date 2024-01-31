@interface GEOStateTransitionFeedback : PBCodable <NSCopying> {
    int _newValue;
    int _oldValue;
    int _stateType;
    struct { unsigned char has_newValue : 1; unsigned char has_oldValue : 1; unsigned char has_stateType : 1; } _flags;
}

@property (nonatomic) BOOL hasStateType;
@property (nonatomic) int stateType;
@property (nonatomic) BOOL hasOldValue;
@property (nonatomic) int oldValue;
@property (nonatomic) BOOL hasNewValue;
@property (nonatomic) int newValue;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (int)StringAsStateType:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)stateTypeAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsOldValue:(id)a0;
- (int)StringAsNewValue:(id)a0;
- (id)newValueAsString:(int)a0;
- (id)oldValueAsString:(int)a0;

@end
