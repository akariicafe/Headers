@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackImageUploadParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_images;
    BOOL _isEnrichment;
    struct { unsigned char has_isEnrichment : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *images;
@property (nonatomic) BOOL hasIsEnrichment;
@property (nonatomic) BOOL isEnrichment;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)imageType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearImages;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)imagesCount;
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
- (void)addImage:(id)a0;
- (id)imageAtIndex:(unsigned long long)a0;

@end
