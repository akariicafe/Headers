@class NSData, NSMutableArray, NSString;

@interface FCCKPConfigurationFieldValue : PBCodable <NSCopying> {
    double _doubleValue;
    long long _longValue;
    NSData *_bytesValue;
    NSMutableArray *_fieldValues;
    NSMutableArray *_listValues;
    NSString *_stringValue;
    int _type;
    BOOL _boolValue;
    struct { unsigned char doubleValue : 1; unsigned char longValue : 1; unsigned char type : 1; unsigned char boolValue : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
