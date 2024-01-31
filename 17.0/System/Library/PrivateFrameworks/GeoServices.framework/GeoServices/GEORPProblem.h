@class PBDataReader, GEORPProblemCorrections, GEORPProblemContext;

@interface GEORPProblem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _userPaths;
    GEORPProblemContext *_problemContext;
    GEORPProblemCorrections *_problemCorrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _problemType;
    unsigned int _protocolVersion;
    struct { unsigned char has_problemType : 1; unsigned char has_protocolVersion : 1; unsigned char read_userPaths : 1; unsigned char read_problemContext : 1; unsigned char read_problemCorrections : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (readonly, nonatomic) unsigned long long userPathsCount;
@property (readonly, nonatomic) int *userPaths;
@property (nonatomic) BOOL hasProblemType;
@property (nonatomic) int problemType;
@property (readonly, nonatomic) BOOL hasProblemCorrections;
@property (retain, nonatomic) GEORPProblemCorrections *problemCorrections;
@property (readonly, nonatomic) BOOL hasProblemContext;
@property (retain, nonatomic) GEORPProblemContext *problemContext;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsUserPaths:(id)a0;
- (int)StringAsProblemType:(id)a0;
- (void)addUserPath:(int)a0;
- (void)clearUserPaths;
- (id)problemTypeAsString:(int)a0;
- (void)setUserPaths:(int *)a0 count:(unsigned long long)a1;
- (int)userPathAtIndex:(unsigned long long)a0;
- (id)userPathsAsString:(int)a0;

@end
