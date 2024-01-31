@class NSString, HKCodableSummarySupplementaryValue, NSData, HKCodableMetadataDictionary;

@interface HKCodableSummaryCurrentValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryCurrentValue_1 { unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasValueData;
@property (retain, nonatomic) NSData *valueData;
@property (readonly, nonatomic) BOOL hasKindRawValue;
@property (retain, nonatomic) NSString *kindRawValue;
@property (readonly, nonatomic) BOOL hasSupplementaryValue;
@property (retain, nonatomic) HKCodableSummarySupplementaryValue *supplementaryValue;
@property (readonly, nonatomic) BOOL hasQueryConfigurationData;
@property (retain, nonatomic) NSData *queryConfigurationData;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

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
