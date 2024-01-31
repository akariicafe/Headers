@class NSString, NSMutableArray, ATXPBAppDirectoryEventMetadata;

@interface ATXPBAppDirectoryEvent : PBCodable <NSCopying> {
    unsigned long long _bundleIndex;
    unsigned long long _categoryID;
    unsigned long long _categoryIndex;
    double _date;
    unsigned long long _eventType;
    unsigned long long _searchQueryLength;
    unsigned long long _searchTab;
    NSString *_blendingCacheId;
    NSString *_bundleId;
    NSMutableArray *_engagedSuggestionIds;
    ATXPBAppDirectoryEventMetadata *_metadata;
    NSMutableArray *_shownSuggestionIds;
    struct { unsigned char bundleIndex : 1; unsigned char categoryID : 1; unsigned char categoryIndex : 1; unsigned char date : 1; unsigned char eventType : 1; unsigned char searchQueryLength : 1; unsigned char searchTab : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
