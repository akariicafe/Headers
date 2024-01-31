@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPPostedBy : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_nickname;
    NSString *_userDsid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _role;
    struct { unsigned char has_role : 1; unsigned char read_unknownFields : 1; unsigned char read_nickname : 1; unsigned char read_userDsid : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasRole;
@property (nonatomic) int role;
@property (readonly, nonatomic) BOOL hasUserDsid;
@property (retain, nonatomic) NSString *userDsid;
@property (readonly, nonatomic) BOOL hasNickname;
@property (retain, nonatomic) NSString *nickname;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

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
- (int)StringAsRole:(id)a0;
- (id)roleAsString:(int)a0;

@end
