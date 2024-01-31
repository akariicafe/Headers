@class PBDataReader, NSString, GEORouteAnnotation, NSMutableArray, PBUnknownFields;

@interface GEOEnrouteNotice : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_guidances;
    NSString *_objectIdentifier;
    GEORouteAnnotation *_routeAnnotation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _groupItemHorizontalDisplayOrder;
    unsigned int _groupItemVerticalDisplayOrder;
    unsigned int _highlightDistance;
    unsigned int _objectGroupId;
    unsigned int _priority;
    int _type;
    unsigned int _zilchPathIndex;
    struct { unsigned char has_groupItemHorizontalDisplayOrder : 1; unsigned char has_groupItemVerticalDisplayOrder : 1; unsigned char has_highlightDistance : 1; unsigned char has_objectGroupId : 1; unsigned char has_priority : 1; unsigned char has_type : 1; unsigned char has_zilchPathIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_guidances : 1; unsigned char read_objectIdentifier : 1; unsigned char read_routeAnnotation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasObjectIdentifier;
@property (retain, nonatomic) NSString *objectIdentifier;
@property (retain, nonatomic) NSMutableArray *guidances;
@property (nonatomic) BOOL hasHighlightDistance;
@property (nonatomic) unsigned int highlightDistance;
@property (nonatomic) BOOL hasObjectGroupId;
@property (nonatomic) unsigned int objectGroupId;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned int priority;
@property (readonly, nonatomic) BOOL hasRouteAnnotation;
@property (retain, nonatomic) GEORouteAnnotation *routeAnnotation;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (nonatomic) unsigned int zilchPathIndex;
@property (nonatomic) BOOL hasGroupItemHorizontalDisplayOrder;
@property (nonatomic) unsigned int groupItemHorizontalDisplayOrder;
@property (nonatomic) BOOL hasGroupItemVerticalDisplayOrder;
@property (nonatomic) unsigned int groupItemVerticalDisplayOrder;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)guidanceType;

- (id)init;
- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addGuidance:(id)a0;
- (void)clearGuidances;
- (id)guidanceAtIndex:(unsigned long long)a0;
- (unsigned long long)guidancesCount;

@end
