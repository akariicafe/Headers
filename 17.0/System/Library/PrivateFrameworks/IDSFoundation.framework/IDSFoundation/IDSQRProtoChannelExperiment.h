@class NSString;

@interface IDSQRProtoChannelExperiment : PBCodable <NSCopying> {
    struct { unsigned char int32Value : 1; unsigned char testValue : 1; unsigned char boolValue : 1; } _has;
}

@property (retain, nonatomic) NSString *experimentName;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasInt32Value;
@property (nonatomic) int int32Value;
@property (nonatomic) BOOL hasTestValue;
@property (nonatomic) int testValue;

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
- (int)StringAsTestValue:(id)a0;
- (void)clearOneofValuesForTestValue;
- (id)testValueAsString:(int)a0;

@end
