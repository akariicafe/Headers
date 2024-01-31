@class VCPProtoBounds, VCPProtoVideoKeyFrame, VCPProtoTimeRange, NSData;

@interface VCPProtoMovieHighlightResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) float curationScore;
@property (retain, nonatomic) VCPProtoVideoKeyFrame *keyFrame;
@property (retain, nonatomic) VCPProtoBounds *playbackCrop;
@property (readonly, nonatomic) BOOL hasColorNormalizationBlob;
@property (retain, nonatomic) NSData *colorNormalizationBlob;

+ (id)resultFromLegacyDictionary:(id)a0;

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
- (id)exportToLegacyDictionary;

@end
