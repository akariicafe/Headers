@class PBUnknownFields, GEOLabelInfo, PBDataReader, NSMutableArray, GEOStyleAttributes;

@interface GEORouteLineStyleInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLabelInfo *_labelInfo;
    NSMutableArray *_laneChangeInfos;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _endOffsetCm;
    int _purpose;
    unsigned int _startOffsetCm;
    BOOL _preserveStyleInUpdates;
    struct { unsigned char has_endOffsetCm : 1; unsigned char has_purpose : 1; unsigned char has_startOffsetCm : 1; unsigned char has_preserveStyleInUpdates : 1; unsigned char read_unknownFields : 1; unsigned char read_labelInfo : 1; unsigned char read_laneChangeInfos : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasPurpose;
@property (nonatomic) int purpose;
@property (nonatomic) BOOL hasStartOffsetCm;
@property (nonatomic) unsigned int startOffsetCm;
@property (nonatomic) BOOL hasEndOffsetCm;
@property (nonatomic) unsigned int endOffsetCm;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) BOOL hasLabelInfo;
@property (retain, nonatomic) GEOLabelInfo *labelInfo;
@property (nonatomic) BOOL hasPreserveStyleInUpdates;
@property (nonatomic) BOOL preserveStyleInUpdates;
@property (retain, nonatomic) NSMutableArray *laneChangeInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)laneChangeInfoType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
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
- (int)StringAsPurpose:(id)a0;
- (void)addLaneChangeInfo:(id)a0;
- (void)clearLaneChangeInfos;
- (id)laneChangeInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)laneChangeInfosCount;
- (id)purposeAsString:(int)a0;

@end
