@class NSString, NSXPCConnection;

@interface EREyeReliefConnection : NSObject <EREyeReliefProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConnection;

@end
