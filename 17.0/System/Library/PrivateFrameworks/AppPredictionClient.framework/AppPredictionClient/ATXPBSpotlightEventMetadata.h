@class NSString;

@interface ATXPBSpotlightEventMetadata : PBCodable <NSCopying> {
    unsigned long long _searchEngagedActionType;
    NSString *_engagedAppString;
    NSString *_queryAtEngagement;
    NSString *_searchEngagedBundleId;
    BOOL _didSearchDuringSession;
    struct { unsigned char searchEngagedActionType : 1; unsigned char didSearchDuringSession : 1; } _has;
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
