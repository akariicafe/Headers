@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackImageUploadInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_clientImageUuid;
    NSString *_imageId;
    NSString *_imageUploadHttpMethod;
    NSString *_imageUploadUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_clientImageUuid : 1; unsigned char read_imageId : 1; unsigned char read_imageUploadHttpMethod : 1; unsigned char read_imageUploadUrl : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasImageId;
@property (retain, nonatomic) NSString *imageId;
@property (readonly, nonatomic) BOOL hasClientImageUuid;
@property (retain, nonatomic) NSString *clientImageUuid;
@property (readonly, nonatomic) BOOL hasImageUploadUrl;
@property (retain, nonatomic) NSString *imageUploadUrl;
@property (readonly, nonatomic) BOOL hasImageUploadHttpMethod;
@property (retain, nonatomic) NSString *imageUploadHttpMethod;
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

@end
