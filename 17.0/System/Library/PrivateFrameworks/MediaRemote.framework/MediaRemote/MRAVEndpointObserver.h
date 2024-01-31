@class NSString, MRAVRoutingDiscoverySession, NSArray, MRAVEndpoint;

@interface MRAVEndpointObserver : NSObject {
    MRAVRoutingDiscoverySession *_discoverySession;
    NSArray *_endpoints;
    id /* block */ _endpointChangedCallback;
    BOOL _didBegin;
}

@property (copy, nonatomic) id /* block */ endpointChangedCallback;
@property (readonly, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) MRAVEndpoint *endpoint;
@property (readonly, nonatomic) NSString *label;

- (void)begin;
- (void)dealloc;
- (void)end;
- (id)initWithOutputDeviceUID:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_handleOutputContextDidChangeNotification;
- (id)initWithOutputDeviceUID:(id)a0 label:(id)a1 callback:(id /* block */)a2;

@end
