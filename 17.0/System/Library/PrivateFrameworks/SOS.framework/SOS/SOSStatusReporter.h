@class NSString, NSXPCConnection;

@interface SOSStatusReporter : NSObject <SOSStatusManagerClientProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int connectionRequestNotificationToken;
@property (nonatomic) long long flowState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateSOSFlowState:(long long)a0;
- (void)_updateSOSFlowState;
- (void)handleSosdLaunch;

@end
