@class PBUnknownFields, NSString, PBDataReader;

@interface GEOPDQuickLinkItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_appAdamId;
    NSString *_bundleId;
    NSString *_symbolImageName;
    NSString *_title;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _linkType;
    int _relationship;
    struct { unsigned char has_linkType : 1; unsigned char has_relationship : 1; unsigned char read_unknownFields : 1; unsigned char read_appAdamId : 1; unsigned char read_bundleId : 1; unsigned char read_symbolImageName : 1; unsigned char read_title : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)secondaryQuickLinksForPlaceData:(id)a0;
+ (id)quickLinksForPlaceData:(id)a0;

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
