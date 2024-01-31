@class CLPLOGENTRYVISIONTimeStamp, CLPLOGENTRYVISIONSimdDoubleMxN, CLPLOGENTRYVISIONVLMatrixfMxN, CLPLOGENTRYVISIONVLLocalizationDebugInfo, CLPLOGENTRYVISIONVLLocation;

@interface CLPLOGENTRYVISIONVLLocalizationResult : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocation *location;
@property (readonly, nonatomic) BOOL hasTransform;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN *transform;
@property (readonly, nonatomic) BOOL hasCovariance;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLMatrixfMxN *covariance;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) float confidence;
@property (readonly, nonatomic) BOOL hasDebugInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocalizationDebugInfo *debugInfo;

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
