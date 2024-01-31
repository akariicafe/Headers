@class NSString, NSXPCConnection;
@protocol CARSetupHeadUnitPairingPromptDelegate;

@interface CARSetupHeadUnitPairingPrompt : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSString *keyIdentifier;
@property (weak, nonatomic) id<CARSetupHeadUnitPairingPromptDelegate> delegate;

- (void)dealloc;
- (void)invalidate;
- (void)_setupConnection;
- (void)_handleConnectionReset;
- (void).cxx_destruct;
- (id)headUnitPairingPromptViewController;
- (id)initWithKeyIdentifier:(id)a0;
- (BOOL)wantsToPresentHeadUnitPairing;
- (void)_synchronous_servicePerform:(id /* block */)a0;
- (void)_handleDidFinishWithResult:(BOOL)a0;

@end
