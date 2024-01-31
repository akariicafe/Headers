@class NSArray, NSString, NSDate, NSMutableArray, PBUnknownFields;

@interface GEOCondition : PBCodable <GEOServerCondition, NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_conditions;
    unsigned int _expirationTime;
    int _type;
    struct { unsigned char has_expirationTime : 1; unsigned char has_type : 1; } _flags;
}

@property (readonly, nonatomic) long long conditionType;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSArray *subconditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasExpirationTime;
@property (nonatomic) unsigned int expirationTime;
@property (retain, nonatomic) NSMutableArray *conditions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)conditionType;

- (void)addCondition:(id)a0;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearConditions;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)conditionsCount;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (id)conditionAtIndex:(unsigned long long)a0;

@end
