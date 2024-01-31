@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDCategorizedPhotos : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_categoryId;
    NSMutableArray *_categoryNames;
    NSMutableArray *_photos;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _photosAvailable;
    struct { unsigned char has_photosAvailable : 1; unsigned char read_unknownFields : 1; unsigned char read_categoryId : 1; unsigned char read_categoryNames : 1; unsigned char read_photos : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (id)displayTitle;
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
