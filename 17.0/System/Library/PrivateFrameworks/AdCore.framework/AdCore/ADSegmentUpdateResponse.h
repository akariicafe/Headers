@class NSString;

@interface ADSegmentUpdateResponse : PBCodable <NSCopying> {
    struct { unsigned char maxSegmentUpdateIntervalInSeconds : 1; unsigned char segmentRefreshIntervalInSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdDebug;
@property (retain, nonatomic) NSString *idDebug;
@property (nonatomic) BOOL hasSegmentRefreshIntervalInSeconds;
@property (nonatomic) double segmentRefreshIntervalInSeconds;
@property (nonatomic) BOOL hasMaxSegmentUpdateIntervalInSeconds;
@property (nonatomic) double maxSegmentUpdateIntervalInSeconds;

+ (id)options;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
