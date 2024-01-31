@class PBDataReader, NSString, GEOStyleAttributes, PBUnknownFields;

@interface GEOPDSCategorySearchResultSection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_sectionHeaderDisplayName;
    NSString *_sectionSubHeaderDisplayNameWithEnrichment;
    NSString *_sectionSubHeaderDisplayName;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _categorySearchResultSectionCellType;
    struct { unsigned char has_categorySearchResultSectionCellType : 1; unsigned char read_unknownFields : 1; unsigned char read_sectionHeaderDisplayName : 1; unsigned char read_sectionSubHeaderDisplayNameWithEnrichment : 1; unsigned char read_sectionSubHeaderDisplayName : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
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
