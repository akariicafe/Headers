@class GEOPDGroupData, PBUnknownFields;

@interface GEOPDGroupParams : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDGroupData *_groupData;
    int _actionDataItemIndex;
    int _groupButtonType;
    struct { unsigned char has_actionDataItemIndex : 1; unsigned char has_groupButtonType : 1; } _flags;
}

@property (nonatomic) BOOL hasGroupButtonType;
@property (nonatomic) int groupButtonType;
@property (nonatomic) BOOL hasActionDataItemIndex;
@property (nonatomic) int actionDataItemIndex;
@property (readonly, nonatomic) BOOL hasGroupData;
@property (retain, nonatomic) GEOPDGroupData *groupData;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsGroupButtonType:(id)a0;
- (id)groupButtonTypeAsString:(int)a0;

@end
