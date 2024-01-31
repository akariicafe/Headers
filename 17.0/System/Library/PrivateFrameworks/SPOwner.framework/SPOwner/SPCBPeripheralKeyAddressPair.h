@class NSData;

@interface SPCBPeripheralKeyAddressPair : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *leMACAddress;
@property (readonly, copy, nonatomic) NSData *longTermKey;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLEMACAddress:(id)a0 longTermKey:(id)a1;

@end
