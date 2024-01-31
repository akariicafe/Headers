@class NSString;
@protocol MSDAutosaveSessionProtocol, MSDAutosaveProtocol;

@interface MSAutosaveSession : NSObject

@property (retain, nonatomic) id<MSDAutosaveSessionProtocol> remoteSession;
@property (retain, nonatomic) id<MSDAutosaveProtocol> remoteService;
@property (readonly, copy, nonatomic) NSString *autosaveIdentifier;

+ (id)log;

- (void).cxx_destruct;
- (void)didReconnectRemoteSession:(id)a0 remoteService:(id)a1;
- (id)initWithIdentifier:(id)a0 remoteSession:(id)a1 remoteService:(id)a2;
- (void)remoteSessionDisconnectedWithError:(id)a0;

@end
