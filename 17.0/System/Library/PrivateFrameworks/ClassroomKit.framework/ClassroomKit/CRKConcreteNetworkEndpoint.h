@class NSString, NSObject;
@protocol OS_nw_endpoint;

@interface CRKConcreteNetworkEndpoint : NSObject <CRKNetworkEndpoint>

@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *underlyingEndpoint;
@property (readonly, copy, nonatomic) NSString *IPAddress;

- (void).cxx_destruct;
- (id)initWithUnderlyingEndpoint:(id)a0;

@end
