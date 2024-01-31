@interface CRKConcreteNetworkPrimitives : NSObject <CRKNetworkPrimitives>

+ (id)makePathMonitorForInterfaceType:(int)a0;

- (id)ethernetNetworkPathMonitor;
- (id)wifiNetworkPathMonitor;

@end
