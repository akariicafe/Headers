@class NSMutableDictionary;

@interface C2RoutingTable : NSObject

@property (retain, nonatomic) NSMutableDictionary *routingTable;

- (id)init;
- (void)updateOriginalHostname:(id)a0 destinationHostname:(id)a1;
- (void).cxx_destruct;
- (id)copyAndDecorateRequest:(id)a0;

@end
