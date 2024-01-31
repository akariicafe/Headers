@interface TSCHStyleOwnerUUIDEncoder : NSObject {
    unsigned char _UUID[16];
    unsigned long long _index;
}

+ (id)UUIDEncoder;
+ (id)UUIDEncoderWithStyleOwnerPathType:(unsigned char)a0;
+ (id)styleOwnerBaseUUID;
+ (id)styleOwnerBaseUUIDString;

- (id)init;
- (void)encodeByte:(unsigned char)a0;
- (void)encodeUInt64:(unsigned long long)a0;
- (void)encodeUInt64FromNSUInteger:(unsigned long long)a0;
- (id)encodedUUID;
- (BOOL)hasSpaceToEncodeNumberOfBytes:(unsigned long long)a0;

@end
