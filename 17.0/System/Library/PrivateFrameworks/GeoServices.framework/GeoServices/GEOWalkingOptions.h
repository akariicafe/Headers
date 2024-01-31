@class PBDataReader, GEOWalkingUserPreferences, PBUnknownFields;

@interface GEOWalkingOptions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _avoidedModes;
    double _preferredSpeed;
    GEOWalkingUserPreferences *_walkingUserPreferences;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_preferredSpeed : 1; unsigned char read_unknownFields : 1; unsigned char read_avoidedModes : 1; unsigned char read_walkingUserPreferences : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasPreferredSpeed;
@property (nonatomic) double preferredSpeed;
@property (readonly, nonatomic) unsigned long long avoidedModesCount;
@property (readonly, nonatomic) int *avoidedModes;
@property (readonly, nonatomic) BOOL hasWalkingUserPreferences;
@property (retain, nonatomic) GEOWalkingUserPreferences *walkingUserPreferences;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)addAvoidedMode:(int)a0;
- (id)avoidedModesAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (int)avoidedModeAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setAvoidedModes:(int *)a0 count:(unsigned long long)a1;
- (id)description;
- (int)StringAsAvoidedModes:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearAvoidedModes;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
