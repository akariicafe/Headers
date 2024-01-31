@class NSMutableArray, VCPProtoTimeRange;

@interface VCPProtoMovieSafetyResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) int sensitivity;
@property (retain, nonatomic) NSMutableArray *classifications;

+ (Class)classificationType;
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
- (void)addClassification:(id)a0;
- (id)classificationAtIndex:(unsigned long long)a0;
- (unsigned long long)classificationsCount;
- (void)clearClassifications;
- (id)exportToLegacyDictionary;

@end
