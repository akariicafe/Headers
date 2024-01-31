@class NSXPCConnection;

@interface SBSClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) unsigned long long clientType;

- (void).cxx_destruct;

@end
