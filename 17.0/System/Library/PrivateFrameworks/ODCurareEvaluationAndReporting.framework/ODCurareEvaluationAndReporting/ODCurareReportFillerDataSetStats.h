@class NSString;

@interface ODCurareReportFillerDataSetStats : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *featureName;
@property (retain, nonatomic) NSString *featureValueMin;
@property (retain, nonatomic) NSString *featureValueMax;
@property (retain, nonatomic) NSString *featureValueMean;
@property (retain, nonatomic) NSString *featureValueStd;
@property (retain, nonatomic) NSString *featureValuePercentile10;
@property (retain, nonatomic) NSString *featureValuePercentile25;
@property (retain, nonatomic) NSString *featureValuePercentile50;
@property (retain, nonatomic) NSString *featureValuePercentile75;
@property (retain, nonatomic) NSString *featureValuePercentile90;

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
