@class NSString;

@interface CKCDPCodeServiceRequestDatabaseOwner : PBCodable <NSCopying> {
    struct { unsigned char numericValue : 1; unsigned char identifier : 1; } _has;
}

@property (nonatomic) BOOL hasNumericValue;
@property (nonatomic) unsigned long long numericValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) int identifier;

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
- (int)StringAsIdentifier:(id)a0;
- (void)clearOneofValuesForIdentifier;
- (id)identifierAsString:(int)a0;

@end
