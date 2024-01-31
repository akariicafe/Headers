@class PBDataReader, GEOPDAppClipParams, GEOPDExtensionParams, GEOPDQuickLinkActionDataParams, PBUnknownFields;

@interface GEOPDLink : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAppClipParams *_appClipParams;
    GEOPDExtensionParams *_extensionParams;
    GEOPDQuickLinkActionDataParams *_quickLinkParams;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _linkType;
    struct { unsigned char has_linkType : 1; unsigned char read_unknownFields : 1; unsigned char read_appClipParams : 1; unsigned char read_extensionParams : 1; unsigned char read_quickLinkParams : 1; unsigned char wrote_anyField : 1; } _flags;
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
