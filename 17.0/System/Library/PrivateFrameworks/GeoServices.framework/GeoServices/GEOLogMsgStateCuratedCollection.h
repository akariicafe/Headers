@class PBDataReader, GEOPublisherDetails, GEOCollectionDetails;

@interface GEOLogMsgStateCuratedCollection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _impossibleActions;
    struct { int *list; unsigned long long count; unsigned long long size; } _possibleActions;
    GEOCollectionDetails *_collectionDetails;
    GEOPublisherDetails *_publisherDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _horizontalIndex;
    int _localSearchProviderID;
    int _placecardType;
    int _repeatableSectionIndex;
    unsigned int _verticalIndex;
    struct { unsigned char has_horizontalIndex : 1; unsigned char has_localSearchProviderID : 1; unsigned char has_placecardType : 1; unsigned char has_repeatableSectionIndex : 1; unsigned char has_verticalIndex : 1; unsigned char read_impossibleActions : 1; unsigned char read_possibleActions : 1; unsigned char read_collectionDetails : 1; unsigned char read_publisherDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPublisherDetails;
@property (retain, nonatomic) GEOPublisherDetails *publisherDetails;
@property (readonly, nonatomic) BOOL hasCollectionDetails;
@property (retain, nonatomic) GEOCollectionDetails *collectionDetails;
@property (nonatomic) BOOL hasPlacecardType;
@property (nonatomic) int placecardType;
@property (readonly, nonatomic) unsigned long long possibleActionsCount;
@property (readonly, nonatomic) int *possibleActions;
@property (readonly, nonatomic) unsigned long long impossibleActionsCount;
@property (readonly, nonatomic) int *impossibleActions;
@property (nonatomic) BOOL hasVerticalIndex;
@property (nonatomic) unsigned int verticalIndex;
@property (nonatomic) BOOL hasHorizontalIndex;
@property (nonatomic) unsigned int horizontalIndex;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) BOOL hasRepeatableSectionIndex;
@property (nonatomic) int repeatableSectionIndex;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
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
- (int)StringAsImpossibleActions:(id)a0;
- (int)StringAsPlacecardType:(id)a0;
- (int)StringAsPossibleActions:(id)a0;
- (void)addImpossibleAction:(int)a0;
- (void)addPossibleAction:(int)a0;
- (void)clearImpossibleActions;
- (void)clearPossibleActions;
- (int)impossibleActionAtIndex:(unsigned long long)a0;
- (id)impossibleActionsAsString:(int)a0;
- (id)placecardTypeAsString:(int)a0;
- (int)possibleActionAtIndex:(unsigned long long)a0;
- (id)possibleActionsAsString:(int)a0;
- (void)setImpossibleActions:(int *)a0 count:(unsigned long long)a1;
- (void)setPossibleActions:(int *)a0 count:(unsigned long long)a1;

@end
