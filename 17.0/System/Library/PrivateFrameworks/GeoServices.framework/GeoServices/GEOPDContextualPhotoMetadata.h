@class NSMutableArray, PBUnknownFields;

@interface GEOPDContextualPhotoMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_contextualPhotoLabels;
    unsigned int _maxNumContextualPhotos;
    unsigned int _maxNumPhotos;
    BOOL _shouldApplyContextualizationPlacecard;
    BOOL _shouldApplyContextualizationSearch;
    BOOL _shouldLimitToPoisWithVendorTopPhoto;
    struct { unsigned char has_maxNumContextualPhotos : 1; unsigned char has_maxNumPhotos : 1; unsigned char has_shouldApplyContextualizationPlacecard : 1; unsigned char has_shouldApplyContextualizationSearch : 1; unsigned char has_shouldLimitToPoisWithVendorTopPhoto : 1; } _flags;
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
