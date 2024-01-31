@class NSMutableArray, BSServiceConnectionEndpointInjector, BSServiceConnection;
@protocol BSServiceConnectionHost, SASPresentationServerDelegate;

@interface SASPresentationServer : NSObject

@property (retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSMutableArray *waitForConnectBlocks;
@property (weak, nonatomic) id<SASPresentationServerDelegate> weak_delegate;
@property (nonatomic) long long presentationIdentifier;

+ (id)interface;
+ (id)serviceQuality;
+ (void)_unregisterConnection:(id)a0;
+ (id)serverForConnection:(id)a0;

- (void)_setConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (oneway void)didPresentSiri;
- (id)bulletinsOnLockScreen;
- (oneway void)resetSiriToActive;
- (oneway void)registerPresentationIdentifier:(id)a0;
- (oneway void)failedToPresentSiriWithError:(id)a0;
- (oneway void)pong;
- (oneway void)didDismiss;
- (oneway void)willDismiss;
- (id)description;
- (oneway void)speechRequestStartedFromSiriOrb;
- (id)bulletinForIdentifier:(id)a0;
- (oneway void)speechRequestCancelledFromSiriOrb;
- (void).cxx_destruct;
- (oneway void)didUpdatePresentationState:(id)a0;
- (id)allBulletins;
- (oneway void)unregisterPresentationIdentifier:(id)a0;

@end
