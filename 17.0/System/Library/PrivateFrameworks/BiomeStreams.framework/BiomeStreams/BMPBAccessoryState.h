@class NSString, NSData;

@interface BMPBAccessoryState : PBCodable <NSCopying> {
    struct { unsigned char numValue : 1; unsigned char valueType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMediaPropertyType;
@property (retain, nonatomic) NSString *mediaPropertyType;
@property (nonatomic) BOOL hasValueType;
@property (nonatomic) int valueType;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasNumValue;
@property (nonatomic) double numValue;

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
- (int)StringAsValueType:(id)a0;
- (id)valueTypeAsString:(int)a0;

@end
