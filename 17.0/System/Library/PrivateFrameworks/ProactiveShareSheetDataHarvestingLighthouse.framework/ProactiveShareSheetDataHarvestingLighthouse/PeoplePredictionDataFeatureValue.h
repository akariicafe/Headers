@class NSString;

@interface PeoplePredictionDataFeatureValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char intValue : 1; unsigned char timeBucketValue : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) BOOL hasIntValue;
@property (nonatomic) unsigned int intValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) BOOL hasTimeBucketValue;
@property (nonatomic) int timeBucketValue;

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
- (int)StringAsTimeBucketValue:(id)a0;
- (id)timeBucketValueAsString:(int)a0;

@end
