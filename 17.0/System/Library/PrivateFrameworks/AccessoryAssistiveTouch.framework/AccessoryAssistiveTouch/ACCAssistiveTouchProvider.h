@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol ACCAssistiveTouchProviderProtocol, ACCAssistiveTouchXPCServerProtocol;

@interface ACCAssistiveTouchProvider : NSObject

@property (retain, nonatomic) NSString *providerUID;
@property (retain, nonatomic) id<ACCAssistiveTouchProviderProtocol> delegate;
@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<ACCAssistiveTouchXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (nonatomic) BOOL cachedState;

- (void)connectToServer;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 initialState:(BOOL)a1;
- (void)notifyAssistiveTouchEnabledState:(BOOL)a0;
- (void)accessoryAssistiveTouchAttached:(id)a0;
- (void)accessoryAssistiveTouchDetachAll;
- (void)accessoryAssistiveTouchDetached:(id)a0;
- (BOOL)calculateDesiredState:(id)a0;
- (void)requestState:(id)a0;
- (void)setEnabled:(id)a0 flag:(BOOL)a1;

@end
