@interface GEORPIncidentUserPath : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _userPaths;
    int _transportType;
    BOOL _navigationActive;
    BOOL _reportedFromCarplay;
    struct { unsigned char has_transportType : 1; unsigned char has_navigationActive : 1; unsigned char has_reportedFromCarplay : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long userPathsCount;
@property (readonly, nonatomic) int *userPaths;
@property (nonatomic) BOOL hasReportedFromCarplay;
@property (nonatomic) BOOL reportedFromCarplay;
@property (nonatomic) BOOL hasNavigationActive;
@property (nonatomic) BOOL navigationActive;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (int)StringAsTransportType:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)transportTypeAsString:(int)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsUserPaths:(id)a0;
- (void)addUserPath:(int)a0;
- (void)clearUserPaths;
- (void)setUserPaths:(int *)a0 count:(unsigned long long)a1;
- (int)userPathAtIndex:(unsigned long long)a0;
- (id)userPathsAsString:(int)a0;

@end
