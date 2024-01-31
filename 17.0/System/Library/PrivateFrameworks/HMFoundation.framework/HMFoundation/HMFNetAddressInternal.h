@class NSString;

@interface HMFNetAddressInternal : HMFObject

@property (readonly, nonatomic) unsigned long long addressFamily;
@property (readonly, copy, nonatomic) NSString *addressString;

- (void).cxx_destruct;
- (id)dataUsingEncoding:(unsigned long long)a0;

@end
