@class NSString, PBUnknownFields;

@interface GEOPDResultRefinementMetadataSort : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_customSortFunctionIdentifier;
    unsigned int _selectionFromQuerySequenceNumber;
    unsigned int _serverOverriddenPosition;
    int _sortType;
    BOOL _enableServerOverriddenPositioning;
    BOOL _selectionFromQuery;
    struct { unsigned char has_selectionFromQuerySequenceNumber : 1; unsigned char has_serverOverriddenPosition : 1; unsigned char has_sortType : 1; unsigned char has_enableServerOverriddenPositioning : 1; unsigned char has_selectionFromQuery : 1; } _flags;
}

@property (nonatomic) BOOL hasSortType;
@property (nonatomic) int sortType;
@property (readonly, nonatomic) BOOL hasCustomSortFunctionIdentifier;
@property (retain, nonatomic) NSString *customSortFunctionIdentifier;
@property (nonatomic) BOOL hasSelectionFromQuerySequenceNumber;
@property (nonatomic) unsigned int selectionFromQuerySequenceNumber;
@property (nonatomic) BOOL hasSelectionFromQuery;
@property (nonatomic) BOOL selectionFromQuery;
@property (nonatomic) BOOL hasServerOverriddenPosition;
@property (nonatomic) unsigned int serverOverriddenPosition;
@property (nonatomic) BOOL hasEnableServerOverriddenPositioning;
@property (nonatomic) BOOL enableServerOverriddenPositioning;
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
- (int)StringAsSortType:(id)a0;
- (id)sortTypeAsString:(int)a0;

@end
