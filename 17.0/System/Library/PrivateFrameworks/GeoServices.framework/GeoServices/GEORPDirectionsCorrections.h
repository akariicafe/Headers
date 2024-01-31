@class GEORPCorrectedCoordinate, NSString, PBDataReader, NSData, NSMutableArray, PBUnknownFields;

@interface GEORPDirectionsCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPCorrectedCoordinate *_arrivalCoordinate;
    NSData *_directionsResponseId;
    NSMutableArray *_instructionCorrections;
    NSString *_overviewScreenshotImageId;
    NSMutableArray *_problematicRouteIndexs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _noGoodRoutesShown;
    struct { unsigned char has_noGoodRoutesShown : 1; unsigned char read_unknownFields : 1; unsigned char read_arrivalCoordinate : 1; unsigned char read_directionsResponseId : 1; unsigned char read_instructionCorrections : 1; unsigned char read_overviewScreenshotImageId : 1; unsigned char read_problematicRouteIndexs : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDirectionsResponseId;
@property (retain, nonatomic) NSData *directionsResponseId;
@property (retain, nonatomic) NSMutableArray *problematicRouteIndexs;
@property (retain, nonatomic) NSMutableArray *instructionCorrections;
@property (readonly, nonatomic) BOOL hasOverviewScreenshotImageId;
@property (retain, nonatomic) NSString *overviewScreenshotImageId;
@property (readonly, nonatomic) BOOL hasArrivalCoordinate;
@property (retain, nonatomic) GEORPCorrectedCoordinate *arrivalCoordinate;
@property (nonatomic) BOOL hasNoGoodRoutesShown;
@property (nonatomic) BOOL noGoodRoutesShown;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)instructionCorrectionType;
+ (Class)problematicRouteIndexType;

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
- (void)addInstructionCorrection:(id)a0;
- (void)addProblematicRouteIndex:(id)a0;
- (void)clearInstructionCorrections;
- (void)clearProblematicRouteIndexs;
- (id)instructionCorrectionAtIndex:(unsigned long long)a0;
- (unsigned long long)instructionCorrectionsCount;
- (id)problematicRouteIndexAtIndex:(unsigned long long)a0;
- (unsigned long long)problematicRouteIndexsCount;

@end
