@class NSData, NSString, _DKPRValueType;

@interface _DKPRValue : PBCodable <NSCopying> {
    double _dateValue;
    double _doubleValue;
    long long _integerValue;
    NSData *_blobValue;
    NSString *_stringValue;
    _DKPRValueType *_type;
    struct { unsigned char dateValue : 1; unsigned char doubleValue : 1; unsigned char integerValue : 1; } _has;
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
