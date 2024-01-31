@class NSData;

@interface TSXgPTPUnicastUDPv6EtEPort : TSXgPTPFDEtEPort

@property (copy, nonatomic) NSData *destinationIPv6Address;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)a0;

@end
