@class NSString;

@interface ICIAMSynchronizeMessagesRequest : PBRequest <NSCopying> {
    struct { unsigned char commandSerialNumber : 1; unsigned char dSID : 1; unsigned char activeCommandsOnly : 1; } _has;
}

@property (nonatomic) BOOL hasCommandSerialNumber;
@property (nonatomic) long long commandSerialNumber;
@property (nonatomic) BOOL hasDSID;
@property (nonatomic) long long dSID;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) BOOL hasActiveCommandsOnly;
@property (nonatomic) BOOL activeCommandsOnly;

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
