@interface ATXPBAppDirectoryEventMetadata : PBCodable <NSCopying> {
    BOOL _bundleIdInTopAppsVisible;
    BOOL _userLaunchedAppBeforeLeaving;
    struct { unsigned char bundleIdInTopAppsVisible : 1; unsigned char userLaunchedAppBeforeLeaving : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
