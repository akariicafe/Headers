@class PBDataReader, GEOPDVenueItemList, GEOPDLocatedInsideInfo, NSMutableArray, PBUnknownFields;

@interface GEOPDVenueInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_filterElements;
    GEOPDVenueItemList *_itemList;
    GEOPDLocatedInsideInfo *_locatedInside;
    NSMutableArray *_venueFeatureIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _featureType;
    int _goInsideLevel;
    struct { unsigned char has_featureType : 1; unsigned char has_goInsideLevel : 1; unsigned char read_unknownFields : 1; unsigned char read_filterElements : 1; unsigned char read_itemList : 1; unsigned char read_locatedInside : 1; unsigned char read_venueFeatureIds : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)venueInfoForPlaceData:(id)a0;

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
