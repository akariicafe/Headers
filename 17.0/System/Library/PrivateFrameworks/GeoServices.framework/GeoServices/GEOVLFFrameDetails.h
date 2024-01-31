@class GEOVLFUsageTileID, PBDataReader;

@interface GEOVLFFrameDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { float *list; unsigned long long count; unsigned long long size; } _calibrationMatrixs;
    struct { double *list; unsigned long long count; unsigned long long size; } _resultPoseRotations;
    struct { float *list; unsigned long long count; unsigned long long size; } _slamPoses;
    struct { float *list; unsigned long long count; unsigned long long size; } _vioPoses;
    double _resultTranslationX;
    double _resultTranslationY;
    double _resultTranslationZ;
    GEOVLFUsageTileID *_tileId;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _radialDistortion1;
    float _radialDistortion2;
    int _resultStatus;
    unsigned int _vioStatus;
    struct { unsigned char has_resultTranslationX : 1; unsigned char has_resultTranslationY : 1; unsigned char has_resultTranslationZ : 1; unsigned char has_timestamp : 1; unsigned char has_radialDistortion1 : 1; unsigned char has_radialDistortion2 : 1; unsigned char has_resultStatus : 1; unsigned char has_vioStatus : 1; unsigned char read_calibrationMatrixs : 1; unsigned char read_resultPoseRotations : 1; unsigned char read_slamPoses : 1; unsigned char read_vioPoses : 1; unsigned char read_tileId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasVioStatus;
@property (nonatomic) unsigned int vioStatus;
@property (readonly, nonatomic) unsigned long long vioPosesCount;
@property (readonly, nonatomic) float *vioPoses;
@property (readonly, nonatomic) unsigned long long calibrationMatrixsCount;
@property (readonly, nonatomic) float *calibrationMatrixs;
@property (nonatomic) BOOL hasRadialDistortion1;
@property (nonatomic) float radialDistortion1;
@property (nonatomic) BOOL hasRadialDistortion2;
@property (nonatomic) float radialDistortion2;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned long long slamPosesCount;
@property (readonly, nonatomic) float *slamPoses;
@property (readonly, nonatomic) BOOL hasTileId;
@property (retain, nonatomic) GEOVLFUsageTileID *tileId;
@property (readonly, nonatomic) unsigned long long resultPoseRotationsCount;
@property (readonly, nonatomic) double *resultPoseRotations;
@property (nonatomic) BOOL hasResultTranslationX;
@property (nonatomic) double resultTranslationX;
@property (nonatomic) BOOL hasResultTranslationY;
@property (nonatomic) double resultTranslationY;
@property (nonatomic) BOOL hasResultTranslationZ;
@property (nonatomic) double resultTranslationZ;
@property (nonatomic) BOOL hasResultStatus;
@property (nonatomic) int resultStatus;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (float)vioPoseAtIndex:(unsigned long long)a0;
- (void)addCalibrationMatrix:(float)a0;
- (void)addResultPoseRotation:(double)a0;
- (void)addSlamPose:(float)a0;
- (void)addVioPose:(float)a0;
- (float)calibrationMatrixAtIndex:(unsigned long long)a0;
- (void)clearCalibrationMatrixs;
- (void)clearResultPoseRotations;
- (void)clearSlamPoses;
- (void)clearVioPoses;
- (double)resultPoseRotationAtIndex:(unsigned long long)a0;
- (void)setCalibrationMatrixs:(float *)a0 count:(unsigned long long)a1;
- (void)setResultPoseRotations:(double *)a0 count:(unsigned long long)a1;
- (void)setSlamPoses:(float *)a0 count:(unsigned long long)a1;
- (void)setVioPoses:(float *)a0 count:(unsigned long long)a1;
- (float)slamPoseAtIndex:(unsigned long long)a0;

@end
