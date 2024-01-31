@protocol WFNetworkListRecord;

@interface WFPendingNetworkUpdate : NSObject

@property (copy, nonatomic) id<WFNetworkListRecord> network;

- (id)initWithNetwork:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
