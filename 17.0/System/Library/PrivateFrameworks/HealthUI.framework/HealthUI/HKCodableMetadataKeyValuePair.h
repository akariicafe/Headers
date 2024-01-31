@class NSString, HKCodableQuantity;

@interface HKCodableMetadataKeyValuePair : PBCodable <NSCopying> {
    struct APPLE_HKCodableMetadataKeyValuePair_1 { unsigned char numberIntValue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasNumberIntValue;
@property (nonatomic) long long numberIntValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasQuantityValue;
@property (retain, nonatomic) HKCodableQuantity *quantityValue;

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
