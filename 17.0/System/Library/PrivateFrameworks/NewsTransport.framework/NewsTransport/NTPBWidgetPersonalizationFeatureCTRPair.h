@class NSString;

@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying> {
    struct { unsigned char ctr : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPersonalizationFeatureId;
@property (retain, nonatomic) NSString *personalizationFeatureId;
@property (nonatomic) BOOL hasCtr;
@property (nonatomic) float ctr;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
