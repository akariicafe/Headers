@class NSMutableArray;

@interface GEOPDPhotoConstraints : PBCodable <NSCopying> {
    unsigned long long _maxPixels;
    NSMutableArray *_mediaTypes;
    unsigned long long _minPixels;
    float _maxAspectRatio;
    unsigned int _maxNumberOfPhotos;
    struct { unsigned char has_maxPixels : 1; unsigned char has_minPixels : 1; unsigned char has_maxAspectRatio : 1; unsigned char has_maxNumberOfPhotos : 1; } _flags;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
