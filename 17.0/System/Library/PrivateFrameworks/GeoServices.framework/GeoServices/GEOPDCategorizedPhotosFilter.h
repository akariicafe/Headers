@class PBUnknownFields, NSString, PBDataReader;

@interface GEOPDCategorizedPhotosFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOPDPhotoSizeFilterValue { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_photoSizeFilters;
    unsigned long long _photoSizeFiltersCount;
    unsigned long long _photoSizeFiltersSpace;
    NSString *_categoryId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _count;
    int _startIndex;
    BOOL _coverPhotoFirst;
    BOOL _includeCoverPhoto;
    struct { unsigned char has_count : 1; unsigned char has_startIndex : 1; unsigned char has_coverPhotoFirst : 1; unsigned char has_includeCoverPhoto : 1; unsigned char read_unknownFields : 1; unsigned char read_photoSizeFilters : 1; unsigned char read_categoryId : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
