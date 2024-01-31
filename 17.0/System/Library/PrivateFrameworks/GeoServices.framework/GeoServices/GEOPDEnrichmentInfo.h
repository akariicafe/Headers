@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDEnrichmentInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_poiNames;
    NSString *_showcaseId;
    NSMutableArray *_showcaseImageUrls;
    NSMutableArray *_showcaseTitles;
    NSString *_sourceId;
    NSString *_sourceName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_poiNames : 1; unsigned char read_showcaseId : 1; unsigned char read_showcaseImageUrls : 1; unsigned char read_showcaseTitles : 1; unsigned char read_sourceId : 1; unsigned char read_sourceName : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)enrichmentInfoWithPlaceData:(id)a0;

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
