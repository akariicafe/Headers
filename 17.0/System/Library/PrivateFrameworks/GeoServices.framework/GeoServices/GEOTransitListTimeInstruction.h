@class PBDataReader, NSString, GEOFormattedString, PBUnknownFields;

@interface GEOTransitListTimeInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_primaryText;
    GEOFormattedString *_secondaryText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _hideWhenListCollapsed;
    struct { unsigned char has_hideWhenListCollapsed : 1; unsigned char read_unknownFields : 1; unsigned char read_primaryText : 1; unsigned char read_secondaryText : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasPrimaryText;
@property (retain, nonatomic) GEOFormattedString *primaryText;
@property (readonly, nonatomic) BOOL hasSecondaryText;
@property (retain, nonatomic) GEOFormattedString *secondaryText;
@property (nonatomic) BOOL hasHideWhenListCollapsed;
@property (nonatomic) BOOL hideWhenListCollapsed;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
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
- (BOOL)_transit_hasAnyFieldSet;
- (void)_transit_mergeFrom:(id)a0;

@end
