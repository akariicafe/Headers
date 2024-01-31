@class PBDataReader, NSString, GEOLocalizedString, NSMutableArray, PBUnknownFields;

@interface GEOPDLocalizedQueryUnderstandingTaxonomyResultItemBrand : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_categorys;
    NSString *_countryCode;
    unsigned long long _muid;
    GEOLocalizedString *_prefDisplayName;
    NSString *_prefPhone;
    NSString *_prefUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_muid : 1; unsigned char read_unknownFields : 1; unsigned char read_categorys : 1; unsigned char read_countryCode : 1; unsigned char read_prefDisplayName : 1; unsigned char read_prefPhone : 1; unsigned char read_prefUrl : 1; unsigned char wrote_anyField : 1; } _flags;
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
