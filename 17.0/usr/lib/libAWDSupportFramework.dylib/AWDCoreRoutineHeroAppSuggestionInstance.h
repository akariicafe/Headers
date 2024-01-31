@class NSString;

@interface AWDCoreRoutineHeroAppSuggestionInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char lat : 1; unsigned char lon : 1; unsigned char installed : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSuggestionId;
@property (retain, nonatomic) NSString *suggestionId;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasLat;
@property (nonatomic) int lat;
@property (nonatomic) BOOL hasLon;
@property (nonatomic) int lon;
@property (nonatomic) BOOL hasInstalled;
@property (nonatomic) BOOL installed;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
