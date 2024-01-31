@class NSData, PBUnknownFields;

@interface GEOPDTripLink : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSData *_linkGeometry;
    unsigned long long _linkId;
    struct { unsigned char has_linkId : 1; } _flags;
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
