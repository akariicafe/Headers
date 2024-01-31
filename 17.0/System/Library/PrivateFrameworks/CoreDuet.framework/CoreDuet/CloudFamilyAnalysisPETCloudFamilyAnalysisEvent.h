@class NSString, CloudFamilyAnalysisPETContactEvents;

@interface CloudFamilyAnalysisPETCloudFamilyAnalysisEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *collectionId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) int batch;
@property (retain, nonatomic) CloudFamilyAnalysisPETContactEvents *contactEvents;

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
