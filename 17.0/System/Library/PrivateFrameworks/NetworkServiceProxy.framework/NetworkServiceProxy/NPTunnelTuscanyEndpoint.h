@class NSData, NSArray;

@interface NPTunnelTuscanyEndpoint : NWEndpoint

@property (readonly) NSData *hostsData;
@property (readonly) NSArray *hosts;

+ (unsigned int)endpointType;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsResolverCallback;
+ (id)encodeHosts:(id)a0;

- (id)encodedData;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEncodedData:(id)a0;
- (void)resolveEndpointWithCompletionHandler:(id /* block */)a0;
- (id)copyHostsWithPort:(id)a0;
- (id)initWithHosts:(id)a0;

@end
