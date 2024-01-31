@class PBDataReader, NSString, GEOPDSearchSectionPlace, GEOPDSearchSectionGuide, PBUnknownFields;

@interface GEOPDSearchSection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_name;
    GEOPDSearchSectionGuide *_sectionGuide;
    GEOPDSearchSectionPlace *_sectionPlace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _contentType;
    unsigned int _sectionIdentifier;
    unsigned int _sectionRank;
    int _sectionType;
    struct { unsigned char has_contentType : 1; unsigned char has_sectionIdentifier : 1; unsigned char has_sectionRank : 1; unsigned char has_sectionType : 1; unsigned char read_unknownFields : 1; unsigned char read_name : 1; unsigned char read_sectionGuide : 1; unsigned char read_sectionPlace : 1; unsigned char wrote_anyField : 1; } _flags;
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
