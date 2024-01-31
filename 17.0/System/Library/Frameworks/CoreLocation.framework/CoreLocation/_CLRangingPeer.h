@class NSData;

@interface _CLRangingPeer : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long macAddress;
@property (readonly, copy, nonatomic) NSData *secureRangingKeyID;

+ (id)hexStringMacAddressFromUInt:(unsigned long long)a0;
+ (unsigned long long)uintMacAddressFromString:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getMacAddressAsString;
- (id)initWithMacAddressAsData:(id)a0 secureRangingKeyID:(id)a1;
- (id)initWithMacAddressAsString:(id)a0 secureRangingKeyID:(id)a1;
- (id)initWithMacAddressAsUInt:(unsigned long long)a0 secureRangingKeyID:(id)a1;
- (BOOL)isEqualToPeer:(id)a0;

@end
