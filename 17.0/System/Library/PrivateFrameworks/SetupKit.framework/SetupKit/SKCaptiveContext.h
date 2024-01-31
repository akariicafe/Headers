@class SKSetupCaptiveNetworkJoinServer;

@interface SKCaptiveContext : NSObject

@property (copy, nonatomic) id /* block */ responseHandler;
@property (retain, nonatomic) SKSetupCaptiveNetworkJoinServer *server;

- (void).cxx_destruct;

@end
