@interface HMFMACAddress : HMFHardwareAddress <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;


- (id)initWithAddressString:(id)a0 length:(unsigned long long)a1;
- (id)initWithAddressData:(id)a0;
- (id)initWithMACAddressString:(id)a0;

@end
