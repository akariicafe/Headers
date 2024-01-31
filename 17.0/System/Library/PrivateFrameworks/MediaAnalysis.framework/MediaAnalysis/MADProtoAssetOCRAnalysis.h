@class NSString, NSData;

@interface MADProtoAssetOCRAnalysis : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *assetCloudIdentifier;
@property (nonatomic) double assetAdjustmentTimestamp;
@property (nonatomic) int algorithmVersion;
@property (nonatomic) double adjustmentVersion;
@property (readonly, nonatomic) BOOL hasCharacterRecognitionData;
@property (retain, nonatomic) NSData *characterRecognitionData;
@property (readonly, nonatomic) BOOL hasMachineReadableCodeData;
@property (retain, nonatomic) NSData *machineReadableCodeData;

+ (id)protoFromPhotosAsset:(id)a0;

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
- (void)persistToPhotosAsset:(id)a0;

@end
