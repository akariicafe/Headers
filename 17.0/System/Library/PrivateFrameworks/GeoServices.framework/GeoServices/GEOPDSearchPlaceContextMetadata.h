@class PBDataReader, NSString, GEOPDContextualPhotoMetadata, GEOPDNearbyPlacesMetadata, NSMutableArray, PBUnknownFields;

@interface GEOPDSearchPlaceContextMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alternateSearchableNames;
    GEOPDContextualPhotoMetadata *_contextualPhotoMetadata;
    NSString *_interpretedCategory;
    NSString *_matchedDisplayNameLanguageCode;
    NSString *_matchedDisplayName;
    GEOPDNearbyPlacesMetadata *_nearbyPlacesMetadata;
    NSString *_normalizedQuery;
    NSString *_secondaryNameOverrideLanguage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _taxonomyTypeForClientization;
    BOOL _isDefaultName;
    struct { unsigned char has_taxonomyTypeForClientization : 1; unsigned char has_isDefaultName : 1; unsigned char read_unknownFields : 1; unsigned char read_alternateSearchableNames : 1; unsigned char read_contextualPhotoMetadata : 1; unsigned char read_interpretedCategory : 1; unsigned char read_matchedDisplayNameLanguageCode : 1; unsigned char read_matchedDisplayName : 1; unsigned char read_nearbyPlacesMetadata : 1; unsigned char read_normalizedQuery : 1; unsigned char read_secondaryNameOverrideLanguage : 1; unsigned char wrote_anyField : 1; } _flags;
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
