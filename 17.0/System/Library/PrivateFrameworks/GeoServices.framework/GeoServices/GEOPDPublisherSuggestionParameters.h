@class GEOPDViewportInfo, PBUnknownFields;

@interface GEOPDPublisherSuggestionParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _requestLocalTimestamp;
    GEOPDViewportInfo *_viewportInfo;
    struct { unsigned char has_requestLocalTimestamp : 1; } _flags;
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
