@class PBDataReader, NSString, GEOPDRating, GEOPDPriceDescription, NSMutableArray, PBUnknownFields;

@interface GEOPDResultSnippet : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_category;
    NSMutableArray *_childItems;
    NSMutableArray *_childPlaces;
    NSString *_locationString;
    NSString *_name;
    GEOPDPriceDescription *_priceDescription;
    GEOPDRating *_priceRange;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distanceDisplayThreshold;
    struct { unsigned char has_distanceDisplayThreshold : 1; unsigned char read_unknownFields : 1; unsigned char read_category : 1; unsigned char read_childItems : 1; unsigned char read_childPlaces : 1; unsigned char read_locationString : 1; unsigned char read_name : 1; unsigned char read_priceDescription : 1; unsigned char read_priceRange : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)resultSnippetForPlaceData:(id)a0;

- (id)init;
- (unsigned long long)hash;
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
