@class NSString, _MRSystemPlaybackCustomDataQueueProtobuf, NSData, _MRSystemPlaybackGenericTracklistQueueProtobuf;

@interface _MRSystemPlaybackQueueProtobuf : PBCodable <NSCopying> {
    struct { unsigned char replaceIntent : 1; unsigned char isRequestingImmediatePlayback : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL hasReplaceIntent;
@property (nonatomic) int replaceIntent;
@property (nonatomic) BOOL hasIsRequestingImmediatePlayback;
@property (nonatomic) BOOL isRequestingImmediatePlayback;
@property (readonly, nonatomic) BOOL hasFeatureName;
@property (retain, nonatomic) NSString *featureName;
@property (readonly, nonatomic) BOOL hasCustomData;
@property (retain, nonatomic) _MRSystemPlaybackCustomDataQueueProtobuf *customData;
@property (readonly, nonatomic) BOOL hasTracklist;
@property (retain, nonatomic) _MRSystemPlaybackGenericTracklistQueueProtobuf *tracklist;
@property (readonly, nonatomic) BOOL hasUserInfo;
@property (retain, nonatomic) NSData *userInfo;
@property (readonly, nonatomic) BOOL hasMetrics;
@property (retain, nonatomic) NSData *metrics;

- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsReplaceIntent:(id)a0;
- (id)replaceIntentAsString:(int)a0;

@end
