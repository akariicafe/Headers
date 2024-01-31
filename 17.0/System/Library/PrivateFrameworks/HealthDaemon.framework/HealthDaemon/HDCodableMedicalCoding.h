@class NSString;

@interface HDCodableMedicalCoding : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCodingSystem;
@property (retain, nonatomic) NSString *codingSystem;
@property (readonly, nonatomic) BOOL hasCodingVersion;
@property (retain, nonatomic) NSString *codingVersion;
@property (readonly, nonatomic) BOOL hasCode;
@property (retain, nonatomic) NSString *code;
@property (readonly, nonatomic) BOOL hasDisplayString;
@property (retain, nonatomic) NSString *displayString;

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
