@class PBUnknownFields, NSString, PBDataReader, NSMutableArray, GEOStyleAttributes;

@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_completion;
    NSMutableArray *_resultRefinements;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _tapBehavior;
    BOOL _queryHasAttributeIntentsInRefinements;
    BOOL _showIntermediateStateTapBehaviorListView;
    struct { unsigned char has_tapBehavior : 1; unsigned char has_queryHasAttributeIntentsInRefinements : 1; unsigned char has_showIntermediateStateTapBehaviorListView : 1; unsigned char read_unknownFields : 1; unsigned char read_completion : 1; unsigned char read_resultRefinements : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCompletion;
@property (retain, nonatomic) NSString *completion;
@property (nonatomic) BOOL hasTapBehavior;
@property (nonatomic) int tapBehavior;
@property (nonatomic) BOOL hasShowIntermediateStateTapBehaviorListView;
@property (nonatomic) BOOL showIntermediateStateTapBehaviorListView;
@property (retain, nonatomic) NSMutableArray *resultRefinements;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic) BOOL hasQueryHasAttributeIntentsInRefinements;
@property (nonatomic) BOOL queryHasAttributeIntentsInRefinements;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)resultRefinementType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
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
- (int)StringAsTapBehavior:(id)a0;
- (void)addResultRefinement:(id)a0;
- (void)clearResultRefinements;
- (id)resultRefinementAtIndex:(unsigned long long)a0;
- (unsigned long long)resultRefinementsCount;
- (id)tapBehaviorAsString:(int)a0;

@end
