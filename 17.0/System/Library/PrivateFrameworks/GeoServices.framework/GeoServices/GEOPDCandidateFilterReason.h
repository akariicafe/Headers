@class GEOPDResultRefinementMetadata, PBUnknownFields;

@interface GEOPDCandidateFilterReason : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDResultRefinementMetadata *_sortMetadata;
    int _reasonType;
    float _viewportExpansionFactor;
    struct { unsigned char has_reasonType : 1; unsigned char has_viewportExpansionFactor : 1; } _flags;
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
