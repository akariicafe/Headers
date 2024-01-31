@interface _MRGetVoiceInputDevicesResponseMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _deviceIDs;
    struct { unsigned char errorCode : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long deviceIDsCount;
@property (readonly, nonatomic) unsigned int *deviceIDs;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addDeviceIDs:(unsigned int)a0;
- (void)clearDeviceIDs;
- (unsigned int)deviceIDsAtIndex:(unsigned long long)a0;
- (void)setDeviceIDs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
