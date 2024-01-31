@class PBDataReader, NSString, GEOPDQueryUnderstandingTaxonomyLookupParameters, GEOPDQueryUnderstandingTaxonomySearchParameters, GEOPDViewportInfo, PBUnknownFields;

@interface GEOPDQueryUnderstandingParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_searchString;
    GEOPDQueryUnderstandingTaxonomyLookupParameters *_taxonomyLookupParameters;
    GEOPDQueryUnderstandingTaxonomySearchParameters *_taxonomySearchParameters;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    int _workflow;
    struct { unsigned char has_type : 1; unsigned char has_workflow : 1; unsigned char read_unknownFields : 1; unsigned char read_searchString : 1; unsigned char read_taxonomyLookupParameters : 1; unsigned char read_taxonomySearchParameters : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

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
