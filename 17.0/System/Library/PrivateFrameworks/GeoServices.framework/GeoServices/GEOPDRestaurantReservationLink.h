@class NSMutableArray, PBUnknownFields;

@interface GEOPDRestaurantReservationLink : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_restaurantLinks;
}

+ (id)reservationLinkForPlaceData:(id)a0;

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
