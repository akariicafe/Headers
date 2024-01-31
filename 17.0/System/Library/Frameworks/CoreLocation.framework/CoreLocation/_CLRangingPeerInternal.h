@class NSData;

@interface _CLRangingPeerInternal : NSObject <NSCopying> {
    unsigned long long _macAddress;
    NSData *_secureRangingKeyID;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMacAddressAsUInt:(unsigned long long)a0 secureRangingKeyID:(id)a1;

@end
