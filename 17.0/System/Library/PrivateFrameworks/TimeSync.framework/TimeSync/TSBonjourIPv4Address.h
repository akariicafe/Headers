@interface TSBonjourIPv4Address : NSObject <NSCopying> {
    unsigned char _linkLayerAddress[6];
}

@property (nonatomic) BOOL hasLinkLayerAddress;
@property (readonly, nonatomic) unsigned int ipv4Address;
@property (readonly, nonatomic) const char *linkLayerAddress;

+ (BOOL)getLinkLayerAddress:(char *)a0 forIPv4Address:(unsigned int)a1 error:(id *)a2;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)getLinkLayerAddressError:(id *)a0;
- (id)initWithIPv4Address:(unsigned int)a0;
- (const char *)linkLayerAddress;

@end
