@class NSData;

@interface NRPBSwitchRecord : PBCodable <NSCopying> {
    double _dateTimeInterval;
    NSData *_deviceIDBytes;
    int _switchIndex;
    struct { unsigned char dateTimeInterval : 1; unsigned char switchIndex : 1; } _has;
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
