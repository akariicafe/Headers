@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDAttribution : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_actionUrlComponent;
    NSMutableArray *_attributionUrls;
    NSString *_externalComponentId;
    NSString *_externalItemId;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_actionUrlComponent : 1; unsigned char read_attributionUrls : 1; unsigned char read_externalComponentId : 1; unsigned char read_externalItemId : 1; unsigned char read_vendorId : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)attributionForAnnotatedItemList:(id)a0 placeData:(id)a1;
+ (id)attributionForPlaceDataEncyclopedia:(id)a0;
+ (id)attributionForPlaceDataEntity:(id)a0;
+ (id)attributionForPlaceDataRestaurantReservationLink:(id)a0;
+ (id)attributionForPlaceDataReview:(id)a0;
+ (id)componentLevelAttributionForPlaceDataPhotos:(id)a0;

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
- (BOOL)_isYelp;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
