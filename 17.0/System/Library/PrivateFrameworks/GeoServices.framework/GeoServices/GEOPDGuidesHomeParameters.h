@class GEOPDGuidesLocationEntry, PBDataReader, GEOPDResultRefinementGuidesHome, GEOPDGuidesHomeResultFilter, GEOPDViewportInfo, PBUnknownFields;

@interface GEOPDGuidesHomeParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedFixedSectionTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedRepeatableSectionTypes;
    GEOPDGuidesLocationEntry *_guidesLocationEntry;
    GEOPDResultRefinementGuidesHome *_refinementGuidesHome;
    GEOPDGuidesHomeResultFilter *_resultFilter;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_supportedFixedSectionTypes : 1; unsigned char read_supportedRepeatableSectionTypes : 1; unsigned char read_guidesLocationEntry : 1; unsigned char read_refinementGuidesHome : 1; unsigned char read_resultFilter : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
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
